#include "address.hpp"

void Address::read_file(){
    std::ifstream fin("in.txt");
    if(fin.is_open()){
        fin >> N;
        for(int i = 0; i < N; i++){
            fin >> city >> street >> house_number >> apart_number;
        } 
        fin.close();
    } else {
        std::cout<< "FILE OPEN ERROR\n";
    }
}

void Address::output_file(){
    std::ofstream fin("out.txt");
    if(fin.is_open()){
        fin << N;
        for(int i = 0; i < N; i++){
        }
        fin.close();
    } else {
        std::cout<< "FILE OPEN ERROR\n";
    }
}
/*  Основная идея реализации: создать матрицу размером N на 4, 
где 4 - это все поля которые надо вывести.
Индекс I - принадлежит городам
Индекс J - будет содержать остальные поля.

Вывод будет начинаться с конца от города до номера квартиры.

*/