#include <bits/stdc++.h>

using namespace std;

int bio[1000][1000];
const int smjeroviX[8] = {0, 0, 1, -1, 1, 1, -1, -1};
const int smjeroviY[8] = {1, -1, 0, 0, 1, -1, 1, -1};
int main() 
	{ int n, aX, aY, bX, bY, cX, cY;
	cin >> n >> aX >> aY >> bX >> bY >> cX >> cY;
	aX--;
	aY--;
	bX--;
	bY--;
	cX--;
	cY--;
	queue<int> q;
	q.push(bX);
	q.push(bY);
	bio[bX][bY] = 1;
	while (!q.empty()) 
		{ int x = q.front();
		q.pop();
		int y = q.front();
		q.pop();
		if (x == cX && y == cY) 
			{ cout << "YES\n";
			return 0;
		}
		for (int i = 0; i < 8; i++) 
			{ int X = x + smjeroviX[i];
			int Y = y + smjeroviY[i];
			if (X < 0 || X == n || Y < 0 || Y == n || bio[X][Y]) continue;
			bio[X][Y] = 1;
			if (X != aX && Y != aY && (X + Y != aX + aY) && (X - Y != aX - aY)) 
				{ q.push(X);
				q.push(Y);
			}
		}
	}
	cout << "NO\n" ;
	return 0;
}
