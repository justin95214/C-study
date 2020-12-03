#pragma once
#ifndef MORSE_H
#define MORSE_H
#include <iostream>
#include <string>
using namespace std;

class Morse
{
	string alpahbet[26];
	string digit[10];
	string slash, question, comma, plus, equal, period;

public:
	Morse();
	void text2morse(string text, string& morse);
	//bool morse2text(string morse, string& text);
};

Morse::Morse()
{
	alpahbet[0] = ".-"; alpahbet[1] = "-..."; alpahbet[2] = "-.-."; alpahbet[3] = "-..";
	alpahbet[4] = "."; alpahbet[5] = "..-."; alpahbet[6] = "--."; alpahbet[7] = "....";
	alpahbet[8] = ".."; alpahbet[9] = ".---"; alpahbet[10] = "-.-"; alpahbet[11] = ".-..";
	alpahbet[12] = "--"; alpahbet[13] = "-."; alpahbet[14] = "---"; alpahbet[15] = ".--.";
	alpahbet[16] = "--.-"; alpahbet[17] = ".-."; alpahbet[18] = "..."; alpahbet[19] = "-";
	alpahbet[20] = "..-"; alpahbet[21] = "...-"; alpahbet[22] = ".--"; alpahbet[23] = "-..-";
	alpahbet[24] = "-.--"; alpahbet[25] = "--.."; digit[0] = "-----"; digit[1] = ".----";
	digit[2] = "..---"; digit[3] = "...--"; digit[4] = "....-"; digit[5] = ".....";
	digit[6] = "-...."; digit[7] = "--..."; digit[8] = "---.."; digit[9] = "----.";
	slash = "-..-."; question = "..--.."; comma = "--..--"; period = ".-.-.-";
	plus = ".-.-"; equal = "-...-";
}

void Morse::text2morse(string text, string& morse){

	int size = text.size();
	string space;
	string *convert_char = new string [size];
	int word_number;

	for (int i = 0; i < size; i++)
	{

		if (text.at(i) >= 65 && text.at(i) <= 90)
		{
			text.at(i) = text.at(i) + 32;
		}


		if (text.at(i) >= 97 && text.at(i) <= 122)
		{
			word_number = text.at(i) - 97;
			morse.append(alpahbet[word_number]);
			morse.append(" ");
		}

		else if (text.at(i) == 32)
		{
			space = text.at(i);
			morse.append(space);
			morse.append(" ");
		}

		if (text.at(i) >= 48 && text.at(i) <= 57)
		{
			word_number = text.at(i) - 48;
			morse.append(digit[word_number]);
			morse.append(" ");
		}

		else if (text.at(i) == 47)
		{
			space = text.at(i);
			morse.append(slash);
			morse.append(" ");
		}
		else if (text.at(i) == 43)
		{
			space = text.at(i);
			morse.append(plus);
			morse.append(" ");
		}
		else if (text.at(i) == 61)
		{
			space = text.at(i);
			morse.append(equal);
			morse.append(" ");
		}
		else if (text.at(i) == 63)
		{
			space = text.at(i);
			morse.append(question);
			morse.append(" ");
		}
		else if (text.at(i) == 46)
		{
			space = text.at(i);
			morse.append(period);
			morse.append(" ");
		}
		else if (text.at(i) == 44)
		{
			space = text.at(i);
			morse.append(comma);
			morse.append(" ");
		}

	}
	
}

#endif MORSE_H
