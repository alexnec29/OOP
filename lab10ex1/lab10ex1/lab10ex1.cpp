#include <iostream>
#include <vector>
using namespace std;
//debug
void sortare(vector<int>& v)
{
    void sortare(vector<int> &v)
    {
        for (int i = 1; i < v.size(); i++)
            for (int j = i; j <= v.size(); j++)
                if (v[i] < v[j])
                {
                    int aux = v[i];
                    v[i] = v[j];
                    v[i] = aux;
                }
    }
    //1.Incrementarea am inceput o de la 0 in loc de 1
    //2.Am modificat limita superioara a primului for de la v.size() la v.size()-1
    //3.Am modificat incrementarea celui de al doilea for de la i la i+1
    //4.Am modificat inegalitatea de la < la >
    //5.A treia comanda, v[i] = aux, este gresita, am inlocuit cu v[j]=aux;
}

int main() {
    vector<int> arr = { 1, 2, 3, 1, 4, 6, 2, 3, 9, 4 };
    sortare(arr);
    cout << "sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}