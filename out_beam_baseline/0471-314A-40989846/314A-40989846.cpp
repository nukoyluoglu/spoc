#include <bits/stdc++.h>

using namespace std;

int Get() 
	{ char c;
	while (c = getchar(), (c < '0' || c > '9') && (c != '-'))
		{ ;
	} bool Flag = (c == '-');
	if (Flag) c = getchar();
	int X = 0;
	while (c >= '0' && c <= '9') 
		{ X = X * 10 + c - 48;
		c = getchar();
	}
	return Flag ? -X : X;
}
void Output(int X) 
	{ if (X < 0) 
		{ putchar('-');
		X = -X;
	}
	int Len = 0, Data[10];
	while (X) 
		{ Data[Len++] = X % 10;
		X /= 10;
	}
	if (!Len) Data[Len++] = 0;
	while (Len--) putchar(Data[Len] + 48);
	putchar('\n');
}
int main() 
	{ int N = Get();
	long long K = Get(), Sum = 0;
	int Top = 0, Total = N, Number = 0;
	for (int i = 0; i < N; i++) 
		{ long long X = Get();
		if (Sum - X * Number * (Total - Number - 1) < K) 
			{ Output(i + 1);
			Total--;
		}  else 
			{ Sum += Number * X;
			Number ++ ;
		}
	}
	return 0;
}
