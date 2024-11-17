#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <map>
#include <fstream>
#include "Reader.h"
#include "Counter.h"
#include "Writer.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        std::cout << "Error data" << std::endl;
        return 1;
    }

    Reader reader;
    Writer writer;
    std::string inputFileName = argv[1];
    std::string outputFileName = argv[2];

    try
    { 
        std::string line;
        std::map<std::string, int> wordMap;
        wordMap = reader.read(inputFileName,wordMap);

        int totalCount = 0;
        for (const auto &pair : wordMap)
        {
            totalCount += pair.second;
        }
        
        writer.write(outputFileName, wordMap, totalCount);
        
    }

    catch (const std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
        return 1;
    }
    
    return 0;
}