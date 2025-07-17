#include <iostream>
#include <string>

void getVersion(std::string &version) {
    version = "0.0.1";
}

int importModel(const std::string &filename) {
    return 0;
}

int consolidateMatrices() {
    return 0;
}

int solveJobs() {
    return 0;
}

int postprocessResults() {
    return 0;
}

int exportResults(const std::string &fileame) {
    return 0;
}

int main(int argc, char *argv[]) {
    std::string version;
    getVersion(version);
    std::cout << "FeSolve version " << version << std::endl;

    std::string importFile, exportFile;
    importModel(importFile);
    consolidateMatrices();
    solveJobs();
    postprocessResults();
    exportResults(exportFile);

    return 0;
}

