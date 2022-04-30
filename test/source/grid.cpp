#include <bubblematch/grid.h>
#include <doctest/doctest.h>

#include <string>

TEST_CASE("Grid") {
  using namespace bubblematch;

  Grid grid;

  grid.empty();

  CHECK(grid.get_cells().size() >= 5);
  CHECK(grid.get_cells()[0][0] == 0);
}
