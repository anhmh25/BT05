#include<iostream>
#include<cmath>
using namespace std;

int round1(double n) {
	int k;
	double remain = n - (int)n;
	if (remain >= 0.5) k=ceil(n);
	else k=floor(n);
	return k;
}

int round2(double n) {
	double remain = n - (int)n;
	if (remain >= 0.5) return n + 1;
	else return n-1;
}

int main() {
	double n;
	cin >> n;
	cout << round1(n);
	return 0;
}


