#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int mine_count(bool a[50][50], int i, int j, int m, int n ) {
	int left  , right  , top  , bottom  ;
	if (j <= 1)left = 0;
	else left = j - 1;
	if (j >= n - 2) right = n - 1;
	else right = j + 1;
	if (i <= 1)top = 0;
	else top = i - 1;
	if (i >= m - 2)bottom = m - 1;
	else bottom = i + 1;
	int count = 0;
	for (int i = top; i <= bottom; i++) {
		for (int j = left; j <= right; j++) {
			if (a[i][j] == true)count++;
		}
	}
	return count;
}

void  map_print(char a[50][50], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}

void game_over(char map[50][50], bool mine[50][50], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mine[i][j] == true)cout << '*' << ' ';
			else cout << mine_count(mine,i,j,m,n) << ' ';
		}
		cout << endl;
	}
}

int main(int argc,char* argv[]) {
	srand(time(NULL));
	int m, n, k;
	cout << "Nhap so hang : ";
	cin >> m;
	cout << "Nhap so cot : ";
	cin >> n;
	cout << "Nhap so luong min : ";
	cin >> k;
	char map[50][50];
	bool mine[50][50];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			map[i][j] = '*';
			mine[i][j] = false;
		}
	}
	map_print(map, m, n);
	for (int i = 0; i < k; i++) {
		int a = rand() % m;
		int b = rand() % n;
		if (mine[a][b] == true)i--;
		else mine[a][b] = true;
	}
	int count = m * n - k;
	while (count!=0) {
		cout << "Moi nhap toa do o ban muon !!!" << endl;
		int x, y;
		cout << "Dong thu : ";
		cin >> x;
		x--;
		cout << "Cot thu : ";
		cin >> y;
		y--;
		while (x<0 || x>m || y<0 || y>n) {
			cout << "Du lieu bi loi !!! Moi ban nhap lai !!!";
			cout << "Dong thu : ";
			cin >> x;
			x--;
			cout << "Cot thu : ";
			cin >> y;
			y--;
		}
		if (mine[x][y] == true)break;
		else {
			count--;
			map[x][y]=(char)(mine_count(mine, x, y, m, n)+48);
			map_print(map, m, n);
			
		}
	}
	if (count == 0) {
		cout << "Congratulates !!! You win !!! " << endl;
		game_over(map, mine, m, n);
	}
	else {
		cout << "YOU ARE DEAD !!!" << endl;
		game_over(map, mine, m, n);
	}
		
	return 0;
}