/*************************************************************************
  > File Name: video_pub.cpp
  > Author: cyz
  > Mail:
  > Created Time: Sun 24 Feb 2019 05:08:34 PM
  >it situmalated a video file to normal video capture, thus you can use it to debug
 ************************************************************************/


#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <sstream>
#include <iostream>
#include "opencv2/opencv.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <std_msgs/Bool.h>
#include"mv_driver/raw_img.h"
//#include "preprocess.h"

using namespace std;
using namespace cv;
Size large_size = Size(640, 512);
Size small_size = Size(640, 480);
//Size dist_size=large_size;
Size dist_size=small_size;

//add your video path here
string video_source="/home/qudoudou/RC2021/src/video_pub/test.mp4";



int main(int argc, char **argv)
{
  ros::init(argc,argv,"video_publisher");
  ros::NodeHandle nh;
  ros::Publisher pub = nh.advertise<mv_driver::raw_img>("/raw_img", 1);
  mv_driver::raw_img img_msg;

  //nh.getParam("/video_source",video_source);
  ros::Rate loop_rate(30);
  VideoCapture cap(video_source);//open video in the path

  if(!cap.isOpened())
  {
    std::cout<<"open video failed!"<<std::endl;
    return -1;
  }
  else
    std::cout<<"open video success!"<<std::endl;

  Mat color,depth;
  bool isSuccess = true;

  while(nh.ok())
  {
    isSuccess = cap.read(color);
    if(!isSuccess)//if the video ends, then break
    {
      std::cout<<"video ends"<<std::endl;
      break;
    }
    /// preprocess: cuda version
    //        processor.proc_update(frame);
    //        if(!processor.compImg.empty())
    //            img_show=processor.compImg;
    //        else
    //            img_show=frame;


    ///preprocess: opencv version
    Size src_size=Size(color.cols,color.rows);
    if(src_size!=dist_size)   // resize to 640x512
      resize(color, color, dist_size);
    cvtColor(color,depth,COLOR_BGR2GRAY);



    sensor_msgs::ImagePtr color_msg = cv_bridge::CvImage(std_msgs::Header(), "bgr8", color).toImageMsg();
   	color_msg->header.stamp = ros::Time::now();
		sensor_msgs::ImagePtr depth_msg = cv_bridge::CvImage(std_msgs::Header(), "mono8", depth).toImageMsg();
    depth_msg->header.stamp = ros::Time::now();
    img_msg.color = *color_msg;
		img_msg.depth = *depth_msg;
    pub.publish(img_msg);

    ros::spinOnce();
    loop_rate.sleep();
  }
  return 0;
}
