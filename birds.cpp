#include "bird_atd.h"
using namespace std;
namespace simple_animals {
	// Input parameters of bird from file
	void bird::InData(ifstream &ifst)
	{
		ifst >> fly;
		ifst >> name;
		ifst >> age;
	}

	// Output parameters of bird to file
	void bird::Out(ofstream &ofst)
	{
		if (fly == 0) {
			ofst << "Bird " << name << " is non-migratory. Age: " << age << endl;
		}
		else {
			ofst << "Bird " << name << " is migratory. Age: " << age << endl;
		}

	}

	int bird::LenghtName() {
		int arrayLength = 0;
		for (int i = 0; name[i]; i++) {
			arrayLength++;
		}
		return arrayLength;
	}
} // end simple_animals namespace
