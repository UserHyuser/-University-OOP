#pragma once
#ifndef __beast_atd__
#define __beast_atd__
#include "animal_atd.h"
namespace simple_animals {
	class beast : public animal {
	public:
		// Food - 0 predator, 1 - herbivorous, 2 - insectivore
		int eat;
		// Redefine interface of class
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		void MultiMethod(animal *other, ofstream &ofst);
		void MMFish(ofstream &ofst);
		void MMBird(ofstream &ofst);
		void MMBeast(ofstream &ofst);
		int LenghtName();
		beast() {} // Create without initialization
	};
} // end simple_animals namespace
#endif
