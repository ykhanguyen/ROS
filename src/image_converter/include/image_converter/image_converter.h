#ifndef _IMAGE_CONVERTER_IMAGE_CONVERTER_H_
#define _IMAGE_CONVERTER_IMAGE_CONVERTER_H_
#include "ros/ros.h"
#include "sensor_msgs/Image.h"

namespace image_converter {
class ImageConverter {
 private:
  ros::Publisher pub_;

 public:
  ImageConverter(const ros::Publisher& pub);
  void Callback(const sensor_msgs::Image::ConstPtr& msg);
};
}

#endif
