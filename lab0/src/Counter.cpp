#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <map>
#include <fstream>
#include <cctype>
#include "Counter.h"

std::map<std::string, int> Counter::Count(const std::string &line)
{
    std::map<std::string, int> wordMap;
    std::string word;
    for (char c : line) {
        if (std::isalnum(c) || c == '\'') 
        { 
            word += c;

        } else 
        {
            if (!word.empty()) {
                
                wordMap[word]++;
                word = "";
                
            }
        }
    }

    if (!word.empty()) {
        ++wordMap[word]; 
    }

    return wordMap;
}