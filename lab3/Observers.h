
#ifndef OBSERVERS_H
#define OBSERVERS_H

#include <iostream>
#include "IObserver.h"

template <typename T>
class ConsoleObserver : public IObserver<T> {
public:
    void onEvent(const T& eventData) override {
        std::cout << "_ConsoleObserver_" << eventData << std::endl;
    }
};

template <typename T>
class LoggingObserver : public IObserver<T> {
public:
    void onEvent(const T& eventData) override {
        std::cout << "_LoggingObserver_" << eventData << std::endl; 
    }
};

#endif 
