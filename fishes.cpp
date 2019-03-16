#include "fish_atd.h"
using namespace std;
namespace simple_animals {
	// Ввод параметров шара
	void fish::InData(ifstream &ifst) 
	{
		ifst >> place;
		ifst >> name;
	}
} // end simple_animals namespace

using namespace std;
namespace simple_animals {
	// Вывод параметров шара
	void fish::Out(ofstream &ofst)
	{
		if (place == 0) {
			ofst << "Рыба " << name << " живет в озере"
				<< endl;
		}
		else if (place == 1) {
			ofst << "Рыба " << name << " живет в море"
				<< endl;
		}
		else if (place == 2) {
			ofst << "Рыба " << name << " живет в реке"
				<< endl;
		}
	}
	void fish::OnlyFish(ofstream &ofst) {
		Out(ofst);
	}
} // end simple_animals namespace
