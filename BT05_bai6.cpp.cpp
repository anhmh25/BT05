#include<iostream>
using namespace std;

int UCLN(int a, int b) {
	while (a * b != 0) {
		if (a > b)a %= b;
		else b %= a;
	}
	return a + b;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << UCLN(a, b);
	return 0;
}