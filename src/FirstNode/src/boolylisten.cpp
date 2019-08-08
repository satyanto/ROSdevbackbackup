// Will subscribe to a 32-bit float array and then output a 'succccccess' in the output

#include "ros/ros.h"
#include "std_msgs/Int8.h"

using namespace std;

void boolReceived(const std_msgs::Int8::ConstPtr& boolmsg)
{
    if (boolmsg->data == 1) {
        ROS_INFO("Bool received was true!!!");
    } else {
        ROS_INFO("Sad days ahead!");
    }
}

int main(int argc, char **argv)
{
    ros::init(argc,argv, "boolylisten");
    ros::NodeHandle nodeobject;

    ros::Subscriber nodesubscriber = nodeobject.subscribe("boolbus", 1000, boolReceived);

    ros::spin();

    return 0;
}
