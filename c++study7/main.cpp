#include<iostream>
#include"Sample.h"

using namespace std;

int main() {

	Sample s(10);
	s.read();
	s.write();
	cout << endl;
	cout << "~ ���� ���� ����" << s.small() << endl;
	cout << "~ ���� ū ����" << s.big() << endl;
}