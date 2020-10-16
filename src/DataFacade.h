//
// Created by Maikol Guzman on 10/15/20.
//

#ifndef DP_STRUCTURAL_FACADE_DATAFACADE_H
#define DP_STRUCTURAL_FACADE_DATAFACADE_H


#include "AnalyzeData.h"
#include "BinaryFileManager.h"
#include "TextFileManager.h"

class DataFacade {
protected:
    AnalyzeData* analyzeData;
    BinaryFileManager* binaryFileManager;
    TextFileManager* textFileManager;
public:
    DataFacade(AnalyzeData *analyzeData, BinaryFileManager *binaryFileManager, TextFileManager *textFileManager);

    virtual ~DataFacade();

    static std::string processData();
};


#endif //DP_STRUCTURAL_FACADE_DATAFACADE_H
