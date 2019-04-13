#pragma once
#ifndef __animal_atd__
#define __animal_atd__
#include <fstream>
using namespace std;
namespace simple_animals {
	// Structure generalizing all types of animals
	class animal {
	public:
		int age = 0;
		char name[20];
		static  animal* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;
		virtual void Out(ofstream &ofst) = 0;
		bool Compare(animal &other);
		virtual int LenghtName() = 0;
		virtual void OnlyFish(ofstream &ofst);
		virtual void MultiMethod(animal *other, ofstream &ofst) = 0;
		virtual void MMFish(ofstream &ofst) = 0;
		virtual void MMBeast(ofstream &ofst) = 0;
		virtual void MMBird(ofstream &ofst) = 0;
	};
} // end simple_animals namespace
#endif
