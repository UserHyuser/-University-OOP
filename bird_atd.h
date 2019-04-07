#pragma once
#ifndef __bird_atd__
#define __bird_atd__
// Требеутся описание класса animal
#include "animal_atd.h"
namespace simple_animals {
	// параллелепипед
	class bird : public animal {
		char name[20];
		int fly; // перелетная ли птица 0 - нет 1 - да
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst);  // ввод
		void Out(ofstream &ofst);    // вывод 
		void MultiMethod(animal *other, ofstream &ofst);
		void MMFish(ofstream &ofst);
		void MMBird(ofstream &ofst);
		bird() {} // создание без инициализации.
	};
} // end simple_animals namespace
#endif
