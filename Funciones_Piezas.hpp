struct PosMov {
    int MovX, MovY; // Posibles movimientos para la piezas
};

PosMov *ReyT(int PosX, int PosY) {
    PosMov *MovimientosT = new PosMov[8];

    // Ataque Izquierda Arriba
    MovimientosT[0].MovX = PosX - 1;
    MovimientosT[0].MovY = PosY - 1;
    // Ataque Arriba
    MovimientosT[1].MovX = PosX;
    MovimientosT[1].MovY = PosY - 1;
    // Ataque Derecha Arriba
    MovimientosT[2].MovX = PosX + 1;
    MovimientosT[2].MovY = PosY - 1;
    // Ataque Izquierda
    MovimientosT[3].MovX = PosX - 1;
    MovimientosT[3].MovY = PosY;
    // Ataque Derecha
    MovimientosT[4].MovX = PosX + 1;
    MovimientosT[4].MovY = PosY;
    // Ataque Izquierda Abajo
    MovimientosT[5].MovX = PosX - 1;
    MovimientosT[5].MovY = PosY + 1;
    // Ataque Abajo
    MovimientosT[6].MovX = PosX;
    MovimientosT[6].MovY = PosY + 1;
    // Ataque Derecha Abajo
    MovimientosT[7].MovX = PosX + 1;
    MovimientosT[7].MovY = PosY + 1;

    return MovimientosT;
}

PosMov *ReyS(int PosX, int PosY) {
    PosMov *MovimientosS = new PosMov[8];

    // Ataque Izquierda Arriba
    MovimientosS[0].MovX = PosX - 1;
    MovimientosS[0].MovY = PosY - 1;
    // Ataque Arriba
    MovimientosS[1].MovX = PosX;
    MovimientosS[1].MovY = PosY - 1;
    // Ataque Derecha Arriba
    MovimientosS[2].MovX = PosX + 1;
    MovimientosS[2].MovY = PosY - 1;
    // Ataque Izquierda
    MovimientosS[3].MovX = PosX - 1;
    MovimientosS[3].MovY = PosY;
    // Ataque Derecha
    MovimientosS[4].MovX = PosX + 1;
    MovimientosS[4].MovY = PosY;
    // Ataque Izquierda Abajo
    MovimientosS[5].MovX = PosX - 1;
    MovimientosS[5].MovY = PosY + 1;
    // Ataque Abajo
    MovimientosS[6].MovX = PosX;
    MovimientosS[6].MovY = PosY + 1;
    // Ataque Derecha Abajo
    MovimientosS[7].MovX = PosX + 1;
    MovimientosS[7].MovY = PosY + 1;

    return MovimientosS;
}

PosMov *Peon(int PosX, int PosY) {
    PosMov *MovimientosP = new PosMov[2];

    // Ataque Izquierda
    MovimientosP[0].MovX = PosX - 1;
    MovimientosP[0].MovY = PosY - 1;
    // Ataque Derecha
    MovimientosP[1].MovX = PosX + 1;
    MovimientosP[1].MovY = PosY - 1;

    return MovimientosP;
}

PosMov *Alfil(int PosX, int PosY) {
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

    return MovimientosA;
}

PosMov *Torre(int PosX, int PosY) {
    PosMov *MovimientosT = new PosMov[14];
    int X = PosX, Y = PosY, i = 0;

    //Ataque Superior
    while (Y > 0) {
        MovimientosT[i].MovX = X;
        MovimientosT[i].MovY = --Y;
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

    return MovimientosT;
}

PosMov *Caballo(int PosX, int PosY) {
    PosMov *MovimientosC = new PosMov[8];

    // Ataque Arriba Izquierda
    MovimientosC[0].MovX = PosX - 1;
    MovimientosC[0].MovY = PosY - 2;
    // Ataque Izquierda Arriba
    MovimientosC[1].MovX = PosX - 2;
    MovimientosC[1].MovY = PosY - 1;
    // Ataque Arriba Derecha
    MovimientosC[2].MovX = PosX + 1;
    MovimientosC[2].MovY = PosY - 2;
    // Ataque Derecha Arriba
    MovimientosC[3].MovX = PosX + 2;
    MovimientosC[3].MovY = PosY - 1;
    // Ataque Izquierda Abajo
    MovimientosC[4].MovX = PosX - 2;
    MovimientosC[4].MovY = PosY + 1;
    // Ataque Abajo Izquierda
    MovimientosC[5].MovX = PosX - 1;
    MovimientosC[5].MovY = PosY + 2;
    // Ataque Derecha Abajo
    MovimientosC[6].MovX = PosX + 2;
    MovimientosC[6].MovY = PosY + 1;
    // Ataque Abajo Derecha
    MovimientosC[7].MovX = PosX + 1;
    MovimientosC[7].MovY = PosY + 2;

    return MovimientosC;
}

PosMov *Reina(int PosX, int PosY) {
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

    return MovimientosR;
}