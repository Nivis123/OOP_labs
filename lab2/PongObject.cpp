#include "PongObject.h"

std::random_device PongObject::fluxCapacitor;
std::mt19937 PongObject::randomGen(PongObject::fluxCapacitor());
std::uniform_int_distribution<unsigned short int> PongObject::randomColor(50, 255);

void PongObject::setPosition(float x, float y) {
    _position.x = x;
    _position.y = y;
}

void PongObject::setWindowLimits(unsigned short int windowLimitX, unsigned short int windowLimitY) {
    _windowLimitX = windowLimitX;
    _windowLimitY = windowLimitY;
}

SDL_Rect* PongObject::getDrawingObject() { 
    return &_drawingObject; 
}

void PongObject::redraw() {
    _drawingObject.x = _position.x - static_cast<float>(_thickness) / 2;
    _drawingObject.y = _position.y - static_cast<float>(_length) / 2;
    _drawingObject.w = _thickness;
    _drawingObject.h = _length;
}

void PongObject::switchColor() {
    for (int i = 0; i < 3; i++) {
        _color[i] = randomColor(randomGen); // Используйте уже созданные объекты
    }
}

std::vector<unsigned short int> PongObject::getColor() { 
    return _color; 
}

XYPosition* PongObject::getPosition() { 
    return &_position; 
}

unsigned short int* PongObject::getLength() { 
    return &_length; 
}

unsigned short int* PongObject::getThickness() { 
    return &_thickness; 
}
