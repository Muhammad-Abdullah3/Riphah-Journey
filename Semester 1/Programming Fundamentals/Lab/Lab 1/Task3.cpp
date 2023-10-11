#include<iostream>
using namespace std;
int main()
{
	int total_quizzes = 5;
	float obt1=0,obt2=0,obt3=0,obt4=0,obt5=0;
	cout<<"Enter obtained marks in five tests:";
	cin>>obt1>>obt2>>obt3>>obt4>>obt5;
	float sum = obt1+obt2+obt3+obt4+obt5;
	float avg = sum/total_quizzes;
	cout<<"Average of all quizzes taken by Ahmad: "<<avg;
	return 0;
}