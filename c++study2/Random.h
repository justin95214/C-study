#pragma once
#ifndef RANDOM_H
#define RANDOM_H
#include <cstdlib>
#include <ctime>
class Random
{
public:
	Random();
	int next();
	int nextInRange(int a, int b);
	int nextEvenInRange(int a, int b);
};



#endif RANDOM_H
