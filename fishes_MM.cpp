#include "animal_atd.h"
#include "fish_atd.h"
using namespace std;

namespace simple_animals {
	// �����������
	void fish::MultiMethod(animal *other,
		ofstream &ofst) {
		other->MMFish(ofst);
	}
}