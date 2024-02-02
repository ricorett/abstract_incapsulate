#include "address.hpp"


void Address::read_file(std::ifstream &fin){
    if(fin.is_open()){
       std::getline(fin,take_size);
      size = stoi(take_size);
    
       for (int i = 0; i < size; ++i){          
            combinedString = ""; 
           for(int j = 0; j < 4 && std::getline(fin,line); ++j){
               combinedString += line;
               if (j < 3){
                   combinedString += ", ";
           }
       }
      vec.push_back(combinedString);
      
       }
        fin.close();
    } else {
        std::cout<< "FILE OPEN ERROR\n";
    }
}

void Address::output_file(std::ofstream &fout){
    if(fout.is_open()){

        // for (size_t i = vec.size(); i > 0; --i){
            for(auto i = vec.rbegin(); i != vec.rend(); ++i){ 
            fout << *i << std::endl;
        }
    } else {
        std::cout<< "FILE OPEN ERROR 1\n";
    }
   
    fout.close();
}




