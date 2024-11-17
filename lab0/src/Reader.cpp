
#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <map>
#include <fstream>
#include "Reader.h"
#include "Counter.h"

std::map<std::string, int> Reader::read(const std::string &filename,std::map<std::string, int> wordMap)
{
    std::ifstream file(filename);
    Counter counter;

    if (!file)
    {
        throw std::invalid_argument("didn't open file");
    }

    std::string line;
    while (std::getline(file, line))
    {
        std::map<std::string, int> newCounts = counter.Count(line);
        for (const auto& pair : newCounts)
        {
            wordMap[pair.first] += pair.second; 
        }
    }

    file.close();
    return wordMap;

}
