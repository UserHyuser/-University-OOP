#include "animal_atd.h"
#include "bird_atd.h"
using namespace std;

namespace simple_animals {
	// мультиметод
	void bird::MultiMethod(animal *other,
		ofstream &ofst) {
		other->MMBird(ofst);
	}
}