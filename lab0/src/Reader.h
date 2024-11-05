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
    std::map<std::string, int> read(const std::string& filename,std::map<std::string, int> wordMap);   
};
#endif