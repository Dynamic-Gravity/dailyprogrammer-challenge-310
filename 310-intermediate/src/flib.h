#ifndef __FLIB_H__
#define __FLIB_H__
#include <iostream>
#include <fstream> //needed for getFileContents()
void printError(int n);
std::string getFileContents(std::ifstream &file);
std::string getFileContents(std::ifstream &file, std::string delim);
#endif
