// Multidimension.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
//
#include "Panel.h"
#include <iostream>
using namespace std;
const char Q[PANELSIZE][PANELSIZE] =
{
  {'.','.','.','.','.','.','.','.','.','.',},
  {'.','.','.','.','Q','.','.','.','.','.',},
  {'.','.','.','Q',' ','Q','.','.','.','.',},
  {'.','.','Q',' ',' ',' ','Q','.','.','.',},
  {'.','.','Q',' ',' ',' ','Q','.','.','.',},
  {'.','.','Q',' ',' ',' ','Q','.','.','.',},
  {'.','.','Q',' ',' ',' ','Q','.','.','.',},
  {'.','.','.','Q',' ','Q','.','.','.','.',},
  {'.','.','.','.','Q','Q','.','.','.','.',},
  {'.','.','.','.','.','.','Q','.','.','.',}
};
void choicemsg();
char getchoice();
int main() {
  Panel p;
  char choice;
  choice = getchoice();
  while (choice != 'X') {
    switch (choice) {
      case 'H': {
        p.flipHorz();
        p.disp();
        break;
      }
      case 'V': {
        p.flipVert();
        p.disp();
        break;
      }
      case 'R': {
        p.rotateRight();
        p.disp();
        break;
      }
      case 'L': {
        p.rotateLeft();
        p.disp();
        break;
      }
      case 'C': {
        p.loadPanel(Q);
        p.disp();
        break;
      }
      case 'D': {
        p.disp();
        break;
      }
    }
    choice = getchoice();
  }
}
  /******************************************/
  void choicemsg() {
    cout << "C for load panel with letter"<<endl;
    cout << "D for panel display" << endl;
    cout << "H for horizontal flip" << endl;
    cout << "L for rotate left" << endl;
    cout << "R for rotate right" << endl;
    cout << "V for vertical flip" << endl;
    cout << "X to exit " << endl;
    cout << "Enter choice: ";
  }
  /******************************************/
  char getchoice() {
    char c = ' ';
    choicemsg();
    cin >> c;
    c=toupper(c);
    while (c != 'H' && c != 'V' && c != 'R' && c != 'L' && c != 'D' && c != 'C' && c != 'X') {
      choicemsg();
      cin >> c;
      c=toupper(c);
    }
    return c;
  }