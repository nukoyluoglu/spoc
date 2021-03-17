#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n, p;
	cin >> n;
	cin >> p;
	long double apples = 0;
	long long answer = 0;
	vector<string> data;
	for (int i = 0; i < n; i++) 
		{ string temp;
		cin >> temp;
		data.push_back(temp);
	}
	for (int i = n - 1; i >= 0; i--) 
		{ if (data[i] == "halfplus") 
			{ apples += 0.5;
			apples *= 2;
			answer += (apples / 2.0) * p;
		}  else 
			{ apples *= 2;
			answer += (apples / 2.0) * p;
		}
	}
	cout << answer << endl;
	cin >> n ;
}
