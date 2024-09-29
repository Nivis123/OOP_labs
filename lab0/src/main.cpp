#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <map>
#include <fstream>
#include"Reader.h"
#include"Counter.h"
#include "Writer.h"


int main(int argc, char** argv) {
    if (argc != 3) {
        std::cout << "Error data" << std::endl;
        return 1;
    }
    Reader reader;
    Counter counter;
    Writer writer;
    std::string inputFileName = argv[1];
    std::string outputFileName = argv[2];
    try {
        std::list<std::string> lines = reader.read(inputFileName);
        std::map<std::string, int> wordMap = counter.count(lines);
        int totalCount = 0;
        for (const auto& pair : wordMap) {
            totalCount += pair.second;
        }
        writer.write(outputFileName, wordMap, totalCount);
    } catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
        return 1;
    }
    return 0;
}