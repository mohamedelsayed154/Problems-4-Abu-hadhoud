#include <iostream>
using namespace std;

int ValidNum();
void InvertedPattern(int num);

int main() {
	int num = ValidNum();
	InvertedPattern(num);
}

int ValidNum() {
	int num;

	do {
		cout << "Entre the numer =  ";
		cin >> num;
	} while (num < 0);
	return num;
}

void InvertedPattern(int num) {
	
	for (int i = 1; i <= num ; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}
