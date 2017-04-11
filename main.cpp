/**
 * Dynamic-Gravity
 * April 11, 2017
 * https://github.com/Dynamic-Gravity/dailyprogrammer-challenge-310
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "functions.h"

using namespace std;

/**
 * [main description]
 * @param  argc [number of arguments]
 * @param  argv [the argument, in this case it is a file]
 * @return      [returns 0 on success]
 */
int main( int argc, char* argv[] ){

        ifstream in(argv[1]);
        string value;
        vector<string> nameList;
        vector<Child> kids;

        //open file of childrens names
        if( !in.is_open() ) {
                cout << "Can't open file, or no file has been passed via arguments!\n";
                return -1;
        } else {
                //parse file for names, semicolon as delimeter
                while ( getline(in, value, ';') ) {
                        //remove newlines before pushing to the vector
                        value.erase(remove(value.begin(), value.end(), '\n'), value.end());
                        nameList.push_back( value );
                }
                in.close();
        }

        //loop through namelist and instantiate an object for each name in list,
        //pushing everything into a vector of objects
        for (string name : nameList) {
                Child c(name, nameList);
                kids.push_back(c);
        }

        //loop through vector of objects, randomly shuffle each internal vector
        //of all the childrens names, then retrieve that list to be used in the
        //loto seating assignment.
        for(unsigned i; i<kids.size();++i){
                kids[i].shuffleList();
                kids[i].getList();
        }

        return 0;
}
