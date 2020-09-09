#include <ros/ros.h>
#include <sensor_msgs/Joy.h>

class JoySub {
    public:
        JoySub();
    private:
        ros::NodeHandle nh;
        ros::Subscriber sub;
        void callback(const sensor_msgs::Joy::ConstPtr& joy_msg);

};

JoySub::JoySub() {
    sub = nh.subscribe("/joy", 1, &JoySub::callback, this);
}

void JoySub::callback(const sensor_msgs::Joy::ConstPtr& joy_msg) {
    /*
    perform function
    */
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "joy_sub");
    JoySub j;
    ros::spin();

    return 0;
} 
