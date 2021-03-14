#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int t, n, i, x, pp, count, flag = 0, dis = 0, min = 0, sum;
	vector<int> v;
	vector<int>::iterator it;
	cin >> n;
	while (n--) 
		{ cin >> x;
		v.push_back(x);
	}
	t = *min_element(v.begin(), v.end());
	for (i = 0; i < v.size(); i++) 
		{ if (v[i] == t) 
			{ if (flag != 0) 
				{ dis = i - pp;
				if (min == 0 && dis != 0)
					{ min = dis;
				} else if (min != 0 && min > dis)
					{ min = dis;
			} }
			flag++;
			pp = i;
		}
	}
	cout << min << endl ;

	return 0;
}
