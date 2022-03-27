/*factorial 2. 
#include <iostream>
using namespace std;

unsigned int factorial (unsigned int n);

int main() {
	unsigned int num;
	cout << "Enter number: ";
	cin >> num;
	cout << num << "! = " << factorial(num) << endl;
	return 0;
}

unsigned int factorial (unsigned int n) {
	return n > 0 ? n * factorial(n - 1) : 1;
} 
**/ 

// i think Norman is aksing how many time the factorial function is called, like you said
// we do pick our own N, so like if I pick N=5, i will have to say that the factorial function in this 
//case would be called 6 times, (the last call is where N is 0, the function gets called, but will not return anything. 