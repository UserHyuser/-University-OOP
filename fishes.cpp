#include "fish_atd.h"
using namespace std;
namespace simple_animals {
	// ���� ���������� ����
	void fish::InData(ifstream &ifst) 
	{
		ifst >> place;
		ifst >> name;
		ifst >> age;
	}
} // end simple_animals namespace

using namespace std;
namespace simple_animals {
	// ����� ���������� 
	void fish::Out(ofstream &ofst)
	{
		if (place == 0) {
			ofst << "���� " << name << " ����� � �����"
				<< " �������: " << age << endl;
		}
		else if (place == 1) {
			ofst << "���� " << name << " ����� � ����"
				<< " �������: " << age << endl;
		}
		else if (place == 2) {
			ofst << "���� " << name << " ����� � ����"
				<< " �������: " << age << endl;
		}
	}
} // end simple_animals namespace
