#include<iostream>
using namespace std;
main()
{
	float charge;
	cout<< "enter the charge (Q) in coulombs: ";
	cin >> charge;
	cout<< "enter the time (t) in seconds: ";
	float time;
	cin >> time;
	float current;
	current = charge/time;
	cout << "the current (I) is: " << current << " Amperes. ";

}