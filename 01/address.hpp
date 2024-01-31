#ifndef ADDRESS_HPP
#define ADDRESS_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>

class Address
{
public:
    Address(){};
    void read_file();
    void output_file();
private:
    int size; // house_number, apart_number;
    // std::string city, street;
    std::vector<std::string> vec;

    
};


#endif // ADDRESS_HPP
