#include <iostream>
#include "heaps.h"

int main(){
    std::vector<int> data;
    data.push_back(60);
    data.push_back(20);
    data.push_back(40);
    data.push_back(70);
    data.push_back(30);
    data.push_back(10);
    std::cout << "Original Vector (Before Heap Sort): \n" << printVector(data) << "\n\n";
    heapsort(data);
    std::cout << "New Vector (After Heap Sort): \n" << printVector(data) << "\n";
    return 0;
}