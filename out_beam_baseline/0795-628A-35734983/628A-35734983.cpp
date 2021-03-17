#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int participants, bottles, towels;
	int total_b = 0, total_t = 0, matches;
	cin >> participants >> bottles >> towels;
	total_t = participants * towels;
	while (participants != 1) 
		{ matches = participants / 2;
		if (participants % 2 == 1) 
			{ total_b += (participants - 1) * bottles + matches;
			participants = participants / 2 + 1;
		}  else 
			{ total_b += participants * bottles + matches;
			participants = participants / 2;
		}
	}
	cout <<total_b << " " << total_t << endl ;
	return 0;
}
