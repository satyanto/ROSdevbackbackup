# ROSdev
Compilation of Nodes & franka_ros development projects.
Due to previous issues of tracking the entire compiled catkin workspace, this repository only includes specific node folders / files that must be placed correctly /compiled before running.

To use, create a catkin workspace in a desired path, and then place folders accordingly.

## Nodes
Nodes belong under /src
Must be compiled using catkin_make and rosdep for dependencies.

Running catkin_make with a valid node folder inside /src will create a node folder inside 'share' and 'lib' inside /devel and also will make a node folder inside /build.

These compiled files will NOT be tracked, only the main files and catkin files under the /src workspace.

Remember that all of the compilation will depend on the CMakeLists.txt file inside the node folder, and executables and the target link libraries must be defined inside the CMakeLists.txt file.

## Franka_ROS Development
Controller development is done under /src/franka_ros/hafidh_control
