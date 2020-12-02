#pragma once
#ifndef RGB_H
#define RGB_H
#include <iostream>

using namespace std;


class Color
{
	int red, green, blue;
public:
	Color() { red = green = blue = 0;  }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void SetColor(int r, int g, int b){ red = r; green = g; blue = b; }
	void show() { cout << red << " " << green << " " << blue << endl; }

};

#endif RGB_H
