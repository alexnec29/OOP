#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Printer
{
public:
    virtual string GetFormattedName() = 0;
    virtual string FormatNumber(int number) = 0;
};

class Hexazecimal : public Printer
{
    string GetFormattedName()
    {
        return "Hexazecimal";
    }
    string FormatNumber(int number)
    {
        string nr;
        while (number)
        {
            int rez = number % 16;
            if (rez >= 10)
                nr += 'A' + rez - 10;
            else
                nr += (char)rez;
            number = number / 16;
        }
        int size = nr.size();
        if (size < 8)
        {
            for (int i = 0; i < 8 - size; i++)
                nr = "0" + nr;
        }
        nr = "0x" + nr;
        return nr;
    }
};
class Decimal : public Printer
{
    string GetFormattedName()
    {
        return "Decimal";
    }
    string FormatNumber(int number)
    {
        return std::to_string(number);
    }
};
class Number
{
protected:
    int number;
    int count;
    vector<Printer*> printers;
public:
    Number(int val)
    {
        this->number = val;
        this->count = 0;
    }
    Number operator+(Number toAdd)
    {
        return *(new Number(this->number + toAdd.number));
    }
    Number operator*(Number toAdd)
    {
        return *(new Number(this->number * toAdd.number));
    }
    Number operator/(Number toAdd)
    {
        return *(new Number(this->number / toAdd.number));
    }
    Number operator-(Number toAdd)
    {
        return *(new Number(this->number - toAdd.number));
    }
    operator int()
    {
        return this->number;
    }
    Number& operator+=(Printer* newVal)
    {
        this->printers.push_back(newVal);
        this->count++;
        return *this;
    }
    void Print()
    {
        for (auto it : printers)
        {
            cout << "Format: " << it->GetFormattedName() << " Value " << it->FormatNumber(this->number) << '\n';
        }
    }
};

int main()
{
    Number n1(1), n2(2), n3(10);
    Number n4((int)((((n1 + n2) * n3) / n2) + (n1 - n2)));
    (n4.operator+=(new Hexazecimal())) += (new Decimal());
    n4.Print();
    std::cout << "Valoarea hexazecimala este: "<<hex << (int)n4 << std::endl;
    return 0;
}