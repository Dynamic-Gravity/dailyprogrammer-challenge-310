#include "functions.h"

/**
 * [name Default Constructor]
 * @param  n [name]
 * @param  l [vector of other names]
 */
Child::Child(std::string n, std::vector<std::string> l){
        setName(n);
        setList(l);
}

/**
 * [Child::getname returns the name(private var) of child object]
 * @return [string name]
 */
std::string Child::getname(){
        return name;
}

/**
 * [Child::setName sets private var to passed in string]
 * @param s [string being passed in, assigned to name private var]
 */
void Child::setName(std::string s){
        name = s;
}

/**
 * [Child::getList returns a vector of all the children's names]
 */
void Child::getList(){
        std::cout << getname() << " > ";
        for (std::string name : list) {
                if(name.compare(getname())) {
                        std::cout << name << "; ";
                }
        }
        std::cout << "\n";
}

/**
 * [Child::setList sets internal private var to passed in var]
 * @param l [vector of names]
 */
void Child::setList(std::vector<std::string> l){
        list = l;
}

/**
 * [Child::shuffleList rearranges the elements in the range randomly]
 */
void Child::shuffleList(){
        std::random_shuffle(list.begin(), list.end());
}
