#pragma once
#ifndef __fish_atd__
#define __fish_atd__
#include "animal_atd.h"
namespace simple_animals {
	class fish : public animal {
	public:
		// Habitat - 0 lake; 1 sea; 2 river
		int place;
		// Redefine interface of class
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		int LenghtName();
		void MMFish(ofstream &ofst);
		void MMBird(ofstream &ofst);
		void MMBeast(ofstream &ofst);
		void MultiMethod(animal *other, ofstream &ofst);
		void OnlyFish(ofstream &ofst);
		fish() {} // Create without initialization
	};
} // end simple_animals namespace
#endif

