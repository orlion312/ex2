/*
* Created by Or Lion.
* ID 204025175.
*/

#ifndef EX2_CELL_H
#define EX2_CELL_H

class Cell {
 public:
  Cell(int r, int c, char v);
  int getRow() const;
  char getValue() const;
  void setValue(char value);
  int getCol() const;
 private:
  int row;
  int col;
  char value;
};

#endif //EX2_CELL_H
