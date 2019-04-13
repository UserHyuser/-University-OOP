#include "beast_atd.h"

using namespace std;

namespace simple_animals {
	// Input parameters of beast from file
	void beast::InData(ifstream &ifst)
	{
		ifst >> eat;
		ifst >> name;
		ifst >> age;
	}

	// Output parameters of beast to file 
	void beast::Out(ofstream &ofst)
	{
		if (eat == 0) {
			ofst << "Beast " << name << " is predator. Age: " << age << endl;
		}
		else if (eat == 1) {
			ofst << "Beast " << name << " is herbivorous. Age: " << age << endl;
		}
		else {
			ofst << "Beast " << name << " is insectivorous. Age: " << age << endl;
		}
	}

	int beast::LenghtName() {
		int arrayLength = 0;
		for (int i = 0; name[i]; i++) {
			arrayLength++;
		}
		return arrayLength;
	}
} // end simple_animals namespace
