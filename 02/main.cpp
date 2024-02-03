#include "address_sort.hpp"

int main() {

  std::ifstream fin("in.txt");
  std::ofstream fout("out.txt");
  int size;
  fin >> size;
  std::vector<Address> addresses(size);
  
  for (int i = 0; i < size; ++i) {
    addresses[i].readAddress(fin);
  }
  
  std::sort(addresses.begin(), addresses.end(), Address::compareAddresses);
  
  fout << size << std::endl;
  
  for (int i = 0; i < size; ++i) {
    addresses[i].writeAddresses(fout);
  }
  
  fin.close();
  fout.close();
  
  return 0;
}