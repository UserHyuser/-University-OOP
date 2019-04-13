#include "bird_atd.h"
#include "fish_atd.h"
#include "beast_atd.h"
#include "animal_atd.h"
#include "container_atd.h"
using namespace std;

namespace simple_animals {
	// Input parameters of generalized animal from file
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
		case 3:
			sp = new beast;
			break;
		default:
			return 0;
		}
		sp->InData(ifst);
		return sp;
	}

	void animal::OnlyFish(ofstream &ofst) {
		ofst << endl;
	}

	bool animal::Compare(animal &other) {
		return LenghtName() < other.LenghtName();
	}
} // end simple_animals namespace

