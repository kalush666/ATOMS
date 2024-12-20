
#ifndef MODEL_H
#define MODEL_H

typedef enum {
    ATOM,NEUTRON
}Type;

typedef struct Coordinates {
    int x;
    int y;
} Coordinates, *pCoordinates;

typedef struct ATOM {
    Type particleType;
    int n;
    Coordinates cords;
} Atom, *pAtom;

void collision(pAtom atom1,pAtom atom2);
#endif
