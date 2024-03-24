#include "sort.h"
#include <iostream>
using namespace std;
void Sort::InsertSort(bool ascendent)
{

}
void Sort::QuickSort(bool ascendent) {
    quickSortHelper(0, nrElemente - 1, ascendent);
}

void Sort::quickSortHelper(int left, int right, bool ascendent) {
    if (left < right) {
        int k = partition(left, right, ascendent);
        quickSortHelper(left, k - 1, ascendent);
        quickSortHelper(k + 1, right, ascendent);
    }
}

int Sort::partition(int left, int right, bool ascendent) {
    int pivot = elements[right];
    int i = left - 1;
    int aux;
    for (int j = left; j <= right - 1; j++) {
        if ((ascendent && elements[j] <= pivot) || (!ascendent && elements[j] >= pivot)) {
            i++;
            aux = elements[i];
            elements[i] = elements[j];
            elements[j] = aux;
        }
    }
    aux = elements[i + 1];
    elements[i + 1] = elements[right];
    elements[right] = aux;
    return i + 1;
}
void Sort::BubbleSort(bool ascendent)
{
    if (ascendent == true)
    {
        int sort;
        do
        {
            sort = 1;
            for (int i = 0; i < nrElemente - 1; i++)
            {
                if (elemente[i] > elemente[i + 1])
                {
                    int aux = elemente[i];
                    elemente[i] = elemente[i + 1];
                    elemente[i + 1] = aux;
                    sort = 0;
                }
            }
        } while (sort == 0);
    }
    else
    {
        int sort;
        do
        {
            sort = 1;
            for (int i = 0; i < nrElemente - 1; i++)
            {
                if (elemente[i] < elemente[i + 1])
                {
                    int aux = elemente[i];
                    elemente[i] = elemente[i + 1];
                    elemente[i + 1] = aux;
                    sort = 0;
                }
            }
        } while (sort == 0);
    }
}
void Sort::Print()
{
	for (int i = 0; i < this->nrElemente; i++)
	{
		cout << this->elemente[i] << " ";
	}
}
int Sort::GetElementsCount()
{
	return this->nrElemente;
}
int Sort::GetElementFromIndex(int index)
{
	return this->elemente[index];
}