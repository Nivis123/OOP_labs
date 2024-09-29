#ifndef COUNTWORD_H
#define COUNTWORD_H

#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <map>
#include <fstream>
#include"Reader.h"

std::list<std::string> Reader::read(const std::string& filename) {
        std::list<std::string> lines;
        std::ifstream file(filename);
        if (!file) {
            throw std::invalid_argument("input file not open");
        }
        std::string line;
        while (std::getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
        return lines;
    }
#endif 