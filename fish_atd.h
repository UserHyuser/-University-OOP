#pragma once
#ifndef __fish_atd__
#define __fish_atd__
// Òðåáóåòñÿ îïèñàíèå êëàññà animal
#include "animal_atd.h"
namespace simple_animals {
	// øàð
	class fish : public animal {
		int place; // ãäå æèâåò ðûáà 0 - îçåðî 1 - ìîðå 2 - ðåê
	public:
		// ïåðåîïðåäåëÿåì èíòåðôåéñ êëàññà
		void InData(ifstream &ifst);  // ââîä
		void Out(ofstream &ofst);     // âûâîä 
		fish() {} // ñîçäàíèå áåç èíèöèàëèçàöèè.
	};
} // end simple_animals namespace
#endif

