#include "address_sort.hpp"
#include <iostream>

void Address::readAddress(std::ifstream& fin) {
    fin >> city >> street >> houseNumber >> apartmentNumber;
}

void Address::writeAddresses(std::ofstream& fout) {
    fout << city << ", " << street << ", " << houseNumber << ", " << apartmentNumber << std::endl;
}


bool Address::compareAddresses(const Address& a, const Address& b) {
    return a.city < b.city;
}



// void Address::read_file(std::ifstream& fin) {
//     if (fin.is_open()) {
//     for (int i = 0; i < size; ++i) {
//         fin >> addresses[i].city >> addresses[i].street >> addresses[i].houseNumber >> addresses[i].apartmentNumber;
//     }     
//         fin.close();
//     } else {
//         std::cerr << "FILE OPEN ERROR\n";
//     }
// }

// void Address::sort_addresses() {
//      std::sort(addresses.begin(), addresses.end(), compareAddresses);
// }

// //     std::sort(addresses, addresses + size, [](const Address& a, const Address& b) {
// //         return a.city < b.city;
// //     });
// // }

// void Address::write_to_file(const std::string& filename) {
//     std::ofstream fout(filename);
//     if (fout.is_open()) {
//         for (int i = 0; i < size; ++i) {
//             fout << addresses[i].city << ", " << addresses[i].street << ", " << addresses[i].houseNumber << "\n";
//         }
//         fout.close();
//     } else {
//         std::cout << "FILE OPEN ERROR\n";
//     }
// }

// bool compareAddresses(const Address& a, const Address& b) {
//     return a.city < b.city;
// }