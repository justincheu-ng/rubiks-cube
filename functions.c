#include "functions.h"

void clearScreen() {
  system("clear -x");
  printf("\n"
          "██████╗ ██╗   ██╗██████╗ ██╗██╗  ██╗██╗███████╗     ██████╗██╗   ██╗██████╗ ███████╗\n"
          "██╔══██╗██║   ██║██╔══██╗██║██║ ██╔╝╚═╝██╔════╝    ██╔════╝██║   ██║██╔══██╗██╔════╝\n"
          "██████╔╝██║   ██║██████╔╝██║█████╔╝    ███████╗    ██║     ██║   ██║██████╔╝█████╗  \n"
          "██╔══██╗██║   ██║██╔══██╗██║██╔═██╗    ╚════██║    ██║     ██║   ██║██╔══██╗██╔══╝  \n"
          "██║  ██║╚██████╔╝██████╔╝██║██║  ██╗   ███████║    ╚██████╗╚██████╔╝██████╔╝███████ \n"
          "╚═╝  ╚═╝ ╚═════╝ ╚═════╝ ╚═╝╚═╝  ╚═╝   ╚══════╝     ╚═════╝ ╚═════╝ ╚═════╝ ╚══════╝\n\n");
}

void setColor(int color) {
  switch (color) {
    case 0: printf("\033[1;31m"); return;
    case 1: printf("\033[1;32m"); return;
    case 2: printf("\033[1;33m"); return;
    case 3: printf("\033[1;34m"); return;
    case 4: printf("\033[1;36m"); return;
    case 5: printf("\033[1;35m"); return;
    case 6: printf("\033[0;31m"); return;
    case 7: printf("\033[0;32m"); return;
    case 8: printf("\033[0;33m"); return;
    case 9: printf("\033[0;34m"); return;
    case 10: printf("\033[0;36m"); return;
    case 11: printf("\033[0;35m"); return;
    default:  printf("\033[0m");
  }
}

void printHistory(char history) {
  // 95x9
  printf("\n  ");
  switch (history) {
    case '0':
      printf("Type \"help\" for commands");
    break;
    case '1':
    case 'A':
      printf("Cube solved!");
      break;
    case 'a':
      printf("Cube mixed!");
      break;
    case 'H':
      printf("L:   Left clockwise | l:   Left anticlockwise  |  R:  Right clockwise | r:  Right anticlockwise\n"
             "  U:     Up clockwise | u:     Up anticlockwise  |  D:   Down clockwise | d:   Down anticlockwise\n"
             "  F:  Front clockwise | f:  Front anticlockwise  |  B:   Back clockwise | b:   Back anticlockwise\n"
             "  M:        The layer between L and R turn as L  |  m:        The layer between L and R turn as R\n"
             "  E:        The layer between U and D turn as D  |  m:        The layer between U and D turn as U\n"
             "  S:        The layer between F and B turn as F  |  s:        The layer between F and B turn as B\n"
             "  X:                Rotate the entire cube on R  |  x:                Rotate the entire cube on L\n"
             "  Y:                Rotate the entire cube on U  |  y:                Rotate the entire cube on D\n"
             "  Z:                Rotate the entire cube on F  |  z:                Rotate the entire cube on B\n"
             "  solve:      solves the cube  |  mix:           mixes the cube  |  exit:  terminates the program");
      break;
    case 'L':
      printf("Left clockwise");
      break;
    case 'l':
      printf("Left anticlockwise");
      break;
    case 'R':
      printf("Right clockwise");
      break;
    case 'r':
      printf("Right anticlockwise");
      break;
    case 'U':
      printf("Up clockwise");
      break;
    case 'u':
      printf("Up anticlockwise");
      break;
    case 'D':
      printf("Down clockwise");
      break;
    case 'd':
      printf("Down anticlockwise");
      break;
    case 'F':
      printf("Front clockwise");
      break;
    case 'f':
      printf("Front anticlockwise");
      break;
    case 'B':
      printf("Back clockwise");
      break;
    case 'b':
      printf("Back anticlockwise");
      break;
    case 'M':
      printf("Middle clockwise");
      break;
    case 'm':
      printf("Middle anticlockwise");
      break;
    case 'E':
      printf("Equator clockwise");
      break;
    case 'e':
      printf("Equator anticlockwise");
      break;
    case 'S':
      printf("Standing clockwise");
      break;
    case 's':
      printf("Standing anticlockwise");
      break;
    case 'X':
      printf("Rotate on X axis clockwise");
      break;
    case 'x':
      printf("Rotate on X axis anticlockwise");
      break;
    case 'Y':
      printf("Rotate on Y axis clockwise");
      break;
    case 'y':
      printf("Rotate on y axis anticlockwise");
      break;
    case 'Z':
      printf("Rotate on Z axis clockwise");
      break;
    case 'z':
      printf("Rotate on z axis anticlockwise");
      break;
    default:
      printf("Command not found.  Type \"help\" for commands");
  }
  printf("\n\n");
}

void printSticker(int space, int sticker, int number) {
  for (int i = 0; i < space; i++) {
    printf(" ");
  }
  setColor(sticker);
  for (int i = 0; i < number; i++) {
    printf("%s", "█");
  }
  setColor(-1);
}

bool promptInput(Cube* cube, char* history) {
  printf("> ");
  char input[6] = "\0\0\0\0\0\0";
  int i = 0;
  char c;
  // read string
  while (c = getchar(), c != EOF && c != '\n') {
    if (i < 5) {
      input[i] = c;
    }
    i++;
  }
  // no input
  if (strlen(input) == 0) {
    return promptInput(cube, history);
  }
  // 1 char
  if (strlen(input) == 1) {
    if (input[0] == 'A' || input[0] == 'a' || input[0] == '1') {
      input[0] = 'N';
    }
    *history = '1';
    turnCube(cube, input[0]);
    for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 8; j++) {
        if (cube->sticker[i][j] != cube->sticker[i][j+1]) {
          *history = input[0];
          return true;
        }
      }
    }
    return true;
  }
  // to uppercase
  for (int i = 0; i < strlen(input); i++) {
      input[i] = toupper(input[i]);
  }
  // solve
  if (strcmp(input, "SOLVE") == 0) {
    *history = 'A';
    initCube(cube);
    return true;
  }
  // mix
  if (strcmp(input, "MIX") == 0) {
    *history = 'a';
    initCube(cube);
    char moves[12] = {'U', 'u', 'D', 'd', 'L', 'l', 'R', 'r', 'F', 'f', 'B', 'b'};
    srand(time(0));
    for (int i = 0; i < 30; i++) {
      int move = rand() % 12;
      turnCube(cube, moves[move]);
      if (rand() % 2) {
        turnCube(cube, moves[move]);
      }
      clearScreen();
      printCube(*cube);
      usleep(150000);
    }
    turnCube(cube, moves[rand() % 12]);
    return true;
  }
  // help
  if (strcmp(input, "HELP") == 0) {
    *history = 'H';
    return true;
  }
  // exit
  if (strcmp(input, "EXIT") == 0) {
    return false;
  }
  
  *history = 'N';
  return true;
}
