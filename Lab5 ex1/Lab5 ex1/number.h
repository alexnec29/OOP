#include <iostream>
#include <cstdlib>
class Number
{
	// add data members
	int base10;
	int base;
	char* as_char;
	int count;
public:
	Number() // where base is between 2 and 16
	{
		srand((unsigned)time(NULL));
		this->base10 = rand();
		int aux = this->base10;
		this->count = 0;
		int minBase = 0;
		while (aux != 0)
		{
			this->count++;
			if (aux % 10 > minBase) minBase = aux % 10;
			aux = aux / 10;
		}
		this->base = 2 + minBase + rand() % (15-minBase);
		this->as_char = new char[this->count + 1]; // +1 for null terminator

		aux = this->base10;
		for (int i = count - 1; i >= 0; i--)
		{
			this->as_char[i] = (char)((aux % 10) + '0');
			aux /= 10;
		}
		// Null-terminate the string
		this->as_char[this->count] = '\0';
	}
	Number(const char* value, int base) // where base is between 2 and 16
	{
		this->as_char = (char*)value;
		this->base = base;
		this->base10 = 0;
		this->count = 0;
		for (int i = 0; value[i] != 0; i++)
		{
			this->base10 = this->base10 * base + value[i] - '0';
			this->count++;
		}
	}
	Number operator+(Number op)
	{
		Number result;
		result.base10 = this->base10 + op.base10;
		return result;
	}
	Number operator-(Number op)
	{
		Number result;
		result.base10 = this->base10 - op.base10;
		return result;
	}
	Number operator*(Number op)
	{
		Number result;
		result.base10 = this->base10 * op.base10;
		return result;
	}
	Number operator/(Number op)
	{
		Number result;
		result.base10 = this->base10 / op.base10;
		return result;
	}
	int operator>(Number op)
	{
		//0 daca sunt egale
		// -1 daca this e mai mic
		//1 daca op e mai mic

		if (this->base10 == op.base10)
		{
			return 0;
		}
		else if (this->base10 < op.base10)
		{
			return -1;
		}
		return 1;
	}

	int operator<(Number op)
	{
		return op > (*this);
	}
	Number operator=(int op)
	{
		Number rezult;
		rezult.base10 = op;
		return rezult;
	}
	~Number();

	// add operators and copy/move constructor

	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base
};
