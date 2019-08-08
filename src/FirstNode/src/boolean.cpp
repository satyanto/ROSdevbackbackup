
#include "ros/ros.h"
#include "std_msgs/Bool.h"

int main(int argc, char **argv)
{
    ros::init(argc,argv,"boll");

    ros::NodeHandle node;

    ros::Publisher pub_object = node.advertise<std_msgs::Bool>("pass",1000);

    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        std_msgs::Bool massage_object;

        massage_object.data = 1;

        pub_object.publish(massage_object);

        ros::spinOnce();
        loop_rate.sleep();

    }
}
