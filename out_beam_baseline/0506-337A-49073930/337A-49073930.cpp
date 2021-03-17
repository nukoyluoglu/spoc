#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int num, buy;
	vector<int> v;
	cin >> num >> buy;
	for (int i = 0; i < buy; i++) 
		{ int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int max = 0, min = 0, differ = 1000000;
	for (int i = 0; i < v.size(); i++) 
		{ if ((i + num) > v.size())
			{ break;
		} else 
			{ min = min_element(v.begin() + i, v.begin() + (i + num)) - v.begin();
			max = max_element(v.begin() + i, v.begin() + (i + num)) - v.begin();
			if ((v.at(max) - v.at(min)) < differ) { differ = v.at(max) - v.at(min); }
		}
	}
	for (int i = 0; i < v.size(); i++) 
		{ int total = count(v.begin(), v.end(), v.at(i));
		if (total >= num) 
			{ differ = 0;
			break;
		}
	}
	cout << differ << endl ;
}
