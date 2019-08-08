#include "ros/ros.h"
#include "std_msgs/Int8.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "boolycall");
    ros::NodeHandle nodeobject;

    ros::Publisher nodepublisher = nodeobject.advertise<std_msgs::Int8>("boolbus", 1000);

    ros::Rate loop_rate(1);

    while (ros::ok()) 
    {
        int x = rand() % 2;

        std_msgs::Int8 boolea;
        boolea.data = x;
        
        printf("x outputted: %d \n",x);
        //printf("boolea is: \n",boolea.data);

        nodepublisher.publish(boolea);

        ros::spinOnce();
        loop_rate.sleep();
    }
}