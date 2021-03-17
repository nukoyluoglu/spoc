#include <bits/stdc++.h>

using namespace std;

int main() 
	{ int N;
	string jolteon = "jolteon";
	int jol = 0;
	string flareon = "flareon";
	int fla = 0;
	string umbreon = "umbreon";
	int umb = 0;
	string leafeon = "leafeon";
	int leaf = 0;
	string glaceon = "glaceon";
	int gla = 0;
	string sylveon = "sylveon";
	int syl = 0;
	string eevee;
	cin >> N;
	cin >> eevee;
	if (N == 8) 
		{ cout << "vaporeon\n";
	}  else if (N == 6) 
		{ cout << "espeon\n";
	}  else 
		{ for (int x = 0; x < N; x++) 
			{ if (eevee[x] != '.') 
				{ if (eevee[x] == flareon[x] && fla == 0) 
					{ if (x != 2) { leaf = 1; }
					jol = 1;
					syl = 1;
					umb = 1;
					if (x != 1 && x != 2) { gla = 1; }
				}
				if (eevee[x] == glaceon[x] && gla == 0) 
					{ if (x != 2) { leaf = 1; }
					jol = 1;
					syl = 1;
					umb = 1;
					if (x != 1 && x != 2) { fla = 1; }
				}
				if (eevee[x] == leafeon[x] && leaf == 0) 
					{ if (x != 2) 
						{ fla = 1;
						gla = 1;
					}
					jol = 1;
					syl = 1;
					umb = 1;
				}
				if (eevee[x] == jolteon[x] && jol == 0) 
					{ leaf = 1;
					fla = 1;
					if (x != 2) { syl = 1; }
					umb = 1;
					gla = 1;
				}
				if (eevee[x] == umbreon[x] && umb == 0) 
					{ leaf = 1;
					jol = 1;
					syl = 1;
					fla = 1;
					gla = 1;
				}
				if (eevee[x] == sylveon[x] && syl == 0) 
					{ leaf = 1;
					fla = 1;
					if (x != 2) { jol = 1; }
					umb = 1;
					gla = 1;
				}
				if (syl + leaf + jol + umb + gla + fla == 5) 
					{ if (syl == 0) { cout << sylveon << "\n"; }
					if (gla == 0) { cout << glaceon << "\n"; }
					if (fla == 0) { cout << flareon << "\n"; }
					if (jol == 0) { cout << jolteon << "\n"; }
					if (umb == 0) { cout << umbreon << "\n"; }
					if (leaf == 0) { cout << leafeon << "\n"; }
					break ;

				}
			}
		}
	}
}
