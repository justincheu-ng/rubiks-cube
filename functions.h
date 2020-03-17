#ifndef COLOR
#define COLOR

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "cube.h"

void clearScreen();
void printHistory(char history);
void printSticker(int space, int sticker, int number);
bool promptInput(Cube* cube, char* history);
void setColor(int color);

#endif