#include "fish_atd.h"
using namespace std;
namespace simple_animals {
	// Input parameters of fish from file
	void fish::InData(ifstream &ifst)
	{
		ifst >> place;
		ifst >> name;
		ifst >> age;
	}

	// Output parameters of bird from file
	void fish::Out(ofstream &ofst)
	{
		if (place == 0) {
			ofst << "Fish " << name << " lives in lake. Age: " << age << endl;
		}
		else if (place == 1) {
			ofst << "Fish " << name << " lives in sea. Age: " << age << endl;
		}
		else if (place == 2) {
			ofst << "Fish " << name << " lives in river. Age: " << age << endl;
		}
	}

	//Filtered output function
	void fish::OnlyFish(ofstream &ofst) {
		Out(ofst);
	}

	int fish::LenghtName() {
		int arrayLength = 0;
		for (int i = 0; name[i]; i++) {
			arrayLength++;
		}
		return arrayLength;
	}
} // end simple_animals namespace
