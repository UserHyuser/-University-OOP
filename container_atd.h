#pragma once
#ifndef __container_atd__
#define __container_atd__
#include "animal_atd.h"
namespace simple_animals {
	// Simple container using one-dimensional massive
	class container {
		//Contaier's maximal length
		enum { max_len = 100 };
		int len; // Current length
		animal *cont[max_len];
	public:
		void In(ifstream &ifst);
		void Out(ofstream &ofst);
		void LenghtName(ofstream &ofst);
		void Sort();
		void Clear();
		void MultiMethod(ofstream &ofst);
		void OnlyFish(ofstream &ofst);
		container(); // Container initialization
		~container() { Clear(); } // Create without initialization
	};
} // end simple_animals namespace
#endif

