//
// Created by Maikol Guzman on 10/15/20.
//

#include <iostream>
#include "DataFacade.h"

/**
 * This method simulate other system that is using the facade to process data.
 * When a facade manages the lifecycle of the subsystem, the client might not even know about the existence of the
 * subsystem. This approach lets you keep the complexity under control.
 * @param dataFacade the simple interface provide by the Facade.
 */
void ClientApp(DataFacade* dataFacade) {
    std::cout << DataFacade::processData();
}

/**
 * Main Class
 * @return
 */
int main() {
    std::cout << "Hello, Universidad Nacional!" << std::endl;

    TextFileManager *textFileManager = nullptr;
    BinaryFileManager *binaryFileManager = nullptr;
    AnalyzeData *analyzeData = nullptr;
    auto *dataFacade = new DataFacade(analyzeData, binaryFileManager, textFileManager);

    ClientApp(dataFacade);

    return 0;
};