#pragma once
#ifndef __animal_atd__
#define __animal_atd__
#include <fstream>
using namespace std;
namespace simple_animals {
	// Êëàññ, îáîáùàþùàåò âñå èìåþùèåñÿ ôèãóðû.
	// ßâëÿåòñÿ àáñòðàêòíûì, îáåñïå÷èâàÿ, òåì ñàìûì, 
	// ïðîâåðêó èíòåðôåéñà 
	class animal {
		
	public:
		int age = 0; 
		char name[20];
		// èäåíèòôèêàöèÿ, ïîðîæäåíèå è ââîä ôèãóðû èç ïîòî-êà
		static  animal* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0;  // ââîä
		virtual void Out(ofstream &ofst) = 0;     // âûâîä
	};
} // end simple_animals namespace
#endif
