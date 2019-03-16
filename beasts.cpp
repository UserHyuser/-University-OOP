#include "beast_atd.h"
using namespace std;
namespace simple_animals {
	// ¬вод параметров параллелепипеда
	void beast::InData(ifstream &ifst)
	{
		ifst >> eat;
		ifst >> name;
	}
} // end simple_animals namespace

using namespace std;
namespace simple_animals {
	// ¬ывод параметров параллелепипеда
	void beast::Out(ofstream &ofst)
	{
		if (eat == 0) {
			ofst << "Ёто хищный зверь " << name << endl;
		}
		else if (eat == 1){
			ofst << "Ёто траво€дный зверь " << name << endl;
		}
		else {
			ofst << "Ёто насекомо€дный зверь " << name << endl;
		}

	}
} // end simple_animals namespace
