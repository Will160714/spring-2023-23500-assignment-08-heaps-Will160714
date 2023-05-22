#pragma once
#include <vector>
#include <string>

void heapsort(std::vector<int> &data);
void insertIntoHeap(std::vector<int> &data, int x);
void swap(std::vector<int> &data, int x, int y);
void heapify(std::vector<int> &data, int x, int deletedRange);
std::string printVector(std::vector<int> &data);
