#pragma once
#ifndef __bird_atd__
#define __bird_atd__
#include "animal_atd.h"
namespace simple_animals {
	class bird : public animal {
	public:
		// Migratory: 0 No,  1 Yes
		int fly;
		// Redefine interface of class
		void InData(ifstream &ifst);
		void Out(ofstream &ofst);
		void MultiMethod(animal *other, ofstream &ofst);
		void MMFish(ofstream &ofst);
		void MMBird(ofstream &ofst);
		void MMBeast(ofstream &ofst);
		int LenghtName();
		bird() {} // Create without initialization
	};
} // end simple_animals namespace
#endif

