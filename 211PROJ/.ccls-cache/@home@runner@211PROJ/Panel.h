#include <iostream>
#include "PanelSize.h"
const int ROW = PANELSIZE;
const int COL = PANELSIZE;
class Panel
{
private:
  char content[ROW][COL];
public:
  Panel();                                    /* Default constructor fill the content array with '.'  */
  void loadPanel(const char array[ROW][COL]); /* Copies char array into content array */
  void disp();                                /* Displays the content array */
  void flipVert();                            /* Flips the contents of the array in vertical axis */
  void flipHorz();                            /* Flips the contents of the array in horizontal axis */
  void rotateRight();                         /* Rotates the contents of the array to the right */
  void rotateLeft();                          /* Rotates the contents of the array to the left */
};