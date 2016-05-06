#include "ros/ros.h"
#include "beginner_tutorials/AddTwoInts.h"
#include <cstdlib>
using namespace ros;
int main(int argc, char **argv) {
	init(argc, argv, "add_two_ints_client");
	if(argc != 3) {
		ROS_INFO("usage: add_two_ints_client X Y");
		return 1;
	}

	NodeHandle n;
	ServiceClient client = n.serviceClient<beginner_tutorials::AddTwoInts>("add_two_ints");
	beginner_tutorials::AddTwoInts srv;
	srv.request.a = atoll(argv[1]);
	srv.request.b = atoll(argv[2]);

	if (client.call(srv)) { //this line call the servie 
		ROS_INFO("Sum: %ld", (long int)srv.response.sum);
	} else {
		ROS_ERROR("Failed to call service add_two_ints");
		return 1;	
	}
	return 0;
}
