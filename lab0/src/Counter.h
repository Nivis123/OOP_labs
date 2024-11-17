#ifndef COUNTR_H
#define COUNTR_H

#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <map>
#include <fstream>
class Counter {
public:

    std::map<std::string, int> Count(const std::string &lines);
};
#endif