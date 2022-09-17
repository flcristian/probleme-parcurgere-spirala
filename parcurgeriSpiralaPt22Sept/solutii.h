#include "functii.h"


void aplicareParcurgereSpirala() {
	int m, n;
	int x[100][100];
	citireMatriceFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << endl << "Numerele luate in ordinea spiralei : " << endl;
	parcurgereSpirala(x, m, n);
}

// Exercitiu Chenare (spirala)
// Sa se citeasca o matrice de maxim 100x200
// de elemente numere intregi cu valori intre
// 10-90.
// 
// a) Care este produsul elementelor nenule
//    aflate pe chenarul exterior?
// b) Sa se determine suma elementelor din
//    chenarul exterior k (k citit);
// c) Sa se inlocuiasca toate elementele din
//    chenarul exterior de grad 0 cu valoarea
//	  minima din chenarul exterior de grad 1.

void exSpiralaA() {
	int m, n;
	int x[100][100];
	citireMatriceFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << "Raspunsul este : " << prodElemNenuleChenar0(x, m, n);
}

void exSpiralaB() {
	int m, n, k;
	int x[100][100];
	citireMatriceFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << "Introduceti k : ";
	cin >> k;
	cout << "Raspunsul este : " << sumaElemChenarulK(x, m, n, k);
}

void exSpiralaC() {
	int m, n;
	int x[100][100];
	citireMatriceFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << endl << "Matricea dupa modificare este : " << endl << endl;
	modificareExSpiralaC(x, m, n);
	afisareMatrice(x, m, n);
}


// =-=-=-=-=-=-=-=-=-=
// Probleme de pe fisa
// =-=-=-=-=-=-=-=-=-=

// Problema 1

// a)
//  1  2  3  4 5
// 16 17 18 19 6
// 15 24 25 20 7
// 14 23 22 21 8
// 13 12 11 10 9

void problema1A() {
	int m = 5, n = 5;
	int x[100][100];
	atribuirePb1AFisa(x, m, n);
	afisareMatrice(x, m, n);
}

// b)
//  1  2  3  4  5
// 10  9  8  7  6
// 11 12 13 14 15
// 20 19 18 17 16
// 21 22 23 24 25

void problema1B() {
	int m = 5, n = 5;
	int x[100][100];
	atribuirePb1BFisa(x, m, n);
	afisareMatrice(x, m, n);
}

// c)