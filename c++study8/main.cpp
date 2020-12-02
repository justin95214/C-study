#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	Family *simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. simpson");
	simpson->setName(1, "Mrs. simpson");
	simpson->setName(2, "bart. simpson");

	simpson->show();
	

}