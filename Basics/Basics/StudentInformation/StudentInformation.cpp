#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	string name;
	int age;
	double grade;

	getline(cin, name);
	cin >> age;
	cin >> grade;

	cout << "Name: " << name << ", Age: " << age << ", Grade: " << setprecision(2) << fixed << grade << endl;

	return 0;
}