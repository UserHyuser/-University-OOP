#pragma once
#ifndef __animal_atd__
#define __animal_atd__
#include <fstream>
using namespace std;
namespace simple_animals {
	//  ласс, обобщающает все имеющиес€ фигуры.
	// явл€етс€ абстрактным, обеспечива€, тем самым, 
	// проверку интерфейса 
	class animal {
	public:
		// иденитфикаци€, порождение и ввод фигуры из пото-ка
		static  animal* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;  // ввод
		virtual void Out(ofstream &ofst) = 0;     // вывод
		virtual void MultiMethod(animal *other,
			ofstream &ofst) = 0;
		virtual void MMFish(ofstream &ofst) = 0;
		virtual void MMBird(ofstream &ofst) = 0;
	};
} // end simple_animals namespace
#endif
