#pragma once
#ifndef __beast_atd__
#define __beast_atd__
// Требеутся описание класса animal
#include "animal_atd.h"
namespace simple_animals {
	// животное
	class beast : public animal {
		char name[20];
		int eat; // хищник - 0 травоядное - 1 насекомоядное -2
	public:
		// переопределяем интерфейс класса
		void InData(ifstream &ifst);  // ввод
		void Out(ofstream &ofst);    // вывод 
		beast() {} // создание без инициализации.
	};
} // end simple_animals namespace
#endif
