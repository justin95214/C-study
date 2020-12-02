#include <iostream>
#include "Random.h"
using namespace std;

Random::Random()
{
}

int Random::nextInRange(int a, int b)
{

	int random = rand();
	if (random > b || random < a)
	{
		return random % 3 + 2;
	}
	else
		return random;
}

int Random::nextEvenInRange(int a, int b)
{

	int random = rand();
	if (random > b || random < a)
	{
		return (random%((b-a)/2)) *2+2;
	}
	else
		return random;
}

int Random::next()
{
	int random = rand();
	return random;
}