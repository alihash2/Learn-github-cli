#include "mobile_robot.hpp"
#include <iostream>

MobileRobot::MobileRobot(std::string robot_name) : rng(std::random_device{}()){
    name = robot_name;
    left_speed = 0.0f;
    right_speed = 0.0f;
}

void MobileRobot::setSpeed(float left, float right){
    left_speed = left;
    right_speed = right;
}

void MobileRobot::printStatus(){
    std::cout << "[" << name << "] Left Speed: " << left_speed << " | Right Speed: " << right_speed << std::endl;
}

void MobileRobot::stop(){
    left_speed = 0.0f;
    right_speed = 0.0f;
    std::cout << "[" << name << "] Stopped." << std::endl; 
}

WheelData MobileRobot::getWheelData(){
    std::uniform_real_distribution<float> noise(-0.1f, 0.1f);
    WheelData data;
    data.left_speed = left_speed + noise(rng);
    data.right_speed = right_speed + noise(rng);
    return data;
}

OdometryData MobileRobot::getOdometry(){
    std::uniform_real_distribution<float> pos_dist(-5.0f, 5.0f);
    std::uniform_real_distribution<float> angle_dist(-3.14f, 3.14f);

    OdometryData data;
    data.x = pos_dist(rng);
    data.y = pos_dist(rng);
    data.z = angle_dist(rng);

    return data;
}

LidarData MobileRobot::getLidardata(){
    std::uniform_real_distribution<float> range_dist(0.2f, 10.0f);

    LidarData data;
    for (int i = 0; i<5; ++i){
        float random_distance = range_dist(rng);

        data.ranges.push_back(random_distance);
    }

    return data;
}
