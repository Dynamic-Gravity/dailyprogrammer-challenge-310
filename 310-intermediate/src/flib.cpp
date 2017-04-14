/**
 * Dynamic-Gravity's really useful function library.
 */
#include "flib.h"
/**
 * [printError prints error messages]
 * @param n [the specific error code]
 */
void printError(int n){
        switch(n) {
        case 0: std::cout << "Error in input file stream!\n";
                break;
        default: std::cout << "This is a generic error. \n";
        }
}
/**
 * [getFileContents returns file contents]
 * @param  file [ifstream address]
 * @return      [string of the file contents, with all whitespace removed]
 */
std::string getFileContents(std::ifstream &file){

        std::string container, buffer;
        try {
                if(!file.good()) {
                        throw -1;
                } else {
                        while (file >> buffer) {
                                container += buffer;
                        }
                        file.close();
                }
        } catch (int e) {
                switch(e) {
                case -1: printError(0);
                        break;
                }
        }
        return container;
}
/**
 * [getFileContents  overload, returns file contents with a specified delimeter]
 * @param  file      [ifstream address]
 * @param  delimeter [desired delimeter to concatenate into return string]
 * @return           [string of the file contents]
 */
std::string getFileContents(std::ifstream &file, std::string delimeter){

        std::string container, buffer;
        try {
                if(!file.good()) {
                        throw -1;
                } else {
                        while (file >> buffer) {
                                container += buffer + delimeter;
                        }
                        file.close();
                }
        } catch (int e) {
                switch(e) {
                case -1: printError(0);
                        break;
                }
        }
        return container;
}
