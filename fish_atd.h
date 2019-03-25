#pragma once
#ifndef __fish_atd__
#define __fish_atd__
// “ребуетс€ описание класса animal
#include "animal_atd.h"
namespace simple_animals {
	// шар
	class fish : public animal {
		int place; // где живет рыба 0 - озеро 1 - море 2 - река
		//char name[20];
		//int age = 0; //возраст
	public:
		// переопредел€ем интерфейс класса
		void InData(ifstream &ifst);  // ввод
		void Out(ofstream &ofst);     // вывод 
		fish() {} // создание без инициализации.
	};
} // end simple_animals namespace
#endif

