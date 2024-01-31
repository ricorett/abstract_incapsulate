#ifndef ADDRESS_HPP
#define ADDRESS_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <cstddef>
#include <vector>


class Address
{
public:
    Address(){};
    void read_file();
    void output_file();
private:
    std::string combinedString;
    std::string line;
    int size; 
    std::vector<std::string> vec;
};


#endif // ADDRESS_HPP
