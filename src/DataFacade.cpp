//
// Created by Maikol Guzman on 10/15/20.
//

#include "DataFacade.h"

DataFacade::DataFacade(AnalyzeData *analyzeData, BinaryFileManager *binaryFileManager, TextFileManager *textFileManager)
        : analyzeData(analyzeData), binaryFileManager(binaryFileManager), textFileManager(textFileManager) {
    this->analyzeData = analyzeData ?: new AnalyzeData;
    this->textFileManager = textFileManager ?: new TextFileManager;
    this->binaryFileManager = binaryFileManager ? : new BinaryFileManager;
}

DataFacade::~DataFacade() {
    delete analyzeData;
    delete textFileManager;
    delete binaryFileManager;
}

std::string DataFacade::processData() {
    std::string result = "\nDataFacade initializes different operations:\n";
    result += TextFileManager::loadCSVFile("myFile.csv");
    result += TextFileManager::loadJSONFile("myFile.json");
    result += BinaryFileManager::saveData();
    result += AnalyzeData::processData();
    return result;
}
