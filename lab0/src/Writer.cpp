#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <map>
#include <fstream>
#include "Writer.h"


 bool Writer::compare(const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
    return a.second > b.second;
}

void Writer::writeToCSV(const std::list<std::pair<std::string, int>>& listPair, const std::string& filename, int totalCount) {
    std::ofstream file(filename);
    if (!file) {
        throw std::invalid_argument("output file not open");
    }
    for (const auto& pair : listPair) {
        file << pair.first << "," << pair.second << "," << floor((double)pair.second / totalCount * 1000000 + 0.5) / 10000.0 << std::endl;
    }
    file.close();
}

void Writer::write(const std::string& filename, const std::map<std::string, int>& wordMap, int totalCount) {
    std::list<std::pair<std::string, int>> listPair;
    for (const auto& pair : wordMap) {
        listPair.push_back(pair);
    }
    listPair.sort(compare);
    writeToCSV(listPair, filename, totalCount);
}

