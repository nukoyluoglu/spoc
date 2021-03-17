#include <bits/stdc++.h>

using namespace std;

const long long mod = 10e9 + 7;
const double eps = 1e-11;
const double PI = 2 * acos(0.0);
int main() 
	{ char arr[4][4];
	for (int i = 0; i < 4; i++) 
		{ for (int j = 0; j < 4; j++) { cin >> arr[i][j]; }
	}
	for (int i = 0; i < 4; i++) 
		{ for (int j = 0; j < 4; j++) 
			{ if (arr[i][j] == '.' or arr[i][j] == '#') 
				{ if (arr[i][j - 1] == '#' and j - 1 >= 0) 
					{ if (arr[i - 1][j] == '#' and i - 1 >= 0) 
						{ if (arr[i - 1][j - 1] == '#' and i - 1 >= 0 and j - 1 >= 0) 
							{ puts("YES");
							return 0;
						}
					}
				}
				if (arr[i][j + 1] == '#' and j + 1 < 4) 
					{ if (arr[i - 1][j] == '#' and i - 1 >= 0) 
						{ if (arr[i - 1][j + 1] == '#' and j + 1 < 4 and i - 1 >= 0) 
							{ puts("YES");
							return 0;
						}
					}
				}
				if (arr[i][j - 1] == '#' and j - 1 >= 0) 
					{ if (arr[i + 1][j] == '#' and i + 1 < 4) 
						{ if (arr[i + 1][j - 1] == '#' and i + 1 < 4 and j - 1 >= 0) 
							{ puts("YES");
							return 0;
						}
					}
				}
				if (arr[i][j + 1] == '#' and j + 1 < 4) 
					{ if (arr[i + 1][j] == '#' and i + 1 < 4) 
						{ if (arr[i + 1][j + 1] == '#' and i + 1 < 4 and j + 1 < 4) 
							{ puts("YES");
							return 0;
						}
					}
				}
				if (arr[i][j - 1] == '.' and j - 1 >= 0) 
					{ if (arr[i - 1][j] == '.' and i - 1 >= 0) 
						{ if (arr[i - 1][j - 1] == '.' and i - 1 >= 0 and j - 1 >= 0) 
							{ puts("YES");
							return 0;
						}
					}
				}
				if (arr[i][j + 1] == '.' and j + 1 < 4) 
					{ if (arr[i - 1][j] == '.' and i - 1 >= 0) 
						{ if (arr[i - 1][j + 1] == '.' and i - 1 >= 0 and j + 1 < 4) 
							{ puts("YES");
							return 0;
						}
					}
				}
				if (arr[i][j - 1] == '.' and j - 1 >= 0) 
					{ if (arr[i + 1][j] == '.' and i + 1 < 4) 
						{ if (arr[i + 1][j - 1] == '.' and i + 1 < 4 and j - 1 >= 0) 
							{ puts("YES");
							return 0;
						}
					}
				}
				if (arr[i][j + 1] == '.' and j + 1 < 4) 
					{ if (arr[i + 1][j] == '.' and i + 1 < 4) 
						{ if (arr[i + 1][j + 1] == '.' and i + 1 < 4 and j + 1 < 4) 
							{ puts("YES");
							return 0;
						}
					}
				}
			}
		}
	}
	cout << "NO" << endl ;
}
