#include <ros/ros.h>
bool i_am_tired = false;
ros::Timer timer;

void callback(const ros::TimerEvent & event) {
  static int counter = 0;
  counter ++;


  ROS_INFO_STREAM("I did a pushup!"<< counter);

  if (counter > 10){
    //...
    timer.stop();
  }
  else {
     //...
 }
}
int main(int argc, char** argv) {


  ros::init(argc, argv,"pushup_maker");
  ros::NodeHandle nh;

  ros::Timer timer = nh.createTimer(ros::Duration(1), callback);

  ros::spin();

  return 0;
}



