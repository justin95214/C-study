#include <iostream>
#include "RGB..h"

int main() {

	Color screenColor(255,0,0);
	Color *p;
	p = &screenColor;
	p->show();

	Color screenColor_array[3];
	p = screenColor_array;

	p->SetColor(255, 0, 0);
	p++;
	p->SetColor(0, 255, 0);
	p++;
	p->SetColor(0, 0, 255);


	for (int i = 0; i < 3; i++)
	{
		screenColor_array[i].show();
	}
}