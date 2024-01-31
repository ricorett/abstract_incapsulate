#include "address.hpp"
#include <cstddef>
#include <vector>

void Address::read_file(){
    std::ifstream fin("in.txt");
    if(fin.is_open()){
        fin >> size;
       
        for(size_t i = 0; i < vec.size(); ++i){
            fin >> std::vectorvec[i];
            std::cout << vec[i] << std::endl;
           }
        fin.close();
    } else {
        std::cout<< "FILE OPEN ERROR\n";
    }
}

void Address::output_file(){
    std::ofstream fout("out.txt");
    if(fout.is_open()){
        for (size_t i = vec.size(); i > vec.size() - 4; --i){
            fout << vec[i];
        }
    }
}





/*  Основная идея реализации: создать матрицу размером N на 4, 
где 4 - это все поля которые надо вывести.
Индекс I - принадлежит городам
Индекс J - будет содержать остальные поля.

Вывод будет начинаться с конца от города до номера квартиры.

*/