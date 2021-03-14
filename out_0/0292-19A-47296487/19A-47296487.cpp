#include <bits/stdc++.h>

using namespace std;

map<string, int> scored, conceed, points;
vector<string> vec, a;
bool cmp(string a, string b) 
	{ if (points[b] > points[a])
		{ return 1;
	} else if (points[b] < points[a])
		{ return 0;
	} else 
		{ int dif1 = scored[a] - conceed[a];
		int dif2 = scored[b] - conceed[b];
		if (dif1 < dif2)
			{ return 1;
		} else if (dif1 > dif2)
			{ return 0;
		} else 
			{ if (scored[a] > scored[b])
				{ return 0;
			} else if (scored[a] < scored[b])
				{ return 1;
		} }
	}
}
int main() 
	{ int n = 0;
	string st;
	cin >> n;
	int m = n, k = n / 2;
	while (m--) 
		{ cin >> st;
		vec.push_back(st);
	}
	n = (n * n - 1) / 2;
	st = "";
	getchar();
	while (n--) 
		{ int i;
		string team1 = "", team2 = "";
		getline(cin, st);
		for (i = 0; i < st.size(); i++) 
			{ if (st[i] == '-') 
				{ i++;
				break;
			}
			team1 += st[i];
		}
		for (; i < st.size(); i++) 
			{ if (st[i] == ' ') 
				{ i++;
				break;
			}
			team2 += st[i];
		}
		int j = 1, sum1 = 0;
		for (; i < st.size(); i++) 
			{ if (st[i] == ':') 
				{ i++;
				break;
			}
			int c = st[i] - 48;
			sum1 = (sum1 * j) + c;
			j *= 10;
		}
		scored[team1] += sum1;
		conceed[team2] += sum1;
		int sum2 = 0;
		j = 1;
		for (; i < st.size(); i++) 
			{ int c = st[i] - 48;
			sum2 = (sum2 * j) + c;
			j *= 10;
		}
		scored[team2] += sum2;
		conceed[team1] += sum2;
		if (sum1 > sum2)
			{ points[team1] += 3;
		} else if (sum1 < sum2)
			{ points[team2] += 3;
		} else 
			{ points[team1]++;
			points[team2]++;
		}
	}
	sort(vec.begin(), vec.end(), cmp);
	for (int i = vec.size() - 1; i >= k; i--) a.push_back(vec[i]);
	sort(a.begin(), a.end());
	for ( int i = 0 ; i < a. length ( ) ; i ++ ) { cout << a [ i ] ; }

}
