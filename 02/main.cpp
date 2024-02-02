#include "address_sort.hpp"

int main() {
    Address_sort adr_file;
    std::ifstream fin("in.txt");
    std::ofstream fout("out.txt");
    adr_file.read_file(fin);
    adr_file.output_file(fout);
    return 0;
}