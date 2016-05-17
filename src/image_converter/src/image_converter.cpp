#include "image_converter/image_converter.h"
#include <cv_bridge/cv_bridge.h>

namespace image_converter {
ImageConverter::ImageConverter(const ros::Publisher& pub) : pub_(pub) {}
void ImageConverter::Callback(const sensor_msgs::Image::ConstPtr& msg) {
  cv_bridge::CvImagePtr black_and_white = cv_bridge::toCvCopy(msg, "mono8");
  pub_.publish(*black_and_white);
}
}
