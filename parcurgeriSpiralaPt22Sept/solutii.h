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

// Problema 6
// Se citeste un numar k.
// Realizati o noua matrice ce are pe
// linii cifrele lui k.
//
// Exemplu pentru k = 1274 :
//
//		1 1 1 1
//		2 2 2 2
//		7 7 7 7
//		4 4 4 4

void problema6() {
	int k;
	cout << "Introduceti un numar : ";
	cin >> k;
	int cifre = countCifre(k);
	int x[100][100];
	atribuirePb6Fisa(x, k, cifre);
	afisareMatrice(x, cifre, cifre);
}

// Problema 7
// Se considera tabloul bidimensional cu m
// linii si n coloane ale carui elemente
// sunt cifre 0 si 1 (matrice binara). Scrieti
// programul C++ care citeste din fisierul
// MATRICE1.IN de pe prima linie numerele
// naturale m si n, iar de pe celelalte m linii
// cate n elemente ale tabloului bidimensional.
// 
// Programul determina indicii linilor pe care
// se afla cele mai multe valori de 1 si ii
// afiseaza cate unul pe un singur rand.
//
// Exemplu pentru m = 4, n = 5 si matricea :
// 
//  4 5
//	1 0 1 0 1
//	1 0 1 1 1
//	0 1 1 1 1
//	0 1 0 0 0
//
// Se afiseaza : 
// 2 3

void problema7() {
	int m, n;
	int x[100][100];
	citireFisierPb7(x, m, n);
	afisareMatrice(x, m, n);
	cout << endl;
	rezolvarePb7(x, m, n);
}

// Problema 8
// Se considera un tablou bidimensional cu
// m linii si n coloane, ale carui elemente apartin
// multimii {0, 1, 2}. Scrieti un program C/C++
// care citeste din fisier valorile m, n si elementele
// tabloului si care afiseaza pe ecran numerele de
// ordine ale coloanelor pentru care produsul
// elementelor situate pe ele, este maxim. Liniile si
// coloanele tabloului se numeroteaza de la 1 la m
// respectiv de la 1 la n. Numerele se vor afisa
// separate prin cate un spatiu.
// 
// Exemplu pentru m = 4 si n = 5, iar tabloul este : 
// 
//  2 1 1 0 2
//  1 1 1 1 0
//  2 2 2 1 1
//  1 2 1 1 2 
//
// Se va afisa :
// 1 2

void problema8() {
	int m, n;
	int x[100][100];
	citireMatriceFisier(x, m, n);
	afisareMatrice(x, m, n);
	cout << endl;
	rezolvarePb8(x, m, n);
}

// Problema 9
// Scrieti un program C/C++ care citeste de la tastatura
// un numar natural n (1 <= n <= 6) si elementele unui
// tablou bidimensional A cu n linii si n coloane,
// care memoreaza numere naturale mai mici decat 100,
// si afiseaza pe ecran (daca exista), sperate prin
// cate un spatiu, elementele din matrice care au
// proprietatea ca sunt egale cu produsul celorlalte
// elemente aflate pe aceeasi coloana.
//
// Exemplu pentru matricea :
//	1  1  5  10 2
//	6  11 1  1  4
//	6  2  5  5  3
//	1  22 12 2 10
//	16 1  7  1  8
//
// Se va afisa :
// 10 22

void problema9() {
	int n;
	int x[100][100];
	citireTastaturaPb9(x, n);
	cout << "Avem :" << endl;
	afisareMatrice(x, n, n);
	cout << endl;
	rezolvarePb9(x, n);
}

// Problema 10
// Sa se afiseze indicii coloanelor care au toate
// elementele pe coloana in ordine strict
// crescatoare. 
// 
// In care ca nici o coloana nu are toate
// elementele in ordine strict crescatoate se va
// afisa mesajul NU.

void problema10() {
	int m, n;
	int x[100][100];
	citireMatriceFisier(x, m, n);
	cout << "Avem :" << endl;
	afisareMatrice(x, m, n);
	cout << endl;
	rezolvarePb10(x, m, n);
}

// Problema 11
// O matrice patratica cu n linii si n coloane se numeste
// triunghiulara superior daca toate lementele aflate
// sub diagonala principala sunt nule.
// 
// Se citeste de la tastatura (sau din fisier) o matrice
// patratica cu n linii si n coloane.
// 
// Realizati un program care verifica daca matricea este
// sau nu triunghiulara superior, tiparind un mesaj
// corespunzator.

void problema11() {
	int n;
	int x[100][100];
	citireMatriceFisier(x, n, n);
	cout << "Avem :" << endl;
	afisareMatrice(x, n, n);
	cout << endl << "Matricea";
	if (esteTriunghiularaSuperior(x, n)) {
		cout << " este ";
	}
	else {
		cout << " nu este ";
	}
	cout << "triunghiulara superior.";
}