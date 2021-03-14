#include <bits/stdc++.h>

using namespace std;

vector<int> nums;
int main() 
	{ int n, a, last, dist;
	int min = INT_MAX;
	int mindist = INT_MAX;
	cin >> n;
	for (int i = 0; i < n; i++) 
		{ cin >> a;
		nums.push_back(a);
		if (a < min) min = a;
	}
	for (int i = 0; i < n; i++) 
		{ if (nums[i] == min) 
			{ last = i;
			break;
		}
	}
	for (int i = last + 1; i < n; i++) 
		{ if (nums[i] == min) 
			{ dist = i - last;
			if (dist < mindist) mindist = dist;
			last = i;
		}
	}
	cout << mindist << endl ;

}
