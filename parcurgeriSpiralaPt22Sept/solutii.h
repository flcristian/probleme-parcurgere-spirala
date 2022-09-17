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
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb1AFisa(x, n);
	afisareMatrice(x, n, n);
}

// b)
//  1  2  3  4  5
// 10  9  8  7  6
// 11 12 13 14 15
// 20 19 18 17 16
// 21 22 23 24 25

void problema1B() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb1BFisa(x, n);
	afisareMatrice(x, n, n);
}

// c)
// 1 2 2 2 1
// 3 1 1 1 4
// 3 1 1 1 4
// 3 1 1 1 4
// 1 5 5 5 1

void problema1C() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb1CFisa(x, n);
	afisareMatrice(x, n, n);
}

// d)
// 1 1 1 1 1
// 1 2 2 2 2
// 1 2 3 3 3
// 1 2 3 4 4
// 1 2 3 4 5

void problema1D() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb1DFisa(x, n);
	afisareMatrice(x, n, n);
}

// e)
// 1 2 3 4 5
// 6 7 8 9 6
// 5 4 5 0 7
// 4 3 2 1 8
// 3 2 1 0 9

void problema1E() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb1EFisa(x, n);
	afisareMatrice(x, n, n);
}

// f)
// 70 35 15 5 1
// 35 20 10 4 1
// 15 10  6 3 1
//  5  4  3 2 1
//  1  1  1 1 1

void problema1F() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb1FFisa(x, n);
	afisareMatrice(x, n, n);
}

// Problema 2
// Scrieti un program C/C++ care citeste de la
// tastatura un numar natural n (2 < n < 16),
// construieste in memorie si afiseaza pe ecran
// o matrice cu n linii si n coloane in care
// elementele de pe cele doua diagonale sunt
// egale cu 0, elementele care se afla deasupra
// egale cu 2, iar rstul elementelor egale cu 3.
// 
// Elementele matricei vor fi asezate pe ecran,
// cate o linie a matricei pe cate o linie a
// ecranului cu spatii intre elementele fiecarei linii.
// 
// Exemplu pentru n = 5 :
// 
//		0 1 1 1 0
//		3 0 1 0 3
//		3 3 0 3 3
//		3 0 2 0 3
//		0 2 2 2 0

void problema2() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb2Fisa(x, n);
	afisareMatrice(x, n, n);
}

// Problema 3
// Scrieti un program C/C++ care citeste de la
// tastatura un numar natural n (2 < n < 20),
// care construieste in memorie si afiseaza pe
// ecran o matrice cu n linii si n coloane, in
// care fiecare element de pe diagonala secundara
// are valoarea n, fiecare element aflat deasupra
// lui si fiecare aflat sub diagonala secundara este
// mai mare cu o unitate decat vecinul de pe aceasi
// linie in stanga lui.
// 
// Elementele matricei vor fi afisate pe ecran, cate
// o linie a matricei pe cate o linie a ecranului cu
// spatii intre elementele fiecarei linii.
// 
// Exemplu pentru n = 5 :
// 
//		1 2 3 4 5
//		2 3 4 5 6
//		3 4 5 6 7
//		4 5 6 7 8
//		5 6 7 8 9

void problema3() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb3Fisa(x, n);
	afisareMatrice(x, n, n);
}

// Problema 4
// Scrieti un program C/C++ care citeste de la
// tastatura un numar natural n (2 < n < 20),
// construieste in memorie si afiseaza pe ecran
// o matrice cu n linii si n coloane, numerotate
// de la 1 la n. 
// 
// Fiecare element din matrice aflat pe o linie 
// impara va fi egal cu numarul liniei pe care se
// afla si fiecare element pe o linie para va fi
// egal cu numarul coloanei pe care se afla.
// 
// Exemplu pentru n = 5 :
// 
//		1 1 1 1 1
//		1 2 3 4 5
//		3 3 3 3 3
//		1 2 3 4 5
//		5 5 5 5 5

void problema4() {
	int n;
	cout << "Introduceti n : ";
	cin >> n;
	int x[100][100];
	atribuirePb4Fisa(x, n);
	afisareMatrice(x, n, n);
}