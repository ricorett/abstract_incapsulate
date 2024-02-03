#ifndef ADDRESS_SORT_HPP
#define ADDRESS_SORT_HPP


#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

class Address {
public:
    Address() = default;
    void readAddress(std::ifstream& fin);
    static bool compareAddresses(const Address& a, const Address& b);
    void writeAddresses(std::ofstream& fout);
    void sort_addresses();
private:
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    int size;
    // Address(const std::string& c, const std::string& s, int h, int g) : city(c), street(s), houseNumber(h), apartmentNumber(g) {}
};

// class Address_sort {
//     public:
//     void read_file(std::ifstream& fin);
//     void sort_addresses();
//     void write_to_file(std::string& fout);
//     int rows = 100;
//     int columns = 4;
//     std::vector<Address> matrix(rows, std::vector<Address>(cols));
//     private:
    
// };










// class Address {
// public:
//     std::string city;
//     std::string street;
//     int houseNumber;
//     int apartmentNumber;
//     Address(const std::string& c, const std::string& s, int h, int g) : city(c), street(s), houseNumber(h), apartmentNumber(g) {}
// };

// class AddressSort {
// public:
//     static const int maxSize = 100; 
//     Address addresses[maxSize];   
//     int size;
//     // AddressSort() : size(0), addresses{} {}

//     void read_file(std::ifstream& fin);
//     void sort_addresses();
//     void write_to_file(const std::string& filename);
// };

#endif // ADDRESS_SORT_HPP
