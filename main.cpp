#include <iostream>

using namespace std;

class UnusedClass {
	
};

int unused_function(int n) {
	
}

int main() {
	for (int i = 0; i < 2; ++i) {
		cout << "Loops 1\n";
		for (int j = 0; j < 2; ++j) {
			cout << "Loops 2\n";
			for (int k = 0; k < 2; ++k) {
				cout << "Loops 4\n";
				int l = 0;
				while (l < 2) {
					cout << "Loops 5\n";
					++l;
				}
			}
		}
	}
	cout << "Hello, World!" << endl;
}