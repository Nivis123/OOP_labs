#ifndef INC_26_PONG_CPP_BALLFACTORY_H
#define INC_26_PONG_CPP_BALLFACTORY_H

#include <memory> 
#include "Ball.h"

class BallFactory {
public:
    static std::shared_ptr<Ball> createBall(unsigned short int &windowLimitX, unsigned short int &windowLimitY, unsigned short int &wallThickness, float movingSpeedX, float movingSpeedY) {
        return std::make_shared<Ball>(windowLimitX, windowLimitY, wallThickness, movingSpeedX, movingSpeedY);
    }
};

#endif 
