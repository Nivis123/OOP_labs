#include "Paddle.h"

void Paddle::changePaddlePosition(bool sdlKeyboardStateUp, bool sdlKeyboardStateDown, float deltaTime) {
    _mPaddleDirection = 0;

    if (sdlKeyboardStateUp) {
        _mPaddleDirection -= 1;
    }
    if (sdlKeyboardStateDown) {
        _mPaddleDirection += 1;
    }

    _position.y += static_cast<float>(_mPaddleDirection) * _mPaddleMovingSpeed * deltaTime;

    isOutOfTheWindow();
}

void Paddle::isOutOfTheWindow() {
    
    if (static_cast<int>(_position.y) + _length / 2 > _windowLimitY) {
        _position.y = static_cast<float>(_windowLimitY) - static_cast<float>(_length) / 2;
    }

    if (static_cast<int>(_position.y) - _length / 2 < 0) {
        _position.y = 0 + static_cast<float>(_length) / 2;
    }
}

short int* Paddle::getPaddleDirection() { return &_mPaddleDirection; }

float* Paddle::getPaddleMovingSpeed() { return &_mPaddleMovingSpeed; }
