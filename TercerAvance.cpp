#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>

using namespace std;

void Alta();
void listas();
void archivos();
void eliminar();
void modificar();

int alta, * year, * precio, contador;
string* nombre, * status, * clasif, * caract, * desc, * gen, * consola;
int main()
{
	int opc{};
	printf(" %c Menu de opciones %c \n",245, 245);
	printf(" 1.- Alta de videojuego \n 2.- Lista de articulos \n 3.- Limpiar pantalla \n 4.- Modificar articulo \n 5.- Eliminar \n 6.- Salir \n");
	scanf_s("%d", &opc);

	switch (opc)
	{
	case 1:
		Alta();
		return main();
		break;

	case 2:
		listas();
		return main();
		break;

	case 3:
		system("cls"); 
		return main();
		break;

	case 4:
		modificar();
		return main();
		break;

	case 5:
		eliminar();
		return main();
		break;

	case 6:
		archivos();
		break;
	}
}

void Alta()
{
	printf("Digite el numero de registros que desea dar de alta \n");
	scanf_s("%d", &alta);
	year = new int[alta]; 
	precio = new int[alta];
	nombre = new string[alta];
	clasif = new string[alta];
	status = new string[alta];
	caract = new string[alta];
	desc = new string[alta];
	gen = new string[alta];
	consola = new string[alta];
	for (int i = 0; i < alta; i++)
	{
	
		while (getchar() != '\n');
		printf("Ingrese nombre del videojuego \n");
		getline(cin, nombre[i]);
		while (getchar() != '\n');
		printf("Ingrese la consola \n");
		getline(cin, consola[i]);
		printf("Ingrese a%co de lanzamiento \n", 164);
		scanf_s("%d", &year[i]);
		while (getchar() != '\n');
		printf("Ingrese clasificacion de edad \n");
		getline(cin, clasif[i]);
		while (getchar() != '\n');
		printf("Ingrese las caracteristicas \n");
		getline(cin, caract[i]);
		while (getchar() != '\n');
		printf("Ingrese su descripcion \n");
		getline(cin, desc[i]);
		while (getchar() != '\n');
		printf("Ingrese su genero \n");
		getline(cin, gen[i]);
		printf("Ingrese su precio \n");
		scanf_s("%d", &precio[i]);
		precio[i] = precio[i] * 1.16;
	

	}
}

void listas()
{
	for (int i = 0; i < alta; i++)
	{
		if (status[i] == "ELIMINADO")
		{
			printf("ARTICULO ELIMINADO %d \n", i + 1);
		}
		else
		{
			printf("Registro %d \n", i + 1);
			printf("%s \n", nombre[i].c_str());
			printf("%s \n", consola[i].c_str());
			printf("%d \n", year[i]);
			printf("%s \n", clasif[i].c_str());
			printf("%s \n", caract[i].c_str());
			printf("%s \n", desc[i].c_str());
			printf("%s \n", gen[i].c_str());
			printf("%d \n", precio[i]);

		}
	}
}

void archivos()
{
	ofstream archivo; 
	string nombrearchivo;
	int texto;
	string texto2;

	nombrearchivo = "TodoVideojuegos.txt";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		printf("ERROR NO SE PUDO CREAR EL ARCHIVO");
		exit(1);
	}

	archivo << "NOMBRE" << "\t";
	archivo << "CONSOLA" << "\t";
	archivo << "FECHA DE SALIDA" << "\t";
	archivo << "CLASIFICACION" << "\t";
	archivo << "CARACTERISTICAS" << "\t";
	archivo << "DESCRIPCION" << "\t";
	archivo << "GENERO" << "\t";
	archivo << "PRECIO" << "\t";

	for (int i = 0; i < alta; i++)
	{
		if (status[i] == "ELIMINADO")
		{
			texto2 = "ARTICULO ELIMINADO ";
			texto = i;
			archivo << texto2 << texto << "\n";
		}
		else
		{
			texto2 = "ARTICULO";
			texto = i+1;
			archivo << texto2 << texto << "\n";
			texto2 = nombre[i];
			archivo << texto2 << "\t" << "\n";
			texto2 = consola[i];
			archivo << texto2 << "\t " << "\n";
			texto = year[i];
			archivo << texto << "\t " << "\n";
			texto2 = clasif[i];
			archivo << texto2 << "\t" << "\n";
			texto2 = caract[i];
			archivo << texto2 << "\t" << "\n";
			texto2 = desc[i];
			archivo << texto2 << "\t" << "\n";
			texto2 = gen[i];
			archivo << texto2 << "\t" << "\n";
			texto = precio[i];
			archivo << texto << "\t " << "\n";
		}
	}


	archivo.close();
}

void eliminar()
{
	int j;
	printf("Ingrese el articulo a eliminar \n");
	scanf_s("%d", &j);
	j = j - 1;
	for (int i = j; i == j; i++)
	{
		printf("Eliminando articulo %d \n", j + 1);
		status[i] = "ELIMINADO";
		
	}
}

void modificar()
{
	int j, opcion, op2;
	do
	{
		printf("Ingrese el numero de articulo a modificar \n");
		scanf_s("%d", &j);
		j = j - 1; 

		for (int i = j; i == j; i++)
		{
			if ((status[i] == "ELIMINADO"))
			{
				printf("ARTICULO ELIMINADO %d \n", i + 1);
				printf("Ingrese un articulo valido \n");
				op2 = 1;
			}
			else
			{
				op2 = 2;
			}
		}
	} while (op2 == 1);
	printf("Ingrese que desea modificar \n 1.- Nombre \n 2.- Consola \n 3.- A%co \n 4.- Clasificacion \n 5.- Caracteristicas \n 6.- Descripcion \n 7.- Genero \n 8.- Precio \n", 164);
	scanf_s("%d", &opcion);

	switch (opcion)
	{
	case 1:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese nombre \n");
			getline(cin, nombre[i]);
		}
		break;
	case 2:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese consola \n");
			getline(cin, consola[i]);
		}
		break;

	case 3:
		for (int i = j; i == j; i++)
		{
			printf("Ingrese a%co \n", 164);
			scanf_s("%d", &year[i]);
		}
		break;
	case 4:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese nueva clasificacion \n");
			getline(cin, clasif[i]);
		}
		break;
	case 5:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese nuevas caracteristicas \n");
			getline(cin, caract[i]);
		}
		break;
	case 6:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese nueva descripcion \n");
			getline(cin, desc[i]);
		}
		break;
	case 7:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			printf("Ingrese nuevo genero \n");
			getline(cin, gen[i]);
		}
		break;
	case 8:
		for (int i = j; i == j; i++)
		{
			printf("Ingrese nuevo precio \n");
			scanf_s("%d", &precio[i]);
			precio[i] = precio[i] * 1.16;
		}
		break;
	}


}

