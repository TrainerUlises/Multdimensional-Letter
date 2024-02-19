#include "Panel.h"
using namespace std;

// ULISES ROMERO PROJECT

// This function will initialize the 2D array with the char character '.'

Panel::Panel() {
  for (int ROME_i = 0; ROME_i < ROW; ROME_i++) {
    for (int ROME_j = 0; ROME_j < COL; ROME_j++) {
      content[ROME_i][ROME_j] = '.';
    }
  }
}

// This function will display the contents of the 2D array which is filled with
// the char character '.'

void Panel::disp() {
  for (int ROME_i = 0; ROME_i < ROW; ROME_i++) {
    for (int ROME_j = 0; ROME_j < COL; ROME_j++) {
      cout << content[ROME_i][ROME_j];
    }
    cout << endl;
  }
}

// This function will flip the letter via the vertical axis. Uses
// a temp variable to swap the values.

void Panel::flipVert() {
  for (int ROME_i = 0; ROME_i < ROW; ROME_i++) {
    for (int ROME_j = 0; ROME_j < COL / 2; ROME_j++) {
      char ROME_temp = content[ROME_i][ROME_j];
      content[ROME_i][ROME_j] = content[ROME_i][COL - ROME_j - 1];
      content[ROME_i][COL - ROME_j - 1] = ROME_temp;
    }
  }
}

// This function will flip the contents of the array horizontally, Uses a temp
// variable to swap the values.

void Panel::flipHorz() {
  for (int ROME_i = 0; ROME_i < ROW / 2; ROME_i++) {
    for (int ROME_j = 0; ROME_j < COL; ROME_j++) {
      char ROME_temp = content[ROME_i][ROME_j];
      content[ROME_i][ROME_j] = content[ROW - ROME_i - 1][ROME_j];
      content[ROW - ROME_i - 1][ROME_j] = ROME_temp;
    }
  }
}

// This function rotates the contents of the array to a 90 degree angle.
void Panel::rotateRight() {
  char ROME_rotateRight[ROW][COL];

  for (int ROME_i = 0; ROME_i < ROW; ROME_i++) {
    for (int ROME_j = 0; ROME_j < COL; ROME_j++) {
      ROME_rotateRight[ROME_j][ROW - ROME_i - 1] = content[ROME_i][ROME_j];
    }
  }

  for (int ROME_i = 0; ROME_i < ROW; ROME_i++) {
    for (int ROME_j = 0; ROME_j < COL; ROME_j++) {
      content[ROME_i][ROME_j] = ROME_rotateRight[ROME_i][ROME_j];
    }
  }
}

// This function rotates the contents of the array to the left 90 degrees
void Panel::rotateLeft() {
  char ROME_rotateLeft[ROW][COL];

  for (int ROME_i = 0; ROME_i < ROW; ROME_i++) {
    for (int ROME_j = 0; ROME_j < COL; ROME_j++) {
      ROME_rotateLeft[COL - ROME_j - 1][ROME_i] = content[ROME_i][ROME_j];
    }
  }

  for (int ROME_i = 0; ROME_i < ROW; ROME_i++) {
    for (int ROME_j = 0; ROME_j < COL; ROME_j++) {
      content[ROME_i][ROME_j] = ROME_rotateLeft[ROME_i][ROME_j];
    }
  }
}

// This function will load the panel with the contents of the array, links to
// the main CPP which is the letter Q.

void Panel::loadPanel(const char array[ROW][COL]) {
  for (int ROME_i = 0; ROME_i < ROW; ROME_i++) {
    for (int ROME_j = 0; ROME_j < COL; ROME_j++) {
      content[ROME_i][ROME_j] = array[ROME_i][ROME_j];
    }
  }
}