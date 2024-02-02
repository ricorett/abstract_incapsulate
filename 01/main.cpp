#include "address.hpp"


int main(){
    Address adr_file;
    std::ifstream fin("in.txt");
    std::ofstream fout("out.txt");
    adr_file.read_file(fin);
    adr_file.output_file(fout);
    return 0;
}
