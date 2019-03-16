#pragma once
#ifndef __container_atd__
#define __container_atd__
#include "animal_atd.h"
namespace simple_animals {
	// ���������� ��������� �� ������ ����������� �������
	class container {
		enum { max_len = 100 }; // ������������ �����
		int len; // ������� �����
		animal *cont[max_len];
	public:
		void In(ifstream &ifst);     // ���� 
		void Out(ofstream &ofst);    // ����� 
		void LenghtName(ofstream &ofst);
		void Sort();
		void Clear();  // ������� ���������� �� �����
		container();    // ������������� ����������
		~container() { Clear(); } // ���������� ����������
	};
} // end simple_animals namespace
#endif

