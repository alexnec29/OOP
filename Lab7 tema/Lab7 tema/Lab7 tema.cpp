
/*
    Folosind templates si operatori (daca vreti puncte in plus)
    Implementati o clasa dictionar
    template <class key, class value>

    care trebuie sa suporte cat mai multe tipuri de date,

    cautarea in dictionar trebuie sa fie facuta in nlogn
    deci cheile o sa fie stocate sub forma de hashing
    cautati libraria favorita de CRC

    daca folositi operatori, atunci urmatoarele lucruri trebuie sa mearga:
    dictionar["Ana"]="Maria"
    dictionar[1] = 2;
    dictionar[3]=new int[100];

    altfel, faceti metode get si set
    dictionar.set("Ana", "Maria")
    ....
    clasa voastra are o lista de chei si o lista de valori
    cheile sunt tinute in format nr(see above crc)
    minimal dictionarul trebuie sa suporte int si char* ca chei/valori

    (heapsort, toate cheile tinute in memorie ca numere, identificator pt "Maria")
    (CRC algorithm)
    ex:"Ana"=1     "Maria"=2   

*/
#include <iostream>
using namespace std;

template <class Key, class Value>

class dictionar{
    Key* keys;
    Value* values;
    int capacity=2;
    int size=0;
    void resize() {
        int newCapacity = capacity * 2;
        Key* newKeys = new Key[newCapacity];
        Value* newValues = new Value[newCapacity];

        for (int i = 0; i < size; ++i) {
            newKeys[i] = keys[i];
            newValues[i] = values[i];
        }

        delete[] keys;
        delete[] values;

        keys = newKeys;
        values = newValues;
        capacity = newCapacity;
    }
public:
    dictionar()
    {
        keys = new Key[capacity];
        values = new Value[capacity];
    }
    ~dictionar() {
        delete[] keys;
        delete[] values;
    }
    void add_element(const Key& key, const Value& value)
    {
        if (size >= capacity)
            resize();

        keys[size] = key;
        values[size] = value;
        size++;
    }
};

int main()
{
    dictionar<string, int> myDict;
    myDict.add_element("apple", 10);
    myDict.add_element("banana", 20);
    myDict.add_element("orange", 15);
}