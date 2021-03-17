#include <bits/stdc++.h>

using namespace std;

vector<int> vec;
int main() 
	{ int n;
	cin >> n;
	int arr[n][n];
	for (int i = 0; i < n; i++) 
		{ for (int j = 0; j < n; j++) { cin >> arr[i][j]; }
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) 
		{ bool t = true;
		for (int j = 0; j < n; j++) 
			{ if (arr[i][j] == 1 || arr[i][j] == 3) 
				{ t = false;
				break;
			}
		}
		if (t) 
			{ cnt++;
			vec.push_back(i + 1);
		}
	}
	cout << cnt << endl;
	int len = vec.size();
	for (int i = 0; i < len - 1; i++) { cout << vec[i] << " "; }
	if ( cnt > 0 ) cout << vec [ vec. size ( ) - 1 ] << endl ;
}
