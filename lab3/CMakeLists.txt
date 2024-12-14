cmake_minimum_required(VERSION 3.13)
project(Observer)


add_executable(${PROJECT_NAME} main.cpp IObserver.h Observers.h Subject.h)



