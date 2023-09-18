#include<iostream>
using namespace std;
main()
{
	cout << "Enter the student's name: ";
	string name;
	cin >> name;
	cout << "Enter matriculation marks (out of 1000): ";
	int marks;
	cin >> marks;
	cout << "Enter intermediate marks (out of 550): ";
	int inter;
	cin >> inter;
	cout << "Enter ecat marks (out of 400): ";
	int ecat;
	cin >> ecat;
	float a,b,c;
	a=(marks/1100)*10;
	b=(inter/550)*40;
	c=(ecat/400)*50;
	float agg;
	agg=a+b+c;
	cout << "aggregate score for " << name << " is: " << agg << "%";

}