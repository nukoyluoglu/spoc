#include <bits/stdc++.h>

using namespace std;

int freq[1005];
int main() 
	{ int hh, mm;
	double h, d, c, n;
	double cost1, cost2;
	cin >> hh >> mm;
	cin >> h >> d >> c >> n;
	int time = (hh * 60) + mm;
	int buns = 0;
	int hunger = h;
	while (hunger > 0) 
		{ hunger -= n;
		buns++;
	}
	cost1 = buns * c;
	if (time < 1200)
		{ hunger = h + ((1200 - time) * d);
	} else
		{ hunger = h;
	} buns = 0;
	while (hunger > 0) 
		{ hunger -= n;
		buns++;
	}
	c -= c * (20.0 / 100);
	cost2 = c * buns;
	cout. precision ( 5 ), cout << fixed << min ( cost2, cost1 ) << endl ;
}
