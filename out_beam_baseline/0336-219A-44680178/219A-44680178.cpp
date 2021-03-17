#include <bits/stdc++.h>

using namespace std;

char inPutStr[1001];
int strArr[26], k;
char subStr[1001];
void makeAString() 
	{ int idx = 0;
	for (int j = 0; j < 26; j++) 
		{ while (strArr[j] != 0) 
			{ subStr[idx] = j + 'a';
			idx++;
			strArr[j] = strArr[j] - k;
		}
	}
	for (int i = 0; i < k; i++) 
		{ for (int j = 0; j < idx; j++) { cout << subStr[j]; }
	}
	cout << endl;
}
int main() 
	{ for (int i = 0; i < 26; i++) { strArr[i] = 0; }
	cin >> k;
	cin >> inPutStr;
	for (int i = 0; inPutStr[i]; i++) 
		{ int id = inPutStr[i] - 'a';
		strArr[id] = strArr[id] + 1;
	}
	bool Result = true;
	for (int i = 0; i < 26; i++) 
		{ if (strArr[i] % k != 0) 
			{ Result = false;
			break;
		}
	}
	if (Result) 
		{ makeAString();
	}  else
		{ cout << "-1" << endl ;
	} return 0;
}
