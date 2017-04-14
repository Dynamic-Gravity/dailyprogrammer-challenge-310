#include <iostream>
#include <fstream>
#include "clib.h"
#include "flib.h"
using namespace std;
int main(int argc, char* argv[]){

        //parameter was a file passed via args
        ifstream file(argv[1]);
        string fileContents = getFileContents(file, ";");
        cout << fileContents << "\n";

        return 0;
}
