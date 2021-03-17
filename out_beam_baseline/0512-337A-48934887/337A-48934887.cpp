#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int noOfStudents, noOfprizes, minimum = 100000;
	cin >> noOfStudents >> noOfprizes;
	int a[noOfprizes];
	for (int i = 0; i < noOfprizes; i++) { cin >> a[i]; }
	sort(a, a + noOfprizes);
	for (int i = 0; i + noOfStudents - 1 < noOfprizes; i++) { minimum = min(a[i + noOfStudents - 1] - a[i], minimum); }
	cout << minimum << endl ;
	return 0;
}
