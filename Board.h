/*
* Created by Or Lion.
* ID 204025175.
*/

#ifndef EX01_BOARD_H
#define EX01_BOARD_H

#include "Cell.h"

class Board {
 public:
  /*
   * Constructor.
   * Receives an int and sets it as the Board size.
   *
   */
  Board(int size);
  /*
   * Prints the Board to the console.
   */
  void Print();
 private:
  int bSize;
  char p1;
  char p2;
  Cell **cells;
};

#endif //EX01_BOARD_H