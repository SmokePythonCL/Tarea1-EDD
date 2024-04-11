struct PosMov {
    int CantidadMov, MovX, MovY; // Posibles movimientos para la piezas
};

struct Tablero {
  int cantidad_piezas; //
  Pieza *piezas_tablero; //
};

/*****
* PosMov ReyT
******
* Resumen Función
******
* Input:
* int PosX: Descripción Parámetro
* int PosY: Descripción Parámetro
******
* Returns:
* PosMov, Descripción retorno
*****/
PosMov *ReyT(int PosX, int PosY) {
    PosMov *MovimientosRT = new PosMov[9];
    int X = PosX, Y = PosY, i = 0;

    // Ataque Izquierda Arriba
    X = PosX - 1, Y = PosY - 1;

    if (X >= 0 and Y >= 0) {
        MovimientosRT[i].MovX = X;
        MovimientosRT[i].MovY = Y;
        i++;
    }

    // Ataque Arriba
    X = PosX, Y = PosY - 1;

    if (Y >= 0) {
        MovimientosRT[i].MovX = X;
        MovimientosRT[i].MovY = Y;
        i++;
    }

    // Ataque Derecha Arriba
    X = PosX + 1, Y = PosY - 1;

    if (X <= 7 and Y >= 0) {
        MovimientosRT[i].MovX = X;
        MovimientosRT[i].MovY = Y;
        i++;
    }

    // Ataque Izquierda
    X = PosX - 1, Y = PosY;

    if (X >= 0) {
        MovimientosRT[i].MovX = X;
        MovimientosRT[i].MovY = Y;
        i++;
    }

    // Ataque Derecha
    X = PosX + 1, Y = PosY;

    if (X <= 7) {
        MovimientosRT[i].MovX = X;
        MovimientosRT[i].MovY = Y;
        i++;
    }

    // Ataque Izquierda Abajo
    X = PosX - 1, Y = PosY + 1;

    if (X >= 0 and Y <= 7) {
        MovimientosRT[i].MovX = X;
        MovimientosRT[i].MovY = Y;
        i++;
    }

    // Ataque Abajo
    X = PosX, Y = PosY + 1;

    if (Y <= 7) {
        MovimientosRT[i].MovX = X;
        MovimientosRT[i].MovY = Y;
        i++;
    }

    // Ataque Derecha Abajo
    X = PosX + 1, Y = PosY + 1;

    if (X <= 7 and Y <= 7) {
        MovimientosRT[i].MovX = X;
        MovimientosRT[i].MovY = Y;
        i++;
    }

    MovimientosRT[i].MovX = PosX;
    MovimientosRT[i].MovY = PosY;
    i++;

    MovimientosRT[0].CantidadMov = i;

    return MovimientosRT;
}

/*****
* PosMov ReyS
******
* Resumen Función
******
* Input:
* int PosX: Descripción Parámetro
* int PosY: Descripción Parámetro
******
* Returns:
* PosMov, Descripción retorno
*****/
PosMov *ReyS(int PosX, int PosY, Tablero &tablero) {
    PosMov *MovimientosS = new PosMov[8];
    int X = PosX, Y = PosY, i = 0;

    // Ataque Izquierda Arriba
    X = PosX - 1, Y = PosY - 1;

    if (X >= 0 and Y >= 0) {
        MovimientosS[i].MovX = X;
        MovimientosS[i].MovY = Y;
        i++;
    }

    // Ataque Arriba
    X = PosX, Y = PosY - 1;

    if (Y >= 0) {
        MovimientosS[i].MovX = X;
        MovimientosS[i].MovY = Y;
        i++;
    }

    // Ataque Derecha Arriba
    X = PosX + 1, Y = PosY - 1;

    if (X <= 7 and Y >= 0) {
        MovimientosS[i].MovX = X;
        MovimientosS[i].MovY = Y;
        i++;
    }

    // Ataque Izquierda
    X = PosX - 1, Y = PosY;

    if (X >= 0) {
        MovimientosS[i].MovX = X;
        MovimientosS[i].MovY = Y;
        i++;
    }


    // Ataque Derecha
    X = PosX + 1, Y = PosY;

    if (X <= 7) {
        MovimientosS[i].MovX = X;
        MovimientosS[i].MovY = Y;
        i++;
    }

    // Ataque Izquierda Abajo
    X = PosX - 1, Y = PosY + 1;

    if (X >= 0 and Y <= 7) {
        MovimientosS[i].MovX = X;
        MovimientosS[i].MovY = Y;
        i++;
    }

    // Ataque Abajo
    X = PosX, Y = PosY + 1;

    if (Y <= 7) {
        MovimientosS[i].MovX = X;
        MovimientosS[i].MovY = Y;
        i++;
    }

    // Ataque Derecha Abajo
    X = PosX + 1, Y = PosY + 1;

    if (X <= 7 and Y <= 7) {
        MovimientosS[i].MovX = X;
        MovimientosS[i].MovY = Y;
        i++;
    }

    MovimientosS[0].CantidadMov = i;

    return MovimientosS;
}

/*****
* PosMov Peon
******
* Resumen Función
******
* Input:
* int PosX: Descripción Parámetro
* int PosY: Descripción Parámetro
******
* Returns:
* PosMov, Descripción retorno
*****/
PosMov *Peon(int PosX, int PosY, Tablero &tablero) {
    PosMov *MovimientosP = new PosMov[2];
    int X = PosX, Y = PosY, i = 0;
    
    X = PosX - 1, Y = PosY - 1;

    // Ataque Izquierda
    if (X >= 0 and Y >= 0) {
        MovimientosP[i].MovX = X;
        MovimientosP[i].MovY = Y;
        i++;
    }

    X = PosX + 1, Y = PosY - 1;

    // Ataque Derecha
    if (X <= 7 and Y >= 0) {
        MovimientosP[i].MovX = X;
        MovimientosP[i].MovY = Y;
        i++;
    }

    MovimientosP[0].CantidadMov = i;

    return MovimientosP;
}

/*****
* PosMov Alfil
******
* Resumen Función
******
* Input:
* int PosX: Descripción Parámetro
* int PosY: Descripción Parámetro
******
* Returns:
* PosMov, Descripción retorno
*****/
PosMov *Alfil(int PosX, int PosY, Tablero &tablero) {
    PosMov *MovimientosA = new PosMov[13];
    int X = PosX, Y = PosY, i = 0;

    //Ataque Diagonal Izquierda Superior
    while (X > 0 and Y > 0) {
        MovimientosA[i].MovX = --X;
        MovimientosA[i].MovY = --Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Diagonal Derecha Superior
    while (X < 7 and Y > 0) {
        MovimientosA[i].MovX = ++X;
        MovimientosA[i].MovY = --Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Diagonal Izquierda Inferior
    while (X > 0 and Y < 7) {
        MovimientosA[i].MovX = --X;
        MovimientosA[i].MovY = ++Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Diagonal Derecha Inferior
    while (X < 7 and Y < 7) {
        MovimientosA[i].MovX = ++X;
        MovimientosA[i].MovY = ++Y;
        i++;
    };

    MovimientosA[0].CantidadMov = i;

    return MovimientosA;
}

/*****
* PosMov Torre
******
* Resumen Función
******
* Input:
* int PosX: Descripción Parámetro
* int PosY: Descripción Parámetro
******
* Returns:
* PosMov, Descripción retorno
*****/
PosMov *Torre(int PosX, int PosY, Tablero &tablero) {
    PosMov *MovimientosT = new PosMov[14];
    int X = PosX, Y = PosY, i = 0;

    //Ataque Superior
    while (Y > 0) {

        X = PosX, Y = PosY;

        for (int e = 0; e < tablero.cantidad_piezas; e++){
            
            if (tablero.piezas_tablero[e].x != X and tablero.piezas_tablero[e].y != Y){
                MovimientosT[i].MovX = X;
                MovimientosT[i].MovY = --Y;
                break;
            }
        }

        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Inferior
    while (Y < 7) {
        MovimientosT[i].MovX = X;
        MovimientosT[i].MovY = ++Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Izquierdo
    while (X > 0) {
        MovimientosT[i].MovX = --X;
        MovimientosT[i].MovY = Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Derecho
    while (X < 7) {
        MovimientosT[i].MovX = ++X;
        MovimientosT[i].MovY = Y;
        i++;
    };

    MovimientosT[0].CantidadMov = i;

    return MovimientosT;
}

/*****
* PosMov Caballo
******
* Resumen Función
******
* Input:
* int PosX: Descripción Parámetro
* int PosY: Descripción Parámetro
******
* Returns:
* PosMov, Descripción retorno
*****/
PosMov *Caballo(int PosX, int PosY, Tablero &tablero) {
    PosMov *MovimientosC = new PosMov[8];
    int X = PosX, Y = PosY, i = 0;

    // Ataque 1 Izquierda 2 Arriba
    X = PosX - 1, Y = PosY - 2;

    if (X >= 0 and Y >= 0) {
        MovimientosC[i].MovX = X;
        MovimientosC[i].MovY = Y;
        i++;
    }

    // Ataque 2 Izquierda 1 Arriba
    X = PosX - 2, Y = PosY - 1;

    if (X >= 0 and Y >= 0) {
        MovimientosC[i].MovX = X;
        MovimientosC[i].MovY = Y;
        i++;
    }

    // Ataque 2 Arriba 1 Derecha
    X = PosX + 1, Y = PosY - 2;

    if (X <= 7 and Y >= 0) {
        MovimientosC[i].MovX = X;
        MovimientosC[i].MovY = Y;
        i++;
    }

    // Ataque 1 Arriba 2 Derecha
    X = PosX + 2, Y = PosY - 1;

    if (X <= 7 and Y >= 0) {
        MovimientosC[i].MovX = X;
        MovimientosC[i].MovY = Y;
        i++;
    }

    // Ataque 1 Abajo 2 Izquierda
    X = PosX - 2, Y = PosY + 1;

    if (X >= 0 and Y <= 7) {
        MovimientosC[i].MovX = X;
        MovimientosC[i].MovY = Y;
        i++;
    }

    // Ataque 2 Abajo 1 Izquierda
    X = PosX - 1, Y = PosY + 2;

    if (X >= 0 and Y <= 7) {
        MovimientosC[i].MovX = X;
        MovimientosC[i].MovY = Y;
        i++;
    }

    // Ataque 1 Abajo 2 Derecha
    X = PosX + 2, Y = PosY + 1;

    if (X <= 7 and Y <= 7) {
        MovimientosC[i].MovX = X;
        MovimientosC[i].MovY = Y;
        i++;
    }

    // Ataque 2 Abajo 1 Derecha
    X = PosX + 1, Y = PosY + 2;

    if (X <= 7 and Y <= 7) {
        MovimientosC[i].MovX = X;
        MovimientosC[i].MovY = Y;
        i++;
    }

    MovimientosC[0].CantidadMov = i;    

    return MovimientosC;
}

/*****
* PosMov Reina
******
* Resumen Función
******
* Input:
* int PosX: Descripción Parámetro
* int PosY: Descripción Parámetro
******
* Returns:
* PosMov, Descripción retorno
*****/
PosMov *Reina(int PosX, int PosY, Tablero &tablero) {
    PosMov *MovimientosR = new PosMov[27];
    int X = PosX, Y = PosY, i = 0;

    //Ataque Superior
    while (Y > 0) {
        MovimientosR[i].MovX = X;
        MovimientosR[i].MovY = --Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Inferior
    while (Y < 7) {
        MovimientosR[i].MovX = X;
        MovimientosR[i].MovY = ++Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Izquierdo
    while (X > 0) {
        MovimientosR[i].MovX = --X;
        MovimientosR[i].MovY = Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Derecho
    while (X < 7) {
        MovimientosR[i].MovX = ++X;
        MovimientosR[i].MovY = Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Diagonal Izquierda Superior
    while (X > 0 and Y > 0) {
        MovimientosR[i].MovX = --X;
        MovimientosR[i].MovY = --Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Diagonal Derecha Superior
    while (X < 7 and Y > 0) {
        MovimientosR[i].MovX = ++X;
        MovimientosR[i].MovY = --Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Diagonal Izquierda Inferior
    while (X > 0 and Y < 7) {
        MovimientosR[i].MovX = --X;
        MovimientosR[i].MovY = ++Y;
        i++;
    };

    X = PosX, Y = PosY;

    //Ataque Diagonal Derecha Inferior
    while (X < 7 and Y < 7) {
        MovimientosR[i].MovX = ++X;
        MovimientosR[i].MovY = ++Y;
        i++;
    };

    MovimientosR[0].CantidadMov = i;

    return MovimientosR;
}