#include "student.h"
#include <iostream>
using namespace std;
int CompareName(Student stud, Student babe)
{
	return strcmp_s(stud.GetName(),strlen(stud.GetName()), babe.GetName());
}
int CompareMean(Student student1, Student student2)
{
	float avg1 = student1.GetGradeMean();
	float avg2 = student2.GetGradeMean();
	if (avg1 > avg2) return 1;
	else if(avg1==avg2) return 0;
	return -1;
}
