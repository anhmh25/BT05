#include<iostream>
using namespace std;

void print(int blank, int deblank) {
	for (int i = 0; i < blank; i++) cout << " ";

	for (int i = 0; i < deblank; i++) cout << "*";
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		print(n - i - 1, i * 2 + 1);
			cout << endl;
	}
}