#include <bits/stdc++.h>

using namespace std;

int main() 
	{ vector<long long int> v;
	long long int n, out, in, sum = 0;
	cin >> n;
	while (n--) 
		{ cin >> out >> in;
		sum = sum - out + in;
		v.push_back(sum);
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	cout << v [ 0 ] << endl ;
	return 0;
}
