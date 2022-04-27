#include <iostream>

using namespace std;

int main()
{
	int a = 10;

	cout << a + 2 << endl;
	cout << a + 2 << endl;
	cout << a + 2 << endl;
	cout << a + 2 << endl;
	cout << a % 3 << endl;
	
	float b = 1.9f;

	cout << b + 2 << endl;
	cout << b + 2 << endl;
	cout << b + 2 << endl;
	cout << b + 2 << endl;

	char r = 'R'; // R이 아스키코드로 변환되어 연산됨

	cout << (char)(r + 2) << endl;
	cout << (char)(r - 2) << endl;
	cout << (char)(r * 2) << endl;
	cout << (char)(r / 2) << endl;


	return 0;
}