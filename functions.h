#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__
#include <iostream>
#include <vector>
#include <algorithm>

/**
 * [getname description]
 * @return [description]
 */
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
