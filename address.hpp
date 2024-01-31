#ifndef ADDRESS_HPP
#define ADDRESS_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <fstream>
#include <string>
#include <cstring>

class Address
{
public:
    Address(){};
    void read_file();
    void close_file();
    void sort_file();
    void output_file();
private:
    int N, house_number, apart_number;
    std::string city, street;
    std::string* adr_matrix;
    
};


#endif // ADDRESS_HPP
