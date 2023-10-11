#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Declaring and initializing variables
	int x=2,y=9,z=6;
	cout<<setw(8)<<"Number"<<setw(20)<<"Square"<<endl;
	cout<<setw(8)<<"2"<<setw(20)<<x*x<<endl;
	cout<<setw(8)<<"9"<<setw(20)<<y*y<<endl;
	cout<<setw(8)<<"6"<<setw(20)<<z*z<<endl;
	return 0;
}