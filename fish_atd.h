#pragma once
#ifndef __fish_atd__
#define __fish_atd__
// ��������� �������� ������ animal
#include "animal_atd.h"
namespace simple_animals {
	// ���
	class fish : public animal {
		int place; // ��� ����� ���� 0 - ����� 1 - ���� 2 - ����
		char name[20];
		int age = 0; //�������
	public:
		// �������������� ��������� ������
		void InData(ifstream &ifst);  // ����
		void Out(ofstream &ofst);     // ����� 
		fish() {} // �������� ��� �������������.
	};
} // end simple_animals namespace
#endif

