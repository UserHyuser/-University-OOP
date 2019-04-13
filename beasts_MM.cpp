#include "animal_atd.h"
#include "beast_atd.h"
using namespace std;

namespace simple_animals {
	void beast::MultiMethod(animal *other, ofstream &ofst) {
		other->MMBeast(ofst);
	}
}