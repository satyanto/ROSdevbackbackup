
#include "ros/ros.h"
// convenience include -- includes all the headers necessary to use most common public pieces of ROS system

#include "std_msgs/String.h"
// std_msgs package is a ROS package that includes all the common ROS message datatypes, such as bool, char, int64, string, etc.

int main(int argc, char **argv)
{

    ros::init(argc, argv, "annoyingchatterer");
    // ask ROS to initialize the annoying chatterer node, you must use a version of ros::init before using any other part of the ROS system

    ros::NodeHandle nodeobject;
    // ask ROS to handle this node lol
    // it will initialize and serve as an access point (like a bridge or tunnel between this node village and the ros city)

    ros::Publisher publisher_annoyingchatterer = nodeobject.advertise<std_msgs::String>("annoying_topic", 1000);
    // publisher_annoyingchatterer is the ROS's publisher object, that you can call to publish data using the 'advertise' function

    ros::Rate loop_rate(10);



    int cnt = 0;
    while (ros::ok())
    {
        std_msgs::String topicmessage;
        std::stringstream streamofthestring;
        streamofthestring << "hello world " << cnt;
        topicmessage.data = streamofthestring.str();

        ROS_INFO("%s", topicmessage.data.c_str());

        publisher_annoyingchatterer.publish(topicmessage);

        ros::spinOnce();

        loop_rate.sleep();

        ++cnt;
    }

    return 0;
}
