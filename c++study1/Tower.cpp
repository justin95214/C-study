#include "Tower.h"
#include <iostream>

Tower::Tower()
{
	tall = 1;
	return;
}

Tower::Tower(int a)
{
	tall = a;
	return;
}

int Tower::getHeight()
{
	return tall;
}