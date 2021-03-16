#include <bits/stdc++.h>

using namespace std;

vector<int> v;
int num[51], value[51];
int main() 
	{ int n, index = 1;
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> num[i]; }
	v.push_back(num[n - 1]);
	for (int i = n - 2; i >= 0; i--) 
		{ int j = 0, flag = 0;
		while (j < v.size()) 
			{ if (num[i] == v[j]) 
				{ flag = 1;
				break;
			}
			j++;
		}
		if (!flag) v.push_back(num[i]);
	}
	cout << v.size() << endl;
	cout << v[v.size() - 1];
	for (int i = v.size() - 2; i >= 0; i--) cout << " " << v[i];
	cout << endl ;

}
