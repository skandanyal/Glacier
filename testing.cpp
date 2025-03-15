#include<iostream>

void print_testing() {
	std::cout << "Testing things out.\n";
}

int main() {
	for(int i=0; i<5; i++) {
		print_testing();
	}

	return 0;
}