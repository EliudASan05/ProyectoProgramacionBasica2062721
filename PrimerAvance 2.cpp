

#include <iostream>

int main()
{
    using namespace std;

    int opc1, opc;
    char art[100], desc[300], clas[10], gen[20], consola[40];
    float pu, pt{};

    cout << "MENU DE OPCIONES" << endl;
    cout << "1.- Alta de Producto" << endl;
    cout << "2.- Modificacion de Producto" << endl;
    cout << "3.- Baja de Producto" << endl;
    cout << "4.- Lista" << endl;
    cout << "5.- Limpiar Pantalla" << endl;
    cout << "6.- Salir" << endl;
    cin >> opc1;

    switch (opc1)
    { 
    case 1:   //Alta de producto
        system("pause");
        cout << "Ingrese la informacion segun lo que le pidan:" << endl;   
        
        cout << "Nombre del videojuego" << endl;
        cin.ignore();
        cin.getline (art,50);
        cout << "Descripcion" << endl;
        cin.ignore();
        cin.getline(desc, 300);
  
        cout << "Clasificacion de edad" << endl;
        cin >> clas;
        
        cout << "Genero" << endl;
        cin >> gen;
        
        cout << "Consola" << endl;
        cin.ignore();
        cin.getline(consola, 40);
       
        cout << "Precio Unitario" << endl;
        cin >> pu;
        pt = pu * 1.16;
        system("pause");
        cout << "Estos son los datos ingresados:" << endl;
        cout << "Nombre:  " << art << endl;
        cout << "Descripcion:  " << desc << endl;
        cout << "Clasificacion:  " << clas << endl << "Genero: " << gen << endl;
        cout << "Consola:  " << consola << endl;
        cout << "Precio total: $" << pt << endl;
        system("pause");

        cout << "Regresar al menu?" << endl;
        cout << "1.- Si   2.- No" << endl;
        cin >> opc;
        system("pause");

        if (opc == 1)
        {
            return main();
        }
        break;

    case 2:       //Modificacion de producto
        break;

    case 3:      //Baja de producto
        break;

    case 4:      //Lista
        break;

    case 5:     //Limpiar pantalla
        system("cls");
        return main();
        break;

    case 6:     //Salir
        exit(1);
        break;
    }


}


