#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	int radius;
	while (true)
	{
		cout << "���������� �Է� (�����̸� ����) :";
		cin >> radius;
		if (radius < 0) break;
		Circle *p = new Circle(radius);
		cout << "���� ������" << p->getArea() << endl;
		delete p;
	}
}
