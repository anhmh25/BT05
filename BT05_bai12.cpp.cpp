#include<iostream>
using namespace std;

int giaiThua(int n);
int toHop(int k, int n); 
int kiemTra(int k, int n);
void nhapKN(int k[], int n[], int* soPhanTu);
int kiemTra(int k, int n);

int main() {
	int soPhanTu ;
	int k[1000], n[1000];
	nhapKN(k, n, &soPhanTu);
	for (int i = 0; i < soPhanTu; i++) {
		cout << toHop(k[i], n[i]) << endl;
	}
	return 0;
}

int giaiThua(int n) {
	if (n == 1 || n == 0)return 1;
	else return n * giaiThua(n - 1);
}

int toHop(int k, int n) {
	return giaiThua(n) / (giaiThua(k) * giaiThua(n - k));
}

void nhapKN(int k[], int n[], int* soPhanTu) {
	int i,j,mark=0;
	cin >> i >> j;
	while (i != -1 && j != -1) {
		k[mark] = i;
		n[mark] = j;
		mark++;
		cin >> i >> j;
	}
	*soPhanTu = mark;
}

int kiemTra(int k, int n) {
	if (k == -1 && n == -1)return 0;
	else return 1;
}