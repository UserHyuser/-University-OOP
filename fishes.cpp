#include "fish_atd.h"
using namespace std;
namespace simple_animals {
	// Ввод параметров шара
	void fish::InData(ifstream &ifst) 
	{
		ifst >> place;
		ifst >> name;
		ifst >> age;
	}
} // end simple_animals namespace

using namespace std;
namespace simple_animals {
	// Вывод параметров 
	void fish::Out(ofstream &ofst)
	{
		if (place == 0) {
			ofst << "Рыба " << name << " живет в озере"
				<< " возраст: " << age << endl;
		}
		else if (place == 1) {
			ofst << "Рыба " << name << " живет в море"
				<< " возраст: " << age << endl;
		}
		else if (place == 2) {
			ofst << "Рыба " << name << " живет в реке"
				<< " возраст: " << age << endl;
		}
	}
	int fish::LenghtName() {
		int arrayLength = 0;
		for (int i = 0; name[i]; i++) {
			arrayLength++;
		}
		return arrayLength;
	}
} // end simple_animals namespace
