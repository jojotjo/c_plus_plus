// write a program factorial of n of numbers

#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "enter the input : ";
	cin >> num;
	int fact = 1;
	for (int i = 1;i <= num;i++) {
		fact = fact * i;
	}
	cout << "the output of factorial of n numbers is : " << fact << endl;
}