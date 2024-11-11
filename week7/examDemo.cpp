#include "complex.h"

int main() {
	Complex c1(2, 3), c2(4, 5);
	Complex c3 = c1 * c2;  
	cout << c3;  // 8+15i
	return 0;
}

