#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "heaps.h"

TEST_CASE("Swap"){
    std::vector<int> data;
    data.push_back(10);
    data.push_back(20);
    data.push_back(15);
    data.push_back(30);
    data.push_back(40);
    swap(data, 0, 3);
    CHECK(data[0] == 30);
    CHECK(data[3] == 10);
    swap(data, 1, 4);
    CHECK(data[1] == 40);
    CHECK(data[4] == 20);
}

TEST_CASE("Insert Into Heap"){
    std::vector<int> data;
    data.push_back(10);
    data.push_back(20);
    data.push_back(15);
    data.push_back(30);
    data.push_back(40);
    insertIntoHeap(data, 0);
    CHECK(data[0] == 10);
    insertIntoHeap(data, 1);
    CHECK(data[0] == 20);
    CHECK(data[1] == 10);
}

TEST_CASE("Print Vector"){
    std::vector<int> data;
    data.push_back(10);
    data.push_back(20);
    data.push_back(15);
    data.push_back(30);
    data.push_back(40);
    CHECK("10 20 15 30 40 " == printVector(data));

    std::vector<int> data2;
    data2.push_back(60);
    data2.push_back(20);
    data2.push_back(40);
    data2.push_back(70);
    data2.push_back(30);
    data2.push_back(10);
    CHECK("60 20 40 70 30 10 " == printVector(data2));
}

TEST_CASE("Heap Sort"){
    std::vector<int> data;
    data.push_back(10);
    data.push_back(20);
    data.push_back(15);
    data.push_back(30);
    data.push_back(40);
    heapsort(data);
    CHECK("10 15 20 30 40 " == printVector(data));

    std::vector<int> data2;
    data2.push_back(60);
    data2.push_back(20);
    data2.push_back(40);
    data2.push_back(70);
    data2.push_back(30);
    data2.push_back(10);
    heapsort(data2);
    CHECK("10 20 30 40 60 70 " == printVector(data2));

    std::vector<int> data3;
    data3.push_back(10);
    data3.push_back(20);
    data3.push_back(15);
    data3.push_back(12);
    data3.push_back(40);
    data3.push_back(25);
    data3.push_back(18);
    heapsort(data3);
    CHECK("10 12 15 18 20 25 40 " == printVector(data3));
}