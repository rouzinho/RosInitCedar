#include "InitRos.h"
#include "ros/ros.h"
#include "std_msgs/String.h"


//#include <sstream>


/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
InitRos::InitRos(){}


void InitRos::run()
{
    int argc = 0;
    char **argv = NULL;
    ros::init(argc, argv, "listener");
    ros::Rate loop_rate(40);
    loop_rate.sleep();
}
void requestStop()
{
    ros::shutdown();
}
