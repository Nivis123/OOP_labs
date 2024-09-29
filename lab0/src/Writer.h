#ifndef WRITER_H
#define WRITER_H

#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <map>
#include <fstream>
class Writer {
public:
    // Запись в файл списка пар "слово - частота"
    void write(const std::string& filename, const std::map<std::string, int>& wordMap, int totalCount);

private:

    static bool compare(const std::pair<std::string, int>& a, const std::pair<std::string, int>& b);

    void writeToCSV(const std::list<std::pair<std::string, int>>& listPair, const std::string& filename, int totalCount);
};
#endif