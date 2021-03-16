#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int NumberOfStations;
	int From, To;
	int SumOfDistance = 0;
	cin >> NumberOfStations;
	vector<int> StaionsDistance(NumberOfStations);
	for (int Index = 0; Index < NumberOfStations; Index++) 
		{ cin >> StaionsDistance[Index];
		SumOfDistance += StaionsDistance[Index];
	}
	cin >> From >> To;
	int Start, End;
	if (From < To) 
		{ Start = From;
		End = To;
	}  else 
		{ Start = To;
		End = From;
	}
	int TheOtherDestance = 0;
	for (; Start < End; Start++) TheOtherDestance += StaionsDistance[Start - 1];
	cout << min ( ( SumOfDistance - TheOtherDestance ) ) << endl ;

	return 0;
}
