#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H
#include <iostream>
#include <vector>
#include "observer.h"

class Cell;

class TextDisplay: public Observer {
  std::vector<std::vector<char>> theDisplay;
  const int gridSize;
 public:
  TextDisplay(int n);

  void notify(move m, Cell &from) override;

  friend std::ostream &operator<<(std::ostream &out, const TextDisplay &td);
};
#endif
