#ifndef READER_H
#define READER_H

#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <map>
#include <fstream>
class Reader {
public:
    std::list<std::string> read(const std::string& filename);
     
};
#endif