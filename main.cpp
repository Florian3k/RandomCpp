#include <iostream>
#include "random.cpp"

int main() {
	using std::cout;
	using std::endl;
	for (int i = 0; i < 5; i++) {
		cout << "random(1,5) = " << random(1,5) << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << "random(1.0,5.0) = " << random(1.0,5.0) << endl;
	}
}
