#include "image_converter/image_converter.h"
#include <image_transport/image_transport.h>
using image_converter::ImageConverter;
int main(int argc, char** argv) {
  ros::init(argc, argv, "image_converter");

  ros::NodeHandle n;

  ros::Publisher pub = n.advertise<sensor_msgs::Image>("image_out", 1000);

  ImageConverter image_converter(pub);

  ros::Subscriber sub = n.subscribe("image_in", 1000, &ImageConverter::Callback,
                                    &image_converter);

  ros::spin();

  return 0;
}
