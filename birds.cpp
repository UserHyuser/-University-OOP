#include "bird_atd.h"
using namespace std;
namespace simple_animals {
	// ���� ���������� ���������������
	void bird::InData(ifstream &ifst)
	{
		ifst >> fly;
		ifst >> name;
	}
} // end simple_animals namespace

using namespace std;
namespace simple_animals {
	// ����� ���������� ���������������
	void bird::Out(ofstream &ofst)
	{
		if (fly==0) {
			ofst << "��� ������������ ����� " << name << endl;
		}
		else {
			ofst << "��� ���������� ����� " << name << endl;
		}
			
	}
	int bird::LenghtName() {
		int arrayLength = 0;
		for (int i = 0; name[i]; i++) {
			arrayLength++;
		}
		return arrayLength;
	}
} // end simple_animals namespace
