#include <bits/stdc++.h>

using namespace std;

inline long long read() 
	{ char c = getchar();
	while (c != '-' && (c < '0' || c > '9')) c = getchar();
	long long k = 0, kk = 1;
	if (c == '-') c = getchar(), kk = -1;
	while (c >= '0' && c <= '9') k = k * 10 + c - '0', c = getchar();
	return kk * k;
}
void write(long long x) 
	{ if (x < 0) x = -x, putchar('-');
	if (x / 10) write(x / 10);
	putchar(x % 10 + '0');
}
void writeln(long long x) 
	{ write(x);
	puts("");
}
long long n, b, p;
int main() 
	{ n = read();
	b = read();
	p = read();
	write((b + b + 1) * (n - 1));
	putchar(' ');
	writeln ( p * n ) ;

}
