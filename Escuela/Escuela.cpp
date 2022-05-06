#include <iostream>
#include <string>
#include"Estudinate.h"
using namespace std;

int main() {
	
    int selec = 0, bus = 0, id = 0, tel=0, gen=0;
    char op = 's';
    string car, nom, ap, dir, em, fec;

    do {
        system("cls");
        cout << "___________________________________________________________" << endl;
        cout << "       ********** MENU ESTUDIANTE *********" << endl;
        cout << "___________________________________________________________" << endl;
        cout << "     1. INGRESE NUEVO ESTUDIANTE" << endl;
        cout << "     2. VER BASE DE DATOS DEL ESTUDIANTE" << endl;
        cout << "     3. MODIFICAR DATOS DEL ESTUDIANTE" << endl;
        cout << "     4. ELIMINAR ESTUDIANTE" << endl;
        cout << "     0. SALIR" << endl;
        cin >> selec;
        cin.ignore();

        if (selec == 1) {
            char op = 's';
            system("cls");

            do {

                cout << "************* DATOS DEL ESTUDIANTE ***************" << endl;
                cout << " INGRESE CARNET:                ";
                getline(cin, car);
                cout << " INGRESE NOMBRES:               ";
                getline(cin, nom);
                cout << " INGRESE APELLIDOS:             ";
                getline(cin, ap);
                cout << " INGRESE DIRECCION:             ";
                getline(cin, dir);
                cout << " INGRESE NUMERO DE TELEFONO:    ";
                cin >> tel;
                cin.ignore();
                cout << " INGRESE GENERO( 0: Femenino / 1: Masculino):   ";
                cin>> gen;
                cin.ignore();
                cout << " INGRESE EMAIL:                 ";
                getline(cin, em);
                cout << " INGRESE FECHA DE NACIMIENTO (AAAA-MM-DD):   ";
                getline(cin, fec);

                Estudiante es = Estudiante(car, nom, ap, dir, tel, gen, em, fec, bus, id);
                es.crear();
                cout << endl << "DESEA INGRESAR OTRO PROVEEDOR (s/n):  ";
                cin >> op;
                cin.ignore();
            } while (op == 's' || op == 'S');
        }

        else if (selec == 2) {

            Estudiante es = Estudiante();
            es.leer();

            system("pause");
        }

        else if (selec == 3) {
            system("cls");
            char b = 's';
            

            do {
            cout << " INGRESE EL ID DEL ESTUDIANTE QUE DESEA MODIFICAR:   ";
            cin >> id;

            Estudiante es = Estudiante(car,nom,ap,dir,tel,gen,em,fec,bus,id);
            es.actualizar();

            system("cls");
            cout << "MODIFICAR OTRO ESTUDIANTE (s/n): ";
            cin >> b;
            cin.ignore();

            } while (b == 's' || b == 'S');

        }

        else if (selec == 4) {

            system("cls");
            cout << "INGRESE EL ID DEL ESTUDIANTE QUE DESEA ELIMINAR: ";
            cin >> id;
            cin.ignore();

            Estudiante es = Estudiante(car, nom, ap, dir, tel, gen, em, fec, bus, id);
            es.eliminar();
            system("pause");

        }


    } while (selec != 0);
	



	return 0;
}