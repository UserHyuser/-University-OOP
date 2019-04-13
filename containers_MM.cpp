#include "container_atd.h"

namespace simple_animals {
	void container::MultiMethod(ofstream &ofst) {
		ofst << "Multimethod." << endl;
		for (int i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {
				cont[i]->MultiMethod(cont[j], ofst);
				cont[i]->Out(ofst);
				cont[j]->Out(ofst);
			}
		}
		ofst << endl;
	}}