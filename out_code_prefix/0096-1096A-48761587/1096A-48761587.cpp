#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int numberOfInputs;
	cin >> numberOfInputs;
	long long input1, input2;
	while (numberOfInputs--) 
		{ cin >> input1 >> input2;
		long long div = input2 / input1;
		long long answer = input1 * div;
		cout << input1 << " " << answer << endl ;

	}
	return 0;
}
