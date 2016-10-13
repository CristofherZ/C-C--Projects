  // Copyright 2016
#include "inclassheader.h"

int main() {
  int number[9][9];
  int contantNumber[17] = { 6, 5, 7, 2, 4, 1, 9, 5, 3, 4, 9, 2, 4, 1, 7, 6, 5};
  int rows[17]          = { 5, 6, 7, 1, 3, 8, 1, 2, 7, 4, 8, 4, 1, 2, 5, 9, 7};
  int columns[17]       = { 1, 1, 1, 2, 2, 2, 3, 4, 4, 5, 5, 6, 7, 7, 8, 8, 9};
  int counter = 1;

  for (int i = 0; i < 9; ++i)
  {
    for (int j = 0; j < 9; ++j)
    {
      for ()
      number[i][j] = counter;
      cout << number[i][j] << "  ";
      counter++;
    }
    cout << endl;
  }

  return 0;
}

