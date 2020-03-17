#ifndef CUBE
#define CUBE

typedef struct {
  int sticker[6][9];
} Cube;

void initCube(Cube* cube);
void printCube(Cube cube);
void rotateFace(Cube* cube, int face, char direction);
void turnCube(Cube* cube, char notation);

#endif