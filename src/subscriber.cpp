#include <ros/ros.h>

#include <geometry_msgs/Point.h>

void pointCallback(const geometry_msgs::Point::ConstPtr& poin_msg) {
 ROS_INFO("I've got a point");
}

int main(int argc, char** argv) {
 ros::init(argc, argv, "subscriber");
 ros::NodeHandle nh;


 ros::Subscriber our_pub = nh.subscribe("point", 10, &pointCallback);

 ros::spin();




 return 0;
}



