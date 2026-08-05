#pragma once
#include <string>

class MobileRobot {
    private:
        std::string name;
        float left_speed;
        float right_speed;

    public:
        MobileRobot(std::string robot_name);

        void setSpeed(float left, float right);
        void printStatus();
        void stop();
};