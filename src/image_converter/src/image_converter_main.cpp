#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>
#include "ros/ros.h"
#include "sensor_msgs/Image.h"

ros::Publisher pub;

void imageCallback(const sensor_msgs::Image::ConstPtr& msg) {
  cv_bridge::CvImagePtr black_and_white = cv_bridge::toCvCopy(msg, "mono8");
  // pub.publish(*msg);
  pub.publish(*black_and_white);
}

int main(int argc, char** argv) {
  ros::init(argc, argv, "image_converter");

  ros::NodeHandle n;

  pub = n.advertise<sensor_msgs::Image>("image_out", 1000);

  ros::Subscriber sub = n.subscribe("image_in", 1000, imageCallback);

  ros::spin();

  return 0;
}
