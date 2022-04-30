#include <bubblematch/grid.h>

using namespace bubblematch;

Grid::Grid() {}

void Grid::empty() {
  for (long unsigned int i = 0; i < cells.size(); i++) cells[i].fill(0);
}

const Cells& Grid::get_cells() const { return cells; }
