#include <iostream>
using namespace std;

void secondFunction();
void consolePrintOutput();

int numGlobal;
int result;

int main()
{
	int num = 5;

	numGlobal = 10;

	secondFunction();

	result = num + numGlobal;
	consolePrintOutput();

	return 0;
}

void secondFunction()
{
	numGlobal++;
}

void consolePrintOutput()
{
	cout << "Result: " << result << endl;
}
