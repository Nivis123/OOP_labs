#include <iostream>
#include <list>
#include <cmath>
#include <string>
#include <map>
#include <fstream>
#include"Counter.h"


bool isDigit(char c) {
        return c >= '0' && c <= '9';
    }

// Проверка, является ли символ буквой
bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

std::map<std::string, int> Counter::count(const std::list<std::string>& lines) {
        std::map<std::string, int> wordMap;
        int count = 0;
        for (const std::string& line : lines) {
            std::string newWord;
            bool prevSymbolIsSep = true;
            for (char c : line) {
                if (isDigit(c) || isLetter(c)) {
                    if (prevSymbolIsSep) count++;
                    prevSymbolIsSep = false;
                    newWord += c;
                } else {
                    if (!prevSymbolIsSep) {
                        wordMap[newWord]++;
                        newWord = "";
                    }
                    prevSymbolIsSep = true;
                }
            }
            if (!newWord.empty()) {
                wordMap[newWord]++;
            }
        }
        return wordMap;
    }