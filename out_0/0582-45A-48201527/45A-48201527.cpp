#include <bits/stdc++.h>

using namespace std;

int main() 
	{ string a;
	int s;
	cin >> a >> s;
	int d;
	if (a == "January")
		{ d = 1;
	} else if (a == "February")
		{ d = 2;
	} else if (a == "March")
		{ d = 3;
	} else if (a == "April")
		{ d = 4;
	} else if (a == "May")
		{ d = 5;
	} else if (a == "June")
		{ d = 6;
	} else if (a == "July")
		{ d = 7;
	} else if (a == "August")
		{ d = 8;
	} else if (a == "September")
		{ d = 9;
	} else if (a == "October")
		{ d = 10;
	} else if (a == "November")
		{ d = 11;
	} else
		{ d = 12;
	} d--;
	d = d + s;
	d = d % 12;
	if (d == 0)
		{ a = "January";
	} else if (d == 1)
		{ a = "February";
	} else if (d == 2)
		{ a = "March";
	} else if (d == 3)
		{ a = "April";
	} else if (d == 4)
		{ a = "May";
	} else if (d == 5)
		{ a = "June";
	} else if (d == 6)
		{ a = "July";
	} else if (d == 7)
		{ a = "August";
	} else if (d == 8)
		{ a = "September";
	} else if (d == 9)
		{ a = "October";
	} else if (d == 10)
		{ a = "November";
	} else
		{ a = "December";
	} cout << a << endl ;

}
