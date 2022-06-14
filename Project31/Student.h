#include <Iostream>

class Student
{
	std::string name;
	int age;
	int* hometask;
	int dz_count;
	int* exams;
	int exams_count;
	int* practice;
	int practice_count;

public:
	Student();

	void AddRate(int rate);
	void AddExam(int rate_exam);
	void AddPractice(int rate_practice);

	~Student();
};

