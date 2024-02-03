#ifndef ADDRESS_SORT_HPP
#define ADDRESS_SORT_HPP

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

class Address {
public:
  Address() = default;
  void readAddress(std::ifstream &fin);
  static bool compareAddresses(const Address &a, const Address &b);
  void writeAddresses(std::ofstream &fout);
  void sort_addresses();

private:
  std::string city;
  std::string street;
  int houseNumber;
  int apartmentNumber;
  int size;
  
};

#endif // ADDRESS_SORT_HPP
