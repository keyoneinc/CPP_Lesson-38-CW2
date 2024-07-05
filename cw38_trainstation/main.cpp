#include <iostream>
#include <set>
#include "Train.h"
using namespace std;

int main() {
	set<Train> Kharkiv;
	Kharkiv.insert(Train("045", Time_(12, 0, 0), "Lviv"));
	Kharkiv.insert(Train("012", Time_(16, 30, 0), "Uzhgorod"));
	Kharkiv.insert(Train("017", Time_(8, 0, 0), "Odessa"));
	Kharkiv.insert(Train("028", Time_(6, 30, 0), "Kiyv"));

	//for (auto a : Kharkiv) {
	//	a.showInfo();
	//	
	//}

	set<Train>::iterator item;
	for (item = Kharkiv.begin(); item != Kharkiv.end(); item++) {
		item->showInfo();
	}


}