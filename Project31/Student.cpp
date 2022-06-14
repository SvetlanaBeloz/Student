#include "Student.h"

Student::Student()
{
	name = "Vasya Pupkin";
	age = 30;
}

void Student::AddRate(int rate)
{
	int* temp = new int[dz_count + 1];
	for (int i = 0; i < dz_count; i++)
	{
		temp[i] = hometask[i];
	}
	temp[dz_count] = rate;
	delete[] hometask;
	;
	hometask = temp;
	dz_count++;
}

void Student::AddExam(int rate_exam)
{
	int* temp = new int[exams_count + 1];
	for (int i = 0; i < exams_count; i++)
	{
		temp[i] = exams[i];
	}
	temp[exams_count] = rate_exam;
	delete[] exams;
	exams = temp;
	exams_count++;
}

void Student::AddPractice(int rate_practice)
{
	int* temp = new int[practice_count + 1];
	for (int i = 0; i < practice_count; i++)
	{
		temp[i] = practice[i];
	}
	temp[practice_count] = rate_practice;
	delete[] practice;
	practice = temp;
	practice_count++;
}

Student::~Student()
{
	std::cout << "Student DESTRUCTOR!\n";
	if (hometask != nullptr)
	{
		delete[] hometask;
		hometask = nullptr;
	}
	if (exams != nullptr)
	{
		delete[] exams;
		exams = nullptr;
	}
	if (practice != 0)
	{
		delete[] practice;
		practice = nullptr;
	}
}
