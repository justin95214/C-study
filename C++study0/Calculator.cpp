#include <iostream>
#include "Caluculator.h"
#include "Adder.h"
using namespace std;

void Calculator::run()
{
	cout << "�� ���� ���� �Է��Ͻÿ� >>";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.proecess();
}