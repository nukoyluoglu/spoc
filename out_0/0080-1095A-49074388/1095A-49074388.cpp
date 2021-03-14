#include <bits/stdc++.h>

using namespace std;

int main() 
	{ long long n;
	cin >> n;
	string palabra;
	cin >> palabra;
	string answer = "";
	long long aumento = 1;
	for (long long i = 0; i < n; i = i + aumento) 
		{ answer.append(palabra.substr(i, 1));
		aumento++;
	}
	cout << answer << endl ;

	return 0;
}
