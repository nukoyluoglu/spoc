#include <bits/stdc++.h>

using namespace std;

int tmp, min1, max1, sum_n, index_max, index_min;
int arr1[1000][1000];
char arr3[100];
int arr[10000];
void display_vector(vector<int> v) 
	{ for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;
}
void speed() {}
void min_max(vector<int> v, int l) 
	{ min1 = INT_MAX;
	max1 = INT_MIN;
	for (int i = l; i < v.size(); i++) 
		{ if (v[i] <= min1) 
			{ min1 = v[i];
			index_min = i;
		}
		if (v[i] >= max1) 
			{ max1 = v[i];
			index_max = i;
		}
	}
}
int sum_v(vector<int> v) 
	{ for (int i = 0; i < v.size(); i++) sum_n += v[i];
	return sum_n;
}
bool is_it_sorted_acs(vector<int> v) 
	{ bool test1 = false;
	for (int i = 0; i < v.size() - 1; i++)
		{ if (v[i + 1] <= v[i]) 
			{ test1 = false;
			return test1;
		}
	} test1 = true;
	return test1;
}
bool is_it_sorted_des(vector<int> v) 
	{ bool test1 = false;
	for (int i = 0; i < v.size() - 1; i++)
		{ if (v[i + 1] >= v[i]) 
			{ test1 = false;
			return test1;
		}
	} test1 = true;
	return test1;
}
int main() 
	{ speed();
	long long l, r;
	cin >> l >> r;
	if (l % 2 != 0) l++;
	if (r - l < 2) return cout << -1 << endl, 0;
	cout << l << " " << l + 1 <<' '<< ( l + 2 ) << endl ;

}
