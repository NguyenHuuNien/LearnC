#include "CannedFood.h"
#include "NonCFood.h"

using namespace std;

int main() {
	vector<CannedFood> vCanned;
	CannedFood a = CannedFood("Sakana", 10.5, 9);
	CannedFood b = CannedFood("Buta", 35.75, 10);
	CannedFood c = CannedFood("Zou", 86.5, 5);
	vCanned.push_back(a); 
	vCanned.push_back(b); 
	vCanned.push_back(c);

	CannedFood *maxBox = &vCanned[0];
	for (int i = 1;i < vCanned.size();i++) {
		if (vCanned[i].getNumberBox() > maxBox->getNumberBox()) {
			maxBox = &vCanned[i];
		}
	}
	maxBox->setPrice(maxBox->getPrice() / 2);

	CannedFood::sortNumberBox(vCanned);
	for (auto o : vCanned) {
		o.display();
	}
	cout << "-----------------" << endl;
	vector<NonCFood> vNonC;
	NonCFood x = NonCFood("Yasai", 10.5, 5.3);
	NonCFood y = NonCFood("Gohan", 35.75, 80.4);
	NonCFood z = NonCFood("Satou", 86.5, 152.8);
	vNonC.push_back(x);
	vNonC.push_back(y);
	vNonC.push_back(z);

	NonCFood *maxWeight = &vNonC[0];
	for (int i = 1;i < vNonC.size();i++) {
		if (vNonC[i].getWeight() > maxWeight->getWeight()) {
			maxWeight = &vNonC[i];
		}
	}
	maxWeight->setWeight(maxWeight->getWeight() / 2);

	NonCFood::sortWeight(vNonC);

	for (auto o : vNonC) {
		o.display();
	}

	return 0;
}