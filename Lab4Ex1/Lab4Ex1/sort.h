#include <cstdlib>
#include <iostream>
#include <ctime>
class Sort
{
    // add data members
    int* elemente;
    int nrElemente;
    // functii pentru quicksort(partitionarea si preluarea capetelor)
    void quickSortHelper(int left, int right, bool ascendent);
    int partition(int left, int right, bool ascendent);
public:
    // add constuctors
    Sort(int numElements, int min, int max) : nrElemente(numElements) {
        srand(time(nullptr));
        elemente = new int[numElements];
        for (int i = 0; i < numElements; i++) {
            elemente[i] = rand() % (max - min + 1) + min;
        }
    }
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};