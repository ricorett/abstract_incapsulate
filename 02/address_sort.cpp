#include "address_sort.hpp"


void Address::readAddress(std::ifstream &fin) {
  fin >> city >> street >> houseNumber >> apartmentNumber;
}

void Address::writeAddresses(std::ofstream &fout) {
  fout << city << ", " << street << ", " << houseNumber << ", "
       << apartmentNumber << std::endl;
}

bool Address::compareAddresses(const Address &a, const Address &b) {
  return a.city < b.city;
}
