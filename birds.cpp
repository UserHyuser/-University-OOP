#include "bird_atd.h"
using namespace std;
namespace simple_animals {
	// ���� ���������� 
	void bird::InData(ifstream &ifst)
	{
		ifst >> fly;
		ifst >> name;
	}
} // end simple_animals namespace

using namespace std;
namespace simple_animals {
	// ����� ���������� 
	void bird::Out(ofstream &ofst)
	{
		if (fly==0) {
			ofst << "��� ������������ ����� " << name << endl;
		}
		else {
			ofst << "��� ���������� ����� " << name << endl;
		}
			
	}
} // end simple_animals namespace
