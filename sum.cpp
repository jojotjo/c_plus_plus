//write a program to sum the n numbers divisible by 3.

#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "input the n : ";
	cin >> num;
	int sum = 0;
	for (int i = 0;i < num;i++) {
		if (i % 3 == 0) { 
			sum += i;
		}
	}
	cout << "the sum of n divisible by 3: " << sum << endl;
}