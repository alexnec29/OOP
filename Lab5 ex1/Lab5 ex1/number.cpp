#include <iostream>
#include "number.h"
using namespace std;
void Number::SwitchBase(int newBase) {
    if (newBase < 2 || newBase > 16) {
        std::cout << "Invalid base. Base should be between 2 and 16." << std::endl;
        return;
    }

    int tempBase10 = base10;

    int catul = tempBase10;
    int i = 0;
    char* newChar = new char[64]; // Assuming the new base doesn't exceed 64 digits
    while (catul != 0) {
        int remainder = catul % newBase;
        newChar[i++] = (remainder < 10) ? (char)(remainder + '0') : (char)(remainder - 10 + 'A');
        catul /= newBase;
    }
    int newSize = i; // Size of the new character array
    delete[] as_char; // Delete old character array

    as_char = new char[newSize + 1]; // Allocate memory for the new character array
    count = newSize; // Update the digit count

    // Copy the characters from the temporary array to the member variable
    for (int j = 0; j < newSize; j++) {
        as_char[j] = newChar[newSize - 1 - j];
    }
    as_char[newSize] = '\0'; // Null-terminate the string

    delete[] newChar; // Delete the temporary array

    base = newBase; // Update the base
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

