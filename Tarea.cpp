#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int CantidadPiezas; // Cantidad de piezas en el Tablero

struct Pieza {
    char simbolo; // Define qué tipo de pieza es y su caracter
    int x, y; // Su posición dentro del tablero [0, 7] x [0, 7]
};

struct Tablero {
    Pieza* piezas_tablero; // Lista de piezas que tiene el tablero
};

struct PosMov {
    int MovX, MovY; // Posibles movimientos para la piezas
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
Pieza* AbrirArchivo(string Archivo) {
    ifstream fp;
    char caracter;
    int PosX, PosY = -1, i = 0;

    fp.open(Archivo);

    if (!fp.is_open()) {
        cout << "No se pudo abrir el archivo." << endl;
		  return NULL;
    }

    fp >> CantidadPiezas;
    Pieza* Piezas = new Pieza[CantidadPiezas - 1];

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

PosMov* ReyT(int PosX, int PosY) {
    PosMov* Movimientos = new PosMov[7];

    //Ataque Izquierda Arriba
    Movimientos[0].MovX = PosX - 1;
    Movimientos[0].MovY = PosY - 1;
    //Ataque Arriba
    Movimientos[1].MovX = PosX;
    Movimientos[1].MovY = PosY - 1;
    //Ataque Derecha Arriba
    Movimientos[2].MovX = PosX + 1;
    Movimientos[2].MovY = PosY - 1;
    //Ataque Izquierda
    Movimientos[3].MovX = PosX - 1;
    Movimientos[3].MovY = PosY;
    //Ataque Derecha
    Movimientos[4].MovX = PosX + 1;
    Movimientos[4].MovY = PosY;
    //Ataque Izquierda Abajo
    Movimientos[5].MovX = PosX - 1;
    Movimientos[5].MovY = PosY + 1;
    //Ataque Abajo
    Movimientos[6].MovX = PosX;
    Movimientos[6].MovY = PosY + 1;
    //Ataque Derecha Abajo
    Movimientos[7].MovX = PosX + 1;
    Movimientos[7].MovY = PosY + 1;

	 return Movimientos;

}

PosMov* ReyS(int PosX, int PosY) {
    PosMov* Movimientos = new PosMov[7];

    //Ataque Izquierda Arriba
    Movimientos[0].MovX = PosX - 1;
    Movimientos[0].MovY = PosY - 1;
    //Ataque Arriba
    Movimientos[1].MovX = PosX;
    Movimientos[1].MovY = PosY - 1;
    //Ataque Derecha Arriba
    Movimientos[2].MovX = PosX + 1;
    Movimientos[2].MovY = PosY - 1;
    //Ataque Izquierda
    Movimientos[3].MovX = PosX - 1;
    Movimientos[3].MovY = PosY;
    //Ataque Derecha
    Movimientos[4].MovX = PosX + 1;
    Movimientos[4].MovY = PosY;
    //Ataque Izquierda Abajo
    Movimientos[5].MovX = PosX - 1;
    Movimientos[5].MovY = PosY + 1;
    //Ataque Abajo
    Movimientos[6].MovX = PosX;
    Movimientos[6].MovY = PosY + 1;
    //Ataque Derecha Abajo
    Movimientos[7].MovX = PosX + 1;
    Movimientos[7].MovY = PosY + 1;

	 return Movimientos;

}

PosMov* Peon(int PosX, int PosY) {
    PosMov* Movimientos = new PosMov[1];
    
    //Ataque Izquierda
    Movimientos[0].MovX = PosX - 1;
    Movimientos[0].MovY = PosY - 1;
    //Ataque Derecha
    Movimientos[1].MovX = PosX + 1;
    Movimientos[1].MovY = PosY - 1;

	 return Movimientos;
}

PosMov* Alfil(int PosX, int PosY) {
    PosMov* Movimientos = new PosMov[1];

	 return Movimientos;
}

PosMov* Torre(int PosX, int PosY) {
    PosMov* Movimientos = new PosMov[1];

	 return Movimientos;
}

PosMov* Caballo(int PosX, int PosY) {
    PosMov* Movimientos = new PosMov[1];

	 return Movimientos;
}

PosMov* Reina(int PosX, int PosY) {
    PosMov* Movimientos = new PosMov[1];

	 return Movimientos;
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
    Pieza* Piezas;
    Piezas = AbrirArchivo(argv[2]);

	 cout << "La cantidad de piezas es: " << CantidadPiezas << endl;

    for (int i = 0; i < CantidadPiezas; i++) {
        cout << Piezas[i].simbolo << ": [";
        cout << Piezas[i].x << "," << Piezas[i].y << "]\n";
    }
}