#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int number, i, temp, flag, index = 0, result = 0;
	string str;
	cin >> number;
	cin >> str;
	int arr[number] = {0};
	for (i = 0; i < number; i++) 
		{ flag = 0;
		temp = 0;
		while (str[i] == 'B') 
			{ i++;
			flag = 1;
			temp++;
		}
		if (flag == 1) 
			{ i--;
			result++;
			arr[index] = temp;
			index++;
		}
	}
	cout << result << endl;
	for (i = 0; i < result; i++) 
		{ if (i == result - 1) 
			{ cout << arr[i] << endl;
			break;
		}
		cout << arr [ i ] << " " ;

	}
	return 0;
}
