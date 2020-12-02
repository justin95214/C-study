#include <iostream>
#include "Caluculator.h"
#include "Adder.h"
using namespace std;

void Calculator::run()
{
	cout << "두 개의 수를 입력하시오 >>";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.proecess();
}