#pragma once

#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
public:
	Person() { name = "";  }
	Person(string name) {name = name; }
	string getName() { return name;  }
	void setName(string name) { this->name = name; }
	
};

class Family
{	
	string Family_name;
	Person *p;
	int size;
public:

	Family(string name, int size) { 
		this->size =size;
		Family_name = name;  
		p = new Person[size];
	}
	void setName(int n, string name) { p[n].setName(name); }

	void show() { cout << this->Family_name << "������ ����������" << size << "���Դϴ�."<<endl;
	for (int i = 0; i < size; i++)
	{
		cout << (p+i)->getName() << " ";
	}
	cout <<"�Դϴ�."<< endl;
	}
	
	
};

#endif PERSON_H
