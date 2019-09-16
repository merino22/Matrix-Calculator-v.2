
#include "Lista.h"
#include "Matriz.h"
#include<iostream>

using std::cout;

int main()
{
	
	string pathx = "C:\\Users\\lopez\\source\\repos\\Proyecto2\\Proyecto2\\Example.txt";
	string pathz = "";
	string pathy = "";
	Matriz A;
	Matriz B;
	Matriz C;

	int option = 0;
	while (option != 5)
	{
		cout << "\n================| MATRIX CALCULATOR |================";
		cout << "\n|		 1. Sumar Matrices		    |" <<
			"\n|		 2. Restar Matrices		    |" <<
			"\n|		 3. Multiplicar Matrices	    |" <<
			"\n|		 4. Determinante de Matriz	    |" <<
			"\n|		 5. Salir			    |" <<
			"\n=====================================================";
		cout << "\n\nIngrese opcion: ";
		cin >> option;

		if (option == 1)
		{
			cout << "\nIngrese path de Matriz A: ";
			cin >> pathy;
			cout << "Ingrese path de Matriz B: ";
			cin >> pathz;
			cout << '\n';
			Matriz A(pathy);
			Matriz B(pathz);
			C.sumar(A, B);
		}
		else if (option == 2)
		{
			cout << "\nIngrese path de Matriz A: ";
			cin >> pathy;
			cout << "Ingrese path de Matriz B: ";
			cin >> pathz;
			cout << '\n';
			Matriz A(pathy);
			Matriz B(pathz);
			C.restar(A, B);
		}
		else if (option == 3)
		{
			cout << "\nIngrese path de Matriz A: ";
			cin >> pathy;
			cout << "Ingrese path de Matriz B: ";
			cin >> pathz;
			cout << '\n';
			Matriz A(pathy);
			Matriz B(pathz);
			C.multiplicar(A, B);
		}
		else if (option == 4)
		{
			cout << "\nIngrese path de la Matriz: ";
			cin >> pathy;
			cout << '\n';
			Matriz A(pathy);
			cout << A.determinante(A, A.getFilas(), A.getColumnas());
			cout << '\n';
		}
		else
		{
			cout << "\n\nSaliendo del Programa...";
		}
	}


	
	
}