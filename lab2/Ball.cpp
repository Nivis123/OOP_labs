#include "Ball.h"

bool* Ball::hasBounced() { return &_hasBounced; }

bool Ball::ballOut() {
    return _position.x < 0 ||
           _position.y < 0 ||
           _position.x > static_cast<float>(_windowLimitX) ||
           _position.y > static_cast<float>(_windowLimitY);
}

void Ball::resetVelocity() {
    _velocityX = _startVelocityX;
    _velocityY = _startVelocityY;
}

void Ball::updatePosition(float &deltaTime, unsigned short int &wallThickness, float &paddlePositionY, unsigned short int &paddleLength) {
    
    _position.x += _velocityX * deltaTime;
    _position.y += _velocityY * deltaTime;

    _hasBounced = false;

    
    if (_position.y <= static_cast<float>(wallThickness) && _velocityY < 0) {
        _velocityY *= -(1 + _acceleration);
        _hasBounced = true;
    }
        
    if (_position.y >= static_cast<float>(_windowLimitY - wallThickness) && _velocityY > 0) {
        _velocityY *= -(1 + _acceleration);
        _hasBounced = true;
    }
        
    if (_position.x >= static_cast<float>(_windowLimitX - wallThickness) && _velocityX > 0) {
        _velocityX *= -(1 + _acceleration);
        _hasBounced = true;
    }

    
    if (_position.x <= static_cast<float>(wallThickness) &&
        _velocityX < 0 &&
        _position.y <= paddlePositionY + paddleLength / 2 &&
        _position.y >= paddlePositionY - paddleLength / 2
        ) {
        _velocityX *= -(1 + _acceleration);
        _hasBounced = true;
    }

}
