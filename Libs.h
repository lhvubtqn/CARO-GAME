#pragma once
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#define MaxN 100
#define Row 19
#define Column 19

using namespace std;

void SetColor(int ForgC);
void setcursor(bool visible);
void Gotoxy(int x, int y);
bool FindNullPos(int PlayerCom[MaxN][MaxN]);
void resizeConsole(int width, int height);