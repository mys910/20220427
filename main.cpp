#include <iostream>

using namespace std; //std 생략

int main()
{
	int a = 10;

	cout << a + 2 << endl;
	cout << a + 2 << endl;
	cout << a + 2 << endl;
	cout << a + 2 << endl;
	cout << a % 3 << endl; //% 나머지 값
	
	float b = 1.9f;

	cout << b + 2 << endl;
	cout << b + 2 << endl;
	cout << b + 2 << endl;
	cout << b + 2 << endl;

	char r = 'R'; // R이 아스키코드로 변환되어 연산됨

	cout << (char)(r + 2) << endl; //(char) 문자로 출력
	cout << (char)(r - 2) << endl;
	cout << (char)(r * 2) << endl;
	cout << (char)(r / 2) << endl;


	return 0;
}