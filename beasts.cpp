#include "beast_atd.h"
using namespace std;
namespace simple_animals {
	// ���� ���������� ���������������
	void beast::InData(ifstream &ifst)
	{
		ifst >> eat;
		ifst >> name;
	}
} // end simple_animals namespace

using namespace std;
namespace simple_animals {
	// ����� ���������� ���������������
	void beast::Out(ofstream &ofst)
	{
		if (eat == 0) {
			ofst << "��� ������ ����� " << name << endl;
		}
		else if (eat == 1){
			ofst << "��� ���������� ����� " << name << endl;
		}
		else {
			ofst << "��� ������������� ����� " << name << endl;
		}

	}
} // end simple_animals namespace
