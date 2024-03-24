#include "sort.h"
#include <iostream>
using namespace std;
void Sort::InsertSort(bool ascendent) {
    int k, j;
    for (int i = 1; i < nrElemente; i++) {
        k = elemente[i];
        j = i - 1;
        while ((ascendent && j >= 0 && elemente[j] > k) || (!ascendent && j >= 0 && elemente[j] < k)) {
            elemente[j + 1] = elemente[j];
            j = j - 1;
        }
        elemente[j + 1] = k;
    }
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
    int pivot = elemente[right];
    int i = left - 1;
    int aux;
    for (int j = left; j <= right - 1; j++) {
        if ((ascendent && elemente[j] <= pivot) || (!ascendent && elemente[j] >= pivot)) {
            i++;
            aux = elemente[i];
            elemente[i] = elemente[j];
            elemente[j] = aux;
        }
    }
    aux = elemente[i + 1];
    elemente[i + 1] = elemente[right];
    elemente[right] = aux;
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