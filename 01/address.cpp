#include "address.hpp"


void Address::read_file(){
   std::ifstream fin("in.txt");
    if(fin.is_open()){
        fin >> size;
       for (int i = 0; i < size; ++i){
       for(int j = 0; j < 4 && std::getline(fin,line); i++){
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

void Address::output_file(){
    std::ofstream fout("out.txt");

    if(fout.is_open()){
        for (size_t i = vec.size(); i > 0; --i){
            fout << vec[i];
        }
    } else {
        std::cout<< "FILE OPEN ERROR\n";
    }
   
    fout.close();
}





/*  Основная идея реализации: создать матрицу размером N на 4, 
где 4 - это все поля которые надо вывести.
Индекс I - принадлежит городам
Индекс J - будет содержать остальные поля.

Вывод будет начинаться с конца от города до номера квартиры.

*/