#include <iostream>
#include <string>
#include <fstream>
#include "Funciones_Piezas.hpp"
using namespace std;

int CantidadPiezas; // Cantidad de piezas en el Tablero

struct Pieza {
    char simbolo; // Define qué tipo de pieza es y su caracter
    int x, y;     // Su posición dentro del tablero [0, 7] x [0, 7]
};

struct Tablero {
    Pieza *piezas_tablero; // Lista de piezas que tiene el tablero
};

/*****
 * bool TableroEnJaqueMate
 ******
 * Resumen Función
 ******
 * Input:
 * Tablero &tablero
 ******
 * Returns:
 * bool
 *****/
bool TableroEnJaqueMate(Tablero &tablero) {
    return 0;
};

/*****
 * Pieza* AbrirArchivo
 ******
 * Resumen Función
 ******
 * Input:
 * string Archivo: Descripción Parámetro
 * char caracter:
 * int PosX:
 * int PosY:
 * int i:
 * int CantidadPiezas:
 ******
 * Returns:
 * Pieza*: Descripción retorno
 *****/
Pieza *AbrirArchivo(string Archivo) {
    ifstream fp;
    char caracter;
    int PosX, PosY = -1, i = 0;

    fp.open(Archivo);

    if (!fp.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
        return NULL;
    }

    fp >> CantidadPiezas;
    Pieza* Piezas = new Pieza[CantidadPiezas];

    while ((caracter = fp.get()) != EOF) {
        if (caracter == '\n') {
            PosX = 0;
            ++PosY;
        } else if (caracter == '.') {
            ++PosX;
        } else {
            Piezas[i].simbolo = caracter;
            Piezas[i].x = PosX;
            Piezas[i].y = PosY;

            ++PosX;
            ++i;
        }
    }
    fp.close();
    return Piezas;
}

/*****
 * int main
 ******
 * Resumen Función
 ******
 * Input:
 * tipoParámetro NombreParámetro : Descripción Parámetro
 * .......
 ******
 * Returns:
 * TipoRetorno, Descripción retorno
 *****/
int main(int argc, char **argv) {
    Pieza *Piezas;
    PosMov *MovimientosT, *MovimientosS, *MovimientosP, *MovimientosA, *MovimientosC, *MovimientosR;
    Piezas = AbrirArchivo(argv[2]);
    
    for (int i = 0; i < CantidadPiezas; i++) {

        if (Piezas[i].simbolo == 'R') {

            MovimientosR = Reina(Piezas[i].x, Piezas[i].y);
        }
    }

    for (int i = 0; i < CantidadPiezas; i++) {

        if (Piezas[i].simbolo == 'X') {

            MovimientosT = ReyT(Piezas[i].x, Piezas[i].y);
            for (int e = 0; e < 8; e++) {
                cout << "Mov posible: ";
                cout << "[" << MovimientosT[e].MovX << ",";
                cout << MovimientosT[e].MovY << "]\n";
                
            }
        } else if (Piezas[i].simbolo == 'K') {

            MovimientosS = ReyS(Piezas[i].x, Piezas[i].y);
            for (int e = 0; e < 8; e++) {
                cout << "Mov posible: ";
                cout << "[" << MovimientosS[e].MovX << ",";
                cout << MovimientosS[e].MovY << "]\n";
                
            }
        } else if (Piezas[i].simbolo == 'P') {

            MovimientosP = Peon(Piezas[i].x, Piezas[i].y);
            for (int e = 0; e < 2; e++) {
                cout << "Mov posible: ";
                cout << "[" << MovimientosP[e].MovX << ",";
                cout << MovimientosP[e].MovY << "]\n";
                
            }
        } else if (Piezas[i].simbolo == 'A') {
            MovimientosA = Alfil(Piezas[i].x, Piezas[i].y);
            for (int e = 0; e < 13; e++) {
                cout << "Mov posible: ";
                cout << "[" << MovimientosA[e].MovX << ",";
                cout << MovimientosA[e].MovY << "]\n";
                
            }
        } else if (Piezas[i].simbolo == 'T') {
            MovimientosT = Torre(Piezas[i].x, Piezas[i].y);
            for (int e = 0; e < 14; e++) {
                cout << "Mov posible: ";
                cout << "[" << MovimientosT[e].MovX << ",";
                cout << MovimientosT[e].MovY << "]\n";
                
            }
        } else if (Piezas[i].simbolo == 'C') {
            MovimientosC = Caballo(Piezas[i].x, Piezas[i].y);
            for (int e = 0; e < 8; e++) {
                cout << "Mov posible: ";
                cout << "[" << MovimientosC[e].MovX << ",";
                cout << MovimientosC[e].MovY << "]\n";
                
            }
        } else if (Piezas[i].simbolo == 'R') {
            MovimientosR = Reina(Piezas[i].x, Piezas[i].y);
            for (int e = 0; e < 27; e++) {
                cout << "Mov posible: ";
                cout << "[" << MovimientosR[e].MovX << ",";
                cout << MovimientosR[e].MovY << "]\n";
                
            }
        }


        cout << Piezas[i].simbolo << ": [";
        cout << Piezas[i].x << "," << Piezas[i].y << "]\n";
    }
}