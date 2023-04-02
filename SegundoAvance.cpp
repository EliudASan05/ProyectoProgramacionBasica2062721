#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <wchar.h>


using namespace std;

struct datos
{
    char nombre[40], clas[30], gen[40], consola[40], desc[500];
    float pu, total;
};

int main()
{
    datos videojuegos[3];
    int opcion;
    do
    {
        printf("***MENU DE OPCIONES*** \n");
        printf("1.-Alta de producto \n");
        printf("2.-Modificacion de producto \n");
        printf("3.-Baja de producto \n");
        printf("4.-Lista \n");
        printf("5.-Limpiar Pantalla \n");
        printf("6.-Salir\n");
        scanf_s("%d", &opcion);

        switch (opcion)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                printf("Ingrese lo que se le pida \n");

                printf("Ingrese el nombre del producto \n");
                cin.ignore();
                gets_s(videojuegos[i].nombre);
                printf("Ingrese la descripcion del videojuego \n");
                cin.ignore();
                gets_s(videojuegos[i].desc);
                printf("Clasificacion de edad \n");
                gets_s(videojuegos[i].clas);
                printf("Genero \n");
                cin.ignore();
                gets_s(videojuegos[i].gen);
                printf("Consola \n");
                cin.ignore();
                gets_s(videojuegos[i].consola);

                printf("Precio Unitario del videojuego \n");
                scanf_s("%f", &videojuegos[i].pu);
                videojuegos[i].total = videojuegos[i].pu * 1.16;
            }

            break;
        case 2:
            break;

        case 3:
            break;

        case 4:
           
            for (int i = 0; i < 3; i++)
            {
                printf("Nombre del videojuego: %s\n", videojuegos[i].nombre);
                printf("Descripcion del videojuego: %s\n", videojuegos[i].desc);
                printf("Clasificacion de edad: %s\n", videojuegos[i].clas);
                printf("Genero: %s\n", videojuegos[i].gen);
                printf("Consola: %s\n", videojuegos[i].consola);
                printf("El costo total es: $%f \n", videojuegos[i].total);
            }

            break;
        case 5:
            system("cls"); // limpiar pantalla
            break;
        case 6:
            exit(1); // cierra la pantalla
            break;
        default:
            break;
        }
    } while (opcion != 6);


}
