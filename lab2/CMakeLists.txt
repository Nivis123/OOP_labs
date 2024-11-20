cmake_minimum_required(VERSION 3.13)
project(Pong_Cpp)

set(CMAKE_CXX_STANDARD 17)


find_package(SDL2 REQUIRED)

add_executable(Pong_Cpp main.cpp Game.h Game.cpp Paddle.cpp Paddle.h PongObject.cpp PongObject.h Ball.cpp Ball.h)

target_link_libraries(Pong_Cpp ${SDL2_LIBRARIES})