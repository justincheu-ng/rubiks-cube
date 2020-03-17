#include "functions.h"

void initCube(Cube* cube) {
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 9; j++) {
      cube->sticker[i][j] = i;
    }
  }
}

void printCube(Cube cube) {
  // 1st line
  printSticker(20, cube.sticker[0][0], 4);
  printSticker(44, cube.sticker[5][6], 4);
  printf("\n");
  // 2nd line
  printSticker(16, cube.sticker[0][0], 12);
  printSticker(36, cube.sticker[5][6], 12);
  printf("\n");
  //3rd line
  printSticker(12, cube.sticker[0][3], 4);
  printSticker(4, cube.sticker[0][0], 4);
  printSticker(4, cube.sticker[0][1], 4);
  printSticker(28, cube.sticker[5][7], 4);
  printSticker(4, cube.sticker[5][6], 4);
  printSticker(4, cube.sticker[5][3], 4);
  printf("\n");
  // 4th line
  printSticker(8, cube.sticker[0][3], 12);
  printSticker(4, cube.sticker[0][1], 12);
  printSticker(20, cube.sticker[5][7], 12);
  printSticker(4, cube.sticker[5][3], 12);
  printf("\n");
  // 5th line
  printSticker(4, cube.sticker[0][6], 4);
  printSticker(4, cube.sticker[0][3], 4);
  printSticker(4, cube.sticker[0][4], 4);
  printSticker(4, cube.sticker[0][1], 4);
  printSticker(4, cube.sticker[0][2], 4);
  printSticker(12, cube.sticker[5][8], 4);
  printSticker(4, cube.sticker[5][7], 4);
  printSticker(4, cube.sticker[5][4], 4);
  printSticker(4, cube.sticker[5][3], 4);
  printSticker(4, cube.sticker[5][0], 4);
  printf("\n");
  // 6th line
  printSticker(0, cube.sticker[0][6], 12);
  printSticker(4, cube.sticker[0][4], 12);
  printSticker(4, cube.sticker[0][2], 12);
  printSticker(4, cube.sticker[5][8], 12);
  printSticker(4, cube.sticker[5][4], 12);
  printSticker(4, cube.sticker[5][0], 12);
  printf("\n");
  // 7th line
  printSticker(0, cube.sticker[1][0], 1);
  printSticker(3, cube.sticker[0][6], 4);
  printSticker(4, cube.sticker[0][7], 4);
  printSticker(4, cube.sticker[0][4], 4);
  printSticker(4, cube.sticker[0][5], 4);
  printSticker(4, cube.sticker[0][2], 4);
  printSticker(3, cube.sticker[2][2], 1);
  printSticker(4, cube.sticker[4][8], 1);
  printSticker(3, cube.sticker[5][8], 4);
  printSticker(4, cube.sticker[5][5], 4);
  printSticker(4, cube.sticker[5][4], 4);
  printSticker(4, cube.sticker[5][1], 4);
  printSticker(4, cube.sticker[5][0], 4);
  printSticker(3, cube.sticker[3][6], 1);
  printf("\n");
  // 8th line
  printSticker(0, cube.sticker[1][0], 4);
  printSticker(4, cube.sticker[0][7], 12);
  printSticker(4, cube.sticker[0][5], 12);
  printSticker(4, cube.sticker[2][2], 4);
  printSticker(4, cube.sticker[4][8], 4);
  printSticker(4, cube.sticker[5][5], 12);
  printSticker(4, cube.sticker[5][1], 12);
  printSticker(4, cube.sticker[3][6], 4);
  printf("\n");
  // 9th line
  printSticker(0, cube.sticker[1][0], 5);
  printSticker(3, cube.sticker[1][1], 1);
  printSticker(3, cube.sticker[0][7], 4);
  printSticker(4, cube.sticker[0][8], 4);
  printSticker(4, cube.sticker[0][5], 4);
  printSticker(3, cube.sticker[2][1], 1);
  printSticker(3, cube.sticker[2][2], 5);
  printSticker(4, cube.sticker[4][8], 5);
  printSticker(3, cube.sticker[4][7], 1);
  printSticker(3, cube.sticker[5][5], 4);
  printSticker(4, cube.sticker[5][2], 4);
  printSticker(4, cube.sticker[5][1], 4);
  printSticker(3, cube.sticker[3][7], 1);
  printSticker(3, cube.sticker[3][6], 5);
  printf("\n");
  // 10th line
  printSticker(1, cube.sticker[1][0], 4);
  printSticker(3, cube.sticker[1][1], 4);
  printSticker(4, cube.sticker[0][8], 12);
  printSticker(4, cube.sticker[2][1], 4);
  printSticker(3, cube.sticker[2][2], 4);
  printSticker(6, cube.sticker[4][8], 4);
  printSticker(3, cube.sticker[4][7], 4);
  printSticker(4, cube.sticker[5][2], 12);
  printSticker(4, cube.sticker[3][7], 4);
  printSticker(3, cube.sticker[3][6], 4);
  printf("\n");
  // 11th line
  printSticker(0, cube.sticker[1][3], 1);
  printSticker(3, cube.sticker[1][0], 1);
  printSticker(3, cube.sticker[1][1], 5);
  printSticker(3, cube.sticker[1][2], 1);
  printSticker(3, cube.sticker[0][8], 4);
  printSticker(3, cube.sticker[2][0], 1);
  printSticker(3, cube.sticker[2][1], 5);
  printSticker(3, cube.sticker[2][2], 1);
  printSticker(3, cube.sticker[2][5], 1);
  printSticker(4, cube.sticker[4][5], 1);
  printSticker(3, cube.sticker[4][8], 1);
  printSticker(3, cube.sticker[4][7], 5);
  printSticker(3, cube.sticker[4][6], 1);
  printSticker(3, cube.sticker[5][2], 4);
  printSticker(3, cube.sticker[3][8], 1);
  printSticker(3, cube.sticker[3][7], 5);
  printSticker(3, cube.sticker[3][6], 1);
  printSticker(3, cube.sticker[3][3], 1);
  printf("\n");
  // 12th line
  printSticker(0, cube.sticker[1][3], 4);
  printSticker(5, cube.sticker[1][1], 4);
  printSticker(3, cube.sticker[1][2], 4);
  printSticker(4, cube.sticker[2][0], 4);
  printSticker(3, cube.sticker[2][1], 4);
  printSticker(5, cube.sticker[2][5], 4);
  printSticker(4, cube.sticker[4][5], 4);
  printSticker(5, cube.sticker[4][7], 4);
  printSticker(3, cube.sticker[4][6], 4);
  printSticker(4, cube.sticker[3][8], 4);
  printSticker(3, cube.sticker[3][7], 4);
  printSticker(5, cube.sticker[3][3], 4);
  printf("\n");
  // 13th line
  printSticker(0, cube.sticker[1][3], 5);
  printSticker(3, cube.sticker[1][4], 1);
  printSticker(3, cube.sticker[1][1], 1);
  printSticker(3, cube.sticker[1][2], 5);
  printSticker(2, cube.sticker[2][0], 5);
  printSticker(3, cube.sticker[2][1], 1);
  printSticker(3, cube.sticker[2][4], 1);
  printSticker(3, cube.sticker[2][5], 5);
  printSticker(4, cube.sticker[4][5], 5);
  printSticker(3, cube.sticker[4][4], 1);
  printSticker(3, cube.sticker[4][7], 1);
  printSticker(3, cube.sticker[4][6], 5);
  printSticker(2, cube.sticker[3][8], 5);
  printSticker(3, cube.sticker[3][7], 1);
  printSticker(3, cube.sticker[3][4], 1);
  printSticker(3, cube.sticker[3][3], 5);
  printf("\n");
  // 14th line
  printSticker(1, cube.sticker[1][3], 4);
  printSticker(3, cube.sticker[1][4], 4);
  printSticker(5, cube.sticker[1][2], 4);
  printSticker(2, cube.sticker[2][0], 4);
  printSticker(5, cube.sticker[2][4], 4);
  printSticker(3, cube.sticker[2][5], 4);
  printSticker(6, cube.sticker[4][5], 4);
  printSticker(3, cube.sticker[4][4], 4);
  printSticker(5, cube.sticker[4][6], 4);
  printSticker(2, cube.sticker[3][8], 4);
  printSticker(5, cube.sticker[3][4], 4);
  printSticker(3, cube.sticker[3][3], 4);
  printf("\n");
  // 15th line
  printSticker(0, cube.sticker[1][6], 1);
  printSticker(3, cube.sticker[1][3], 1);
  printSticker(3, cube.sticker[1][4], 5);
  printSticker(3, cube.sticker[1][5], 1);
  printSticker(3, cube.sticker[1][2], 1);
  printSticker(2, cube.sticker[2][0], 1);
  printSticker(3, cube.sticker[2][3], 1);
  printSticker(3, cube.sticker[2][4], 5);
  printSticker(3, cube.sticker[2][5], 1);
  printSticker(3, cube.sticker[2][8], 1);
  printSticker(4, cube.sticker[4][2], 1);
  printSticker(3, cube.sticker[4][5], 1);
  printSticker(3, cube.sticker[4][4], 5);
  printSticker(3, cube.sticker[4][3], 1);
  printSticker(3, cube.sticker[4][6], 1);
  printSticker(2, cube.sticker[3][8], 1);
  printSticker(3, cube.sticker[3][5], 1);
  printSticker(3, cube.sticker[3][4], 5);
  printSticker(3, cube.sticker[3][3], 1);
  printSticker(3, cube.sticker[3][0], 1);
  printf("\n");
  // 16th line
  printSticker(0, cube.sticker[1][6], 4);
  printSticker(5, cube.sticker[1][4], 4);
  printSticker(3, cube.sticker[1][5], 4);
  printSticker(4, cube.sticker[2][3], 4);
  printSticker(3, cube.sticker[2][4], 4);
  printSticker(5, cube.sticker[2][8], 4);
  printSticker(4, cube.sticker[4][2], 4);
  printSticker(5, cube.sticker[4][4], 4);
  printSticker(3, cube.sticker[4][3], 4);
  printSticker(4, cube.sticker[3][5], 4);
  printSticker(3, cube.sticker[3][4], 4);
  printSticker(5, cube.sticker[3][0], 4);
  printf("\n");
  // 17th line
  printSticker(0, cube.sticker[1][6], 5);
  printSticker(3, cube.sticker[1][7], 1);
  printSticker(3, cube.sticker[1][4], 1);
  printSticker(3, cube.sticker[1][5], 5);
  printSticker(2, cube.sticker[2][3], 5);
  printSticker(3, cube.sticker[2][4], 1);
  printSticker(3, cube.sticker[2][7], 1);
  printSticker(3, cube.sticker[2][8], 5);
  printSticker(4, cube.sticker[4][2], 5);
  printSticker(3, cube.sticker[4][1], 1);
  printSticker(3, cube.sticker[4][4], 1);
  printSticker(3, cube.sticker[4][3], 5);
  printSticker(2, cube.sticker[3][5], 5);
  printSticker(3, cube.sticker[3][4], 1);
  printSticker(3, cube.sticker[3][1], 1);
  printSticker(3, cube.sticker[3][0], 5);
  printf("\n");
  // 18th line
  printSticker(1, cube.sticker[1][6], 4);
  printSticker(3, cube.sticker[1][7], 4);
  printSticker(5, cube.sticker[1][5], 4);
  printSticker(2, cube.sticker[2][3], 4);
  printSticker(5, cube.sticker[2][7], 4);
  printSticker(3, cube.sticker[2][8], 4);
  printSticker(6, cube.sticker[4][2], 4);
  printSticker(3, cube.sticker[4][1], 4);
  printSticker(5, cube.sticker[4][3], 4);
  printSticker(2, cube.sticker[3][5], 4);
  printSticker(5, cube.sticker[3][1], 4);
  printSticker(3, cube.sticker[3][0], 4);
  printf("\n");
  // 19th line
  printSticker(4, cube.sticker[1][6], 1);
  printSticker(3, cube.sticker[1][7], 5);
  printSticker(3, cube.sticker[1][8], 1);
  printSticker(3, cube.sticker[1][5], 1);
  printSticker(2, cube.sticker[2][3], 1);
  printSticker(3, cube.sticker[2][6], 1);
  printSticker(3, cube.sticker[2][7], 5);
  printSticker(3, cube.sticker[2][8], 1);
  printSticker(12, cube.sticker[4][2], 1);
  printSticker(3, cube.sticker[4][1], 5);
  printSticker(3, cube.sticker[4][0], 1);
  printSticker(3, cube.sticker[4][3], 1);
  printSticker(2, cube.sticker[3][5], 1);
  printSticker(3, cube.sticker[3][2], 1);
  printSticker(3, cube.sticker[3][1], 5);
  printSticker(3, cube.sticker[3][0], 1);
  printf("\n");
  // 20th line
  printSticker(9, cube.sticker[1][7], 4);
  printSticker(3, cube.sticker[1][8], 4);
  printSticker(4, cube.sticker[2][6], 4);
  printSticker(3, cube.sticker[2][7], 4);
  printSticker(22, cube.sticker[4][1], 4);
  printSticker(3, cube.sticker[4][0], 4);
  printSticker(4, cube.sticker[3][2], 4);
  printSticker(3, cube.sticker[3][1], 4);
  printf("\n");
  // 21th line
  printSticker(12, cube.sticker[1][7], 1);
  printSticker(3, cube.sticker[1][8], 5);
  printSticker(2, cube.sticker[2][6], 5);
  printSticker(3, cube.sticker[2][7], 1);
  printSticker(28, cube.sticker[4][1], 1);
  printSticker(3, cube.sticker[4][0], 5);
  printSticker(2, cube.sticker[3][2], 5);
  printSticker(3, cube.sticker[3][1], 1);
  printf("\n");
  // 22th line
  printSticker(17, cube.sticker[1][8], 4);
  printSticker(2, cube.sticker[2][6], 4);
  printSticker(38, cube.sticker[4][0], 4);
  printSticker(2, cube.sticker[3][2], 4);
  printf("\n");
  // 23th line
  printSticker(20, cube.sticker[1][8], 1);
  printSticker(2, cube.sticker[2][6], 1);
  printSticker(44, cube.sticker[4][0], 1);
  printSticker(2, cube.sticker[3][2], 1);
  printf("\n");
}

void rotateSticker(Cube* cube, int face, char direction) {
  int s;
  if (direction == 'C') {
    s = cube->sticker[face][0];
    cube->sticker[face][0] = cube->sticker[face][6];
    cube->sticker[face][6] = cube->sticker[face][8];
    cube->sticker[face][8] = cube->sticker[face][2];
    cube->sticker[face][2] = s;
    s = cube->sticker[face][1];
    cube->sticker[face][1] = cube->sticker[face][3];
    cube->sticker[face][3] = cube->sticker[face][7];
    cube->sticker[face][7] = cube->sticker[face][5];
    cube->sticker[face][5] = s;
  }
  if (direction == 'A') {
    s = cube->sticker[face][0];
    cube->sticker[face][0] = cube->sticker[face][2];
    cube->sticker[face][2] = cube->sticker[face][8];
    cube->sticker[face][8] = cube->sticker[face][6];
    cube->sticker[face][6] = s;
    s = cube->sticker[face][1];
    cube->sticker[face][1] = cube->sticker[face][5];
    cube->sticker[face][5] = cube->sticker[face][7];
    cube->sticker[face][7] = cube->sticker[face][3];
    cube->sticker[face][3] = s;
  }
}

void turnCube(Cube* cube, char notation) {
  int face[9];
  int s;
  switch (notation){
    case 'U': // Up clockwise
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[1][i];
        cube->sticker[1][i] = cube->sticker[2][i];
        cube->sticker[2][i] = cube->sticker[3][i];
        cube->sticker[3][i] = cube->sticker[4][i];
        cube->sticker[4][i] = s;
      }
      rotateSticker(cube, 0, 'C');
      return;
    case 'u':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[1][i];
        cube->sticker[1][i] = cube->sticker[4][i];
        cube->sticker[4][i] = cube->sticker[3][i];
        cube->sticker[3][i] = cube->sticker[2][i];
        cube->sticker[2][i] = s;
      }
      rotateSticker(cube, 0, 'A');
      return;
    case 'E':
      for (int i = 3; i < 6; i++) {
        s = cube->sticker[1][i];
        cube->sticker[1][i] = cube->sticker[4][i];
        cube->sticker[4][i] = cube->sticker[3][i];
        cube->sticker[3][i] = cube->sticker[2][i];
        cube->sticker[2][i] = s;
      }
      return;
    case 'e':
      for (int i = 3; i < 6; i++) {
        s = cube->sticker[1][i];
        cube->sticker[1][i] = cube->sticker[2][i];
        cube->sticker[2][i] = cube->sticker[3][i];
        cube->sticker[3][i] = cube->sticker[4][i];
        cube->sticker[4][i] = s;
      }
      return;  
    case 'D':
      for (int i = 6; i < 9; i++) {
        s = cube->sticker[1][i];
        cube->sticker[1][i] = cube->sticker[4][i];
        cube->sticker[4][i] = cube->sticker[3][i];
        cube->sticker[3][i] = cube->sticker[2][i];
        cube->sticker[2][i] = s;
      }
      rotateSticker(cube, 5, 'C');
      return;
    case 'd':
      for (int i = 6; i < 9; i++) {
        s = cube->sticker[1][i];
        cube->sticker[1][i] = cube->sticker[2][i];
        cube->sticker[2][i] = cube->sticker[3][i];
        cube->sticker[3][i] = cube->sticker[4][i];
        cube->sticker[4][i] = s;
      }
      rotateSticker(cube, 5, 'A');
      return;
    case 'L':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][i*3];
        cube->sticker[0][i*3] = cube->sticker[3][8-i*3];
        cube->sticker[3][8-i*3] = cube->sticker[5][8-i*3];
        cube->sticker[5][8-i*3] = cube->sticker[1][i*3];
        cube->sticker[1][i*3] = s;
      }
      rotateSticker(cube, 4, 'C');
      return;
    case 'l':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][i*3];
        cube->sticker[0][i*3] = cube->sticker[1][i*3];
        cube->sticker[1][i*3] = cube->sticker[5][8-i*3];
        cube->sticker[5][8-i*3] = cube->sticker[3][8-i*3];
        cube->sticker[3][8-i*3] = s;
      }
      rotateSticker(cube, 4, 'A');
      return;
    case 'M':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][i*3+1];
        cube->sticker[0][i*3+1] = cube->sticker[3][7-i*3];
        cube->sticker[3][7-i*3] = cube->sticker[5][7-i*3];
        cube->sticker[5][7-i*3] = cube->sticker[1][i*3+1];
        cube->sticker[1][i*3+1] = s;
      }
      return;
    case 'm':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][i*3+1];
        cube->sticker[0][i*3+1] = cube->sticker[1][i*3+1];
        cube->sticker[1][i*3+1] = cube->sticker[5][7-i*3];
        cube->sticker[5][7-i*3] = cube->sticker[3][7-i*3];
        cube->sticker[3][7-i*3] = s;
      }
      return;
    case 'R':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][8-i*3];
        cube->sticker[0][8-i*3] = cube->sticker[1][8-i*3];
        cube->sticker[1][8-i*3] = cube->sticker[5][i*3];
        cube->sticker[5][i*3] = cube->sticker[3][i*3];
        cube->sticker[3][i*3] = s;
      }
      rotateSticker(cube, 2, 'C');
      return;
    case 'r':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][8-i*3];
        cube->sticker[0][8-i*3] = cube->sticker[3][i*3];
        cube->sticker[3][i*3] = cube->sticker[5][i*3];
        cube->sticker[5][i*3] = cube->sticker[1][8-i*3];
        cube->sticker[1][8-i*3] = s;
      }
      rotateSticker(cube, 2, 'A');
      return;
    case 'F':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][6+i];
        cube->sticker[0][6+i] = cube->sticker[4][8-i*3];
        cube->sticker[4][8-i*3] = cube->sticker[5][6+i];
        cube->sticker[5][6+i] = cube->sticker[2][i*3];
        cube->sticker[2][i*3] = s;
      }
      rotateSticker(cube, 1, 'C');
      return;
    case 'f':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][6+i];
        cube->sticker[0][6+i] = cube->sticker[2][i*3];
        cube->sticker[2][i*3] = cube->sticker[5][6+i];
        cube->sticker[5][6+i] = cube->sticker[4][8-i*3];
        cube->sticker[4][8-i*3] = s;
      }
      rotateSticker(cube, 1, 'A');
      return;
    case 'S':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][3+i];
        cube->sticker[0][3+i] = cube->sticker[4][7-i*3];
        cube->sticker[4][7-i*3] = cube->sticker[5][3+i];
        cube->sticker[5][3+i] = cube->sticker[2][1+i*3];
        cube->sticker[2][1+i*3] = s;
      }
      return;
    case 's':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][3+i];
        cube->sticker[0][3+i] = cube->sticker[2][1+i*3];
        cube->sticker[2][1+i*3] = cube->sticker[5][3+i];
        cube->sticker[5][3+i] = cube->sticker[4][7-i*3];
        cube->sticker[4][7-i*3] = s;
      }
      return;
    case 'B':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][i];
        cube->sticker[0][i] = cube->sticker[2][i*3+2];
        cube->sticker[2][i*3+2] = cube->sticker[5][i];
        cube->sticker[5][i] = cube->sticker[4][6-i*3];
        cube->sticker[4][6-i*3] = s;
      }
      rotateSticker(cube, 3, 'C');
      return;
    case 'b':
      for (int i = 0; i < 3; i++) {
        s = cube->sticker[0][i];
        cube->sticker[0][i] = cube->sticker[4][6-i*3];
        cube->sticker[4][6-i*3] = cube->sticker[5][i];
        cube->sticker[5][i] = cube->sticker[2][i*3+2];
        cube->sticker[2][i*3+2] = s;
      }
      rotateSticker(cube, 3, 'A');
      return;
    case 'X':
      turnCube(cube, 'R');
      turnCube(cube, 'm');
      turnCube(cube, 'l');
      return;
    case 'x':
      turnCube(cube, 'r');
      turnCube(cube, 'M');
      turnCube(cube, 'L');
      return;
    case 'Y':
      turnCube(cube, 'U');
      turnCube(cube, 'e');
      turnCube(cube, 'd');
      return;
    case 'y':
      turnCube(cube, 'u');
      turnCube(cube, 'E');
      turnCube(cube, 'D');
      return;
    case 'Z':
      turnCube(cube, 'F');
      turnCube(cube, 'S');
      turnCube(cube, 'b');
      return;
    case 'z':
      turnCube(cube, 'f');
      turnCube(cube, 's');
      turnCube(cube, 'B');
      return;
  }
}