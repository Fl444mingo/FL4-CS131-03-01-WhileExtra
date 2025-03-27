#include <iostream>
#include <Windows.h> // for Sleep() function
using namespace std;
int main() {
	int bottles = 99;
	// added variables for testing break command
	int groupSize = 2, beerLimitPer = 2, emptyBottles = 0;
	while (bottles > 0) {
		cout << bottles << " bottles of beer on the wall,\n";
		Sleep(2000); // 2000 milliseconds = 2 seconds
		cout << bottles << " bottles of bee-ee-eer...\n";
		Sleep(1800);
		cout << "take one down, ";
		Sleep(800);
		cout << "pass it around, \n";
		Sleep(1000);
		cout << bottles - 1 << " bottles of beer on the wall.\n\n";
		bottles = bottles - 1;
		// decrement operator variations
		// bottles -= 1;
		// bottles--;
		// cout << --bottles << " bottles of beer on the wall.\n\n";
		Sleep(1800);
		// if too much beer served, cut everyone off
		if (++emptyBottles >= (groupSize * beerLimitPer)) {
			cout << "\nAlright, you " << groupSize << " that's enough now... \n";
				break;
		}
	}
	system("pause");
	return 0;
}