#include "address_sort.hpp"

void Address_sort::read_file(std::ifstream &fin){
    if(fin.is_open()){
        fin >> size;
        for (int i = 0; i < size; ++i){
            combinedString = "";
            for(int j = 0; j < 4 && std::getline(fin,line); ++j){
                combinedString += line;
                if (j < 3){
                    combinedString += ",";
                }
            }
            vec[i] = combinedString;

        }
        fin.close();
    } else {
        std::cout<< "FILE OPEN ERROR\n";
    }
}
