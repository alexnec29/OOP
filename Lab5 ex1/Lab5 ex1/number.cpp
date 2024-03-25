#include <iostream>
#include "number.h"
using namespace std;
void Number::SwitchBase(int newBase)
{
	if (newBase == 10)
	{
		int newnumber = 0,p=1;
		int aux = this->base10;
		while (aux != 0)
		{
			newnumber = newnumber + (aux % 10) * p;
			p = p * base;
			aux = aux / 10;
		}
		this->base10 = newnumber;

		//bx->b10    suma-i=0,n  nr[i]*x^i
		//ex:22(b5)->(b10)
		//		2*5^0+2*5^1
		//       =12
	}
}

void Number::Print()
{
	cout << this->base10;
}
int  Number::GetDigitsCount()
{
	return this->count;
}// returns the number of digits for the current number
int  Number::GetBase() // returns the current base
{
	return this->base;
}
//b10->bx    impartiri repetate nr/x , restul este cifra, catul il impart in continuare
//ex:12 b2 -> b5 
//    12/5->2 r2
//    2/5 ->0 r2
//    numar:22

