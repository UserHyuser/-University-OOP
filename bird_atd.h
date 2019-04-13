
#pragma once
#ifndef __bird_atd__
#define __bird_atd__
// Òðåáåóòñÿ îïèñàíèå êëàññà animal
#include "animal_atd.h"
namespace simple_animals {
	// ïàðàëëåëåïèïåä
	class bird : public animal {
		
		
	public:
		int fly; // ïåðåëåòíàÿ ëè ïòèöà 0 - íåò 1 - äà
		// ïåðåîïðåäåëÿåì èíòåðôåéñ êëàññà
		void InData(ifstream &ifst);  // ââîä
		void Out(ofstream &ofst);
		void MultiMethod(animal *other, ofstream &ofst);
		void MMFish(ofstream &ofst);
		void MMBird(ofstream &ofst);
		void MMBeast(ofstream &ofst);// âûâîä 
    int LenghtName();
		bird() {} // ñîçäàíèå áåç èíèöèàëèçàöèè.
	};
} // end simple_animals namespace
#endif

