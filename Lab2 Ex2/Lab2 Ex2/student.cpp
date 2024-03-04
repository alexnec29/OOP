#include "student.h"
#include <iostream>
using namespace std;

void Student::SetName(char* name);
{
	if (this->name == 0)
		this->name = new char[100];
	strcpy(this->name, name);
}
char* Student::GetName();

float Student::GetEnglishGrade();
{
	return this->englishGrade;
}
float Student::GetHistoryGrade();
{
	return this->historyGrade;
}
float Student::GetMathGrade();
{
	return this->mathGrade;
}

void Student::SetEnglishGrade(float newGrade);
{
	if (newGrade < 0 || newGrade>10)
		return false;
	this->englishGrade = newGrade;
	return true;
}
void Student::SetHistoryGrade(float newGrade);
{
	if (newGrade < 0 || newGrade>10)
		return false;
	this->historyGrade = newGrade;
	return true;
}
void Student::SetMathGrade(float newGrade);
{
	if (newGrade < 0 || newGrade>10)
		return false;
	this->mathGrade = newGrade;
	return true;
}

float Student::GetGradeMean();
{
	return (this->mathGrade + this->englishGrade + this->historyGrade) / 3;
}