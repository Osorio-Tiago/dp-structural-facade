//
// Created by Maikol Guzman on 10/15/20.
//

#ifndef MY_PROJECT_NAME_TEXTFILEMANAGER_H
#define MY_PROJECT_NAME_TEXTFILEMANAGER_H


#include <string>

class TextFileManager {
public:
    static std::string loadCSVFile(const std::string& fileName);
    static std::string loadJSONFile(const std::string& fileName);
};


#endif //MY_PROJECT_NAME_TEXTFILEMANAGER_H
