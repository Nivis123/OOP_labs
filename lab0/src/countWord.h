#ifndef COUNTWORD_H
#define COUNTWORD_H

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <list>

class countWord {

    int count;
    std::map<std::string, int> wordMap;

public:

    countWord();

    void readingAndCounting(std::string nameInputFile);

    void sortDataAndWriteToCSV(std::string nameOutputFile);

private:

    void writeToCSV(std::list<std::pair<std::string, int>> listPair,std::string nameOutputFile);
};


#endif 