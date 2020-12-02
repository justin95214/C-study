#include<iostream>
#include "Circle.h"

using namespace std;

int main() {
	Circle circleArray[5];

	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);
	circleArray[3];
	circleArray[4];

	for (int i = 0; i < 5; i++)
	{
		cout << "Circle " << i << "의 면적은 " << circleArray[i].getArea() << endl;
	}

	Circle *p;
	p = circleArray;
	(p+4)->setRadius(40);
	for (int i = 0; i < 5; i++)
	{
		cout << "Circle " << i << "의 면적은 " << p->getArea() << endl;
		p++;
	}
}