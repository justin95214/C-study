#include <iostream>
#include <string>
#include "Morse.h"
using namespace std;


int main() {
	Morse morse;
	string words;
	string morsewords;

	cout << "문자열을 입력하시오. " << endl;
	getline(cin, words);
	cout << "입력된 문자열 : " << words << endl;

	morse.text2morse(words,morsewords);
	cout << endl;
	cout << morsewords << endl;

}