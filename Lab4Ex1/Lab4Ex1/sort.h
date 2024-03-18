class Sort
{
    // add data members
    int* elemente;
    int nrEemente;
public:
    // add constuctors
    Sort(int nrElemente, int min, int max)
    {
        elemente = new int[nrElemente];
        for (int i = 0; i < nrElemente; i++)
        {
            elemente[i] = (((int)&elemente) % max) + min;
        }
    }
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};