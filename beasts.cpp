#include "beast_atd.h"
using namespace std;
namespace simple_animals {
	// ���� ���������� ���������������
	void beast::InData(ifstream &ifst)
	{
		ifst >> eat;
		ifst >> name;
		ifst >> age;
	}
} // end simple_animals namespace

using namespace std;
namespace simple_animals {
	// ����� ���������� ���������������
	void beast::Out(ofstream &ofst)
	{
		if (eat == 0) {
			ofst << "��� ������ ����� " << name << " ���������: " << age << endl;
		}
		else if (eat == 1){
			ofst << "��� ���������� ����� " << name << " ���������: " << age << endl;
		}
		else {
			ofst << "��� ������������� ����� " << name << " ���������: " << age << endl;
		}

	}
} // end simple_animals namespace
