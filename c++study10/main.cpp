#include <iostream>
#include <string>
#include "Morse.h"
using namespace std;


int main() {
	Morse morse;
	string words;
	string morsewords;

	cout << "���ڿ��� �Է��Ͻÿ�. " << endl;
	getline(cin, words);
	cout << "�Էµ� ���ڿ� : " << words << endl;

	morse.text2morse(words,morsewords);
	cout << endl;
	cout << morsewords << endl;

}