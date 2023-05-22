#include "heaps.h"
#include <iostream>

void heapsort(std::vector<int> &data){
    //Create Heap
    for(int x = 1; x < data.size(); x++){
        insertIntoHeap(data, x);
    }

    //Sort Heap
    for(int x = data.size() - 1; x >= 0; x--){
        swap(data, 0, x);
        heapify(data, 0, x);
    }
}

void insertIntoHeap(std::vector<int> &data, int x){
    while(data[x] > data[(x - 1)/2]){
        swap(data, x, (x-1)/2);
        x = (x-1)/2;
    }
}

void swap(std::vector<int> &data, int x, int y){
    int temp = data[x];
    data[x] = data[y];
    data[y] = temp;
}

void heapify(std::vector<int> &data, int x, int deletedRange){
    int largestIndexOfLeft = -1;
    int largestIndexOfRight = -1;
    int largestIndex = -1;
    if(2 * x + 1 < data.size() && data[x] < data[2 * x + 1]){
        if(2*x + 1 < deletedRange)
            largestIndexOfLeft = 2*x + 1;
    }

    if(2 * x + 2 < data.size() && data[x] < data[2 * x + 2]){
        if(2*x + 2 < deletedRange)
            largestIndexOfRight = 2*x + 2;
    }

    if(data[largestIndexOfLeft] > data[largestIndexOfRight]){
        largestIndex = largestIndexOfLeft;
    }
    else{
        largestIndex = largestIndexOfRight;
    }

    if(largestIndex != -1){
        swap(data, x, largestIndex);
        heapify(data, largestIndex, deletedRange);
    }
}

std::string printVector(std::vector<int> &data){
    std::string result = "";
    for(int x = 0; x < data.size(); x++){
        result += std::to_string(data[x]) + " ";
    }
    return result;
}