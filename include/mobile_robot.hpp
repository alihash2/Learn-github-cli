#pragma once
#include <string>
#include <vector>
#include <random>

struct WheelData{
    float left_speed;
    float right_speed;
};

struct OdometryData {
    float x;
    float y;
    float z;
};

struct LidarData {
    std::vector<float> ranges;
};

class MobileRobot {
    private:
        std::string name;
        float left_speed;
        float right_speed;
        std::mt19937 rng; //random generator

    public:
        MobileRobot(std::string robot_name);

        void setSpeed(float left, float right);
        void printStatus();
        void stop();

        WheelData getWheelData();
        OdometryData getOdometry();
        LidarData getLidardata();
};