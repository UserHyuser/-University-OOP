#include "container_atd.h"

namespace simple_animals {
	// Container initialization
	container::container() : len(0) { }

	// Container cleaning (free memory)
	void container::Clear() {
		for (int i = 0; i < len; i++) {
			delete cont[i];
		}
		len = 0;
	}

	// Input container's content from specified source
	void container::In(ifstream &ifst) {
		while (!ifst.eof()) {
			if (((cont[len] = animal::In(ifst)) != 0) && len < 99) {
				len++;
			}
		}
	}

	// Output container's content to specified stream
	void container::Out(ofstream &ofst) {
		ofst << "Container contains " << len
			<< " animals." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->Out(ofst);
			ofst << "Name's lenght: "
				<< cont[i]->LenghtName() << endl;
		}
		ofst << endl;
	}

	// Filtered output
	void container::OnlyFish(ofstream &ofst) {
		ofst << "Only fishes." << endl;
		for (int i = 0; i < len; i++) {
			ofst << i << ": ";
			cont[i]->OnlyFish(ofst);
		}
		ofst << endl;
	}

	// Sorting animals by LenghtName
	void container::Sort() {
		for (int i = 0; i < len - 1; i++) {
			for (int j = i + 1; j < len; j++) {
				if (cont[i]->Compare(*cont[j])) {
					animal *tmp = cont[i];
					cont[i] = cont[j];
					cont[j] = tmp;
				}
			}
		}
	}
} // end simple_animals namespace
