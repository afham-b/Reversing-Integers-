#include <iostream>
using namespace std;

void reverse (unsigned int n);

int count = 0 ; 

int main() {
	unsigned int num;
	cout << "Enter number: ";
	cin >> num;
	reverse(num);
	cout << endl;
  cout << "\n" << count << endl; 
	return 0;
}

void reverse (unsigned int n) {
  count++; 
	if (n) {
		cout << n % 10;
		reverse(n / 10); } 
	}