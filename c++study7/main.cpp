#include<iostream>
#include"Sample.h"

using namespace std;

int main() {

	Sample s(10);
	s.read();
	s.write();
	cout << endl;
	cout << "~ 가장 작은 수는" << s.small() << endl;
	cout << "~ 가장 큰 수는" << s.big() << endl;
}