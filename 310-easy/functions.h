#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__
#include <iostream>
#include <vector>
#include <algorithm>

//The Child class contains two private variables, name & list.
//name = this object's name data
//list = vector of all the other known child names
//Constructor = takes name & vector to put into the private variables
//setName sets the private name
//setList sets the private list
//getList gets the data from private list
//getname gets the data from private name
//shuffleList shuffles data inside the private list randomly
class Child {
  private:
    std::string name;
    std::vector<std::string> list;
  public:
    Child(std::string n, std::vector<std::string> l);
    std::string getname();
    void setName(std::string s);
    void getList();
    void setList(std::vector<std::string> l);
    void shuffleList();
};

#endif
