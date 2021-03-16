#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int list[10];
	memset(list, 0, sizeof(list));
	for (int i = 0; i < 6; i++) 
		{ int temp;
		cin >> temp;
		list[temp]++;
	}
	for (int i = 0; i < 10; i++) 
		{ if (list[i] == 4) 
			{ for (int j = 0; j < 10; j++) 
				{ if (list[j] == 2) 
					{ cout << "Elephant" << endl;
					return 0;
				}
			}
			cout << "Bear" << endl;
			return 0;
		}  else if (list[i] == 5) 
			{ cout << "Bear" << endl;
			return 0;
		}  else if (list[i] == 6) 
			{ cout << "Elephant" << endl;
			return 0;
		}
	}
	cout << "Alien" << endl ;

	return 0;
}
