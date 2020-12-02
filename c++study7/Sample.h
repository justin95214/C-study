#pragma once
#ifndef SAMPLE_H
#define SAMPLE_H
#include <iostream>
using namespace std;


class Sample
{
	int *p;
	int size;

public:
	Sample(int n) { 
		size = n; p = new int [n];
	}
	void read() {
		for (int i = 0; i < size; i++)
		{
			cin >> p[i];
		}
	}

	void write() {
		for (int i = 0; i < size; i++)
		{
			cout << p[i] << " ";
		}
	}

	int small() {
		int min = p[0];
		for (int i = 1; i < size ; i++)
		{
			if (min > p[i])
			{
				min = p[i];
			}
		}
		return min;
	}


	int big() {
		int max = p[0];
		for (int i = 1; i < size; i++)
		{
			if (max < p[i])
			{
				max = p[i];
			}
		}
		return max;
	}

};


#endif SAMPLE_H
