/*
* Created by Or Lion.
* ID 204025175.
*/
#include <iostream>
#include "Board.h"
using namespace std;

Board::Board(int size) : bSize(size) {
  p1 = 'O';
  p2 = 'x';
  this-> cells = new Cell * [this-> bSize];
  for (int i = 0; i < this->bSize; i++) {
    this->cells[i] = new Cell [0,0,this->bSize];
  }
  for (int i = 0; i < this->bSize; i++) {
    for (int j = 0; j < this->bSize; j++) {
      this->[i][j] = ' ';
    }
  }
  mat[4][4] = mat[3][3] = p1;
  mat[4][3] = mat[3][4] = p2;
}

void Board::Print() {
  cout << " ";
  for (int i = 1; i <= this->bSize; i++) {
    cout << " | " << i;
  }
  cout << " | \n";
  for(int i = 0; i < (this->bSize * 4) + 3; i++) {
    cout << "-";
  }
  cout << "\n";
  for (int i = 1; i <= this->bSize; i++) {
    cout << i << " |";
    for (int j = 0; j < this->bSize; j++) {
      cout << " " << mat[i - 1][j] << " |";
    }
    cout << endl;
    for(int i = 0; i < (this->bSize * 4) + 3; i++) {
      cout << "-";
    }
    cout << "\n";
  }
  delete(this->mat);
}