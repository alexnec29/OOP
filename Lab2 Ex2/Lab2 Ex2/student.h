class Student
{
	char* name=0;
	float englishGrade;
	float historyGrade;
	float mathGrade;
public:
	void SetName(char* name);
	char* GetName();

	float GetEnglishGrade();
	float GetHistoryGrade();
	float GetMathGrade();

	bool SetEnglishGrade(float newGrade);
	bool SetHistoryGrade(float newGrade);
	bool SetMathGrade(float newGrade);

	float GetGradeMean();
};
