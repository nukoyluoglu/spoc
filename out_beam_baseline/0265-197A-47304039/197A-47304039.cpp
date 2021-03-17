#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int min, height, width, radius;
	while (cin >> height >> width >> radius) 
		{ if (height < width)
			{ min = height;
		} else
			{ min = width;
		} radius = radius * 2;
		if (min >= radius)
			{ cout << "First" << endl;
		} else
			{ cout << "Second" << endl ;
	} }
	return 0;
}
