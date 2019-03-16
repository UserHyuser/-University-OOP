
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "bird_atd.h"
#include "fish_atd.h"
using namespace std;
#include "animal_atd.h"

namespace simple_animals {
	// Ввод параметров обобщенной фигуры 
	animal* animal::In(ifstream &ifst) {
		animal *sp;
		int k;
		ifst >> k;
		switch (k) 
		{
		case 1:
			sp = new bird;
			break;
		case 2:
			sp = new fish;
			break;
		default:
			return 0;
		}
		sp->InData(ifst);
		return sp;
	}
	bool animal::Compare(animal &other) {
		return LenghtName() < other.LenghtName();
	}
} // end simple_animals namespace

