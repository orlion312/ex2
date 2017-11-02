/*
* Created by Or Lion.
* ID 204025175.
*/
#include "Cell.h"

Cell::Cell(int r, int c, char v) : row(r), col(c), value(v) {
}

int Cell::getCol() const {
  return col;
}
int Cell::getRow() const {
  return row;
}

char Cell::getValue() const {
  return value;
}
void Cell::setValue(char value) {
  Cell::value = value;
}
