#include "mobile_robot.hpp"
#include <iostream>

int main(){
    MobileRobot myRobot("Trixie1");

    myRobot.printStatus();

    myRobot.setSpeed(1.5f, 1.5f);
    myRobot.printStatus();

    myRobot.stop();
    myRobot.printStatus();

    return 0;
}