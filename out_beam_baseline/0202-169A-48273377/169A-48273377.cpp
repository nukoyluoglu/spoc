#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int n;
	int a;
	int b;
	vector<int> complexity;
	cin >> n >> a >> b;
	int i = 0;
	for (; i < n; i++) 
		{ int tmp;
		cin >> tmp;
		complexity.push_back(tmp);
	}
	sort(complexity.begin(), complexity.end());
	int cnt = 0;
	for (i = complexity[b - 1]; i < complexity[b]; i++) { cnt++; }
	return cout << cnt ;

}
