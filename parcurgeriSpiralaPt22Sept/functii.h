#include <iostream>
#include <fstream>

using namespace std;

void afisareMatrice(int x[100][100], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}

void citireMatriceFisier(int x[100][100], int& m, int& n) {
	ifstream f("matrice.txt");
	f >> m, f >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			f >> x[i][j];
		}
	}
}

void parcurgereSpirala(int x[100][100], int m, int n) {
	for (int i1 = 0, j1 = 0, i2 = m - 1, j2 = n - 1; i1 <= i2 && j1 <= j2; i1++, j1++, i2--, j2--) {
		for (int k = j1; k <= j2; k++) {
			cout << x[i1][k] << " ";
		}
		for (int k = i1 + 1; k <= i2; k++) {
			cout << x[k][j2] << " ";
		}
		for (int k = j2 - 1; k >= j1; k--) {
			cout << x[i2][k] << " ";
		}
		for (int k = i2 - 1; k > i1; k--) {
			cout << x[k][j1] << " ";
		}
	}
}

int prodElemNenuleChenar0(int x[100][100], int m, int n) {
	int p = 1;
	for (int i1 = 0, j1 = 0, i2 = m - 1, j2 = n - 1; i1 < 1; i1++) {
		for (int k = j1; k <= j2; k++) {
			if (x[i1][k] != 0) {
				p *= x[i1][k];
			}
		}
		for (int k = i1 + 1; k <= i2; k++) {
			if (x[k][j2] != 0) {
				p *= x[k][j2];
			}
		}
		for (int k = j2 - 1; k >= j1; k--) {
			if (x[i2][k] != 0) {
				p *= x[i2][k];
			}
		}
		for (int k = i2 - 1; k > i1; k--) {
			if (x[k][j1] != 0) {
				p *= x[k][j1];
			}
		}
	}
	return p;
}

int sumaElemChenarulK(int x[100][100], int m, int n, int indice) {
	int s = 0;
	for (int i1 = indice, j1 = indice, i2 = m - 1 - indice, j2 = n - 1 - indice; i1 < indice + 1l; i1++) {
		for (int k = j1; k <= j2; k++) {
			s += x[i1][k];
		}
		for (int k = i1 + 1; k <= i2; k++) {
			s += x[k][j2];
		}
		for (int k = j2 - 1; k >= j1; k--) {
			s += x[i2][k];
		}
		for (int k = i2 - 1; k > i1; k--) {
			s += x[k][j1];
		}
	}
	return s;
}

int minimChenar1(int x[100][100], int m, int n) {
	int min = x[1][1];
	for (int i1 = 1, j1 = 1, i2 = m - 2, j2 = n - 2; i1 < 2; i1++) {
		for (int k = j1; k <= j2; k++) {
			if (x[i1][k] < min) {
				min = x[i1][k];
			}
		}
		for (int k = i1 + 1; k <= i2; k++) {
			if (x[k][j2] < min) {
				min = x[k][j2];
			}
		}
		for (int k = j2 - 1; k >= j1; k--) {
			if (x[i2][k] < min) {
				min = x[i2][k];
			}
		}
		for (int k = i2 - 1; k > i1; k--) {
			if (x[k][j1] < min) {
				min = x[k][j1];
			}
		}
	}
	return min;
}

void modificareExSpiralaC(int x[100][100], int m, int n) {
	int minim = minimChenar1(x, m, n);
	for (int i1 = 0, j1 = 0, i2 = m - 1, j2 = n - 1; i1 < 1; i1++) {
		for (int k = j1; k <= j2; k++) {
			x[i1][k] = minim;
		}
		for (int k = i1 + 1; k <= i2; k++) {
			x[k][j2] = minim;
		}
		for (int k = j2 - 1; k >= j1; k--) {
			x[i2][k] = minim;
		}
		for (int k = i2 - 1; k > i1; k--) {
			x[k][j1] = minim;
		}
	}
}

// Functii pentru problemele de pe fisa.

// Pentru Problema 1 :

void citireNM(int& n, int& m) {
	cout << "Introduceti n : ";
	cin >> n;
	cout << "Introduceti m : ";
	cin >> m;
}

void atribuirePb1AFisa(int x[100][100], int n) {
	for (int z = 1, i1 = 0, j1 = 0, i2 = n - 1, j2 = n - 1; i1 <= i2 && j1 <= j2; i1++, j1++, i2--, j2--) {
		for (int k = j1; k <= j2; k++) {
			x[i1][k] = z;
			z++;
		}
		for (int k = i1 + 1; k <= i2; k++) {
			x[k][j2] = z;
			z++;
		}
		for (int k = j2 - 1; k >= j1; k--) {
			x[i2][k] = z;
			z++;
		}
		for (int k = i2 - 1; k > i1; k--) {
			x[k][j1] = z;
			z++;
		}
	}
}

void atribuirePb1BFisa(int x[100][100], int n) {
	for (int i = 0, z = 1; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++, z++) {
				x[i][j] = z;
			}
		}
		else {
			for (int j = n - 1; j > -1; j--, z++) {
				x[i][j] = z;
			}
		}
	}
}

void atribuirePb1CFisa(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 && j % (n - 1) != 0) {
				x[i][j] = 2;
			}
			else {
				if (j == 0 && i % (n - 1) != 0) {
					x[i][j] = 3;
				}
				else {
					if (j == (n - 1) && i % (n - 1) != 0) {
						x[i][j] = 4;
					}
					else {
						if (i == (n - 1) && j % (n - 1) != 0) {
							x[i][j] = 5;
						}
						else {
							x[i][j] = 1;
						}
					}
				}
			}
		}
	}
}

void atribuirePb1DFisa(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		x[i][i] = i + 1;
		for (int j = i + 1; j < n; j++) {
			x[i][j] = x[i][i];
			x[j][i] = x[i][i];
		}
	}
}

void atribuirePb1EFisa(int x[100][100], int n) {
	for (int z = 1, i1 = 0, j1 = 0, i2 = n - 1, j2 = n - 1; i1 <= i2 && j1 <= j2; i1++, j1++, i2--, j2--) {
		for (int k = j1; k <= j2; k++) {
			x[i1][k] = z % 10;
			z++;
		}
		for (int k = i1 + 1; k <= i2; k++) {
			x[k][j2] = z % 10;
			z++;
		}
		for (int k = j2 - 1; k >= j1; k--) {
			x[i2][k] = z % 10;
			z++;
		}
		for (int k = i2 - 1; k > i1; k--) {
			x[k][j1] = z % 10;
			z++;
		}
	}
}

void atribuirePb1FFisa(int x[100][100], int n) {
	for (int i = n - 1; i > -1; i--) {
		for (int j = n - 1; j > -1; j--) {
			if (i == n - 1 || j == n - 1) {
				x[i][j] = 1;
			}
			else {
				x[i][j] = x[i + 1][j] + x[i][j + 1];
			}
		}
	}
}

// Pentru Problema 2 :

void atribuirePb2Fisa(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || j == n - i - 1) {
				x[i][j] = 0;
			}
			else {
				if (j > i && j < n - i - 1) {
					x[i][j] = 1;
				}
				else {
					if (j < i && j > n - i - 1) {
						x[i][j] = 2;
					}
					else {
						x[i][j] = 3;
					}
				}
			}
		}
	}
}

// Pentru Problema 3 :

void atribuirePb3Fisa(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			x[i][j] = i + j + 1;
		}
	}
}

// Pentru Problema 4 :

void atribuirePb4Fisa(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i % 2 == 0) {
				x[i][j] = i + 1;
			}
			else {
				x[i][j] = j + 1;
			}
		}
	}
}



