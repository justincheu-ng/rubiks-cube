#include "functions.h"

int main(void) {
  Cube cube;
  initCube(&cube);
  char history = '0';
  
  do {
    clearScreen();
    printCube(cube);
    printHistory(history);
  } while (promptInput(&cube, &history));
}
