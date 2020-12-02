#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	int radius;
	while (true)
	{
		cout << "정수반지를 입력 (음수이면 종료) :";
		cin >> radius;
		if (radius < 0) break;
		Circle *p = new Circle(radius);
		cout << "원의 면적은" << p->getArea() << endl;
		delete p;
	}
}
