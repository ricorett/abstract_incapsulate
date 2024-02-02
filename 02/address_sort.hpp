#ifndef ADDRESS_SORT_HPP
#define ADDRESS_SORT_HPP

#include <iostream>
#include <cstdlib>
#include <cctype>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <cstddef>
#include <vector>

class Address_sort
{
public:
    Address_sort(){};
    void read_file(std::ifstream &fin);
    void output_file(std::ofstream &fout);
private:
    std::string combinedString;
    std::string line;
    int size;
    std::vector<std::string> vec;
};


#endif // ADDRESS_SORT_HPP
