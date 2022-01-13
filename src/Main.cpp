#include <iostream>
using namespace std;

#include "ConfigObj.h"
#include "S.h"


int main() {
	cout << "Singleton" << endl;

	ConfigObj* s1 = ConfigObj::getInstance();
	s1->setValue(42);
	cout << s1->getValue() << endl;

	ConfigObj* s2 = ConfigObj::getInstance();
	cout << s1->getValue() << ", " << s2->getValue() << endl;

	s2->setValue(66);
	cout << s1->getValue() << ", " << s2->getValue() << endl;

	s1->setValue(777);
	cout << s1->getValue() << ", " << s2->getValue() << endl;

	// ????????
	ConfigObj* s3 = s1;
	cout << s2->getValue() << ", " << s3->getValue() << endl;


	cout << endl;


	S &sys1 = S::getInstance();

	sys1.setValue(33);
	cout << sys1.getValue() << endl;

	S &sys2 = S::getInstance();
	cout << sys1.getValue() << ", " << sys2.getValue() << endl;

	sys2.setValue(88);
	cout << sys1.getValue() << ", " << sys2.getValue() << endl;

	sys1.setValue(199);
	cout << sys1.getValue() << ", " << sys2.getValue() << endl;


	cout << "Done." << endl;
	return 0;
}
