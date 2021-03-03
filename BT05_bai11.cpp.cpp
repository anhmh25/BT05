#include<iostream>
#include<cmath>
using namespace std;

string transform(long n) {
	string result;
	while (n != 0) {
		char k = n % 2 + 48;
		result += k;
		n /= 2;
	}
	return result;
}

int main() {
	long n;
	cin >> n;
	string s= transform(n);
	int m = s.size();
	for (int i = m-1; i >=0; i--)cout << s[i];
	return 0;
}
