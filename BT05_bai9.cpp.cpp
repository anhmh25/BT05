#include<iostream>
#include<stdlib.h>
using namespace std;

int randomNumber(int n) {
	int ranNum = rand() % n;
	return ranNum;
}

int main() {
	int n;
	cin >> n;
	cout << randomNumber(n);
	return 0;
}