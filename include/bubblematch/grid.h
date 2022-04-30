#pragma once

#include <array>
#include <string>

namespace bubblematch {
  using Cells = std::array<std::array<unsigned int, 5>, 5>;

  /**
   * @brief A class representing a grid of BubbleMatch
   */
  class Grid {
    Cells cells;

  public:
    /**
     * @brief Creates a new grid
     */
    Grid();

    /**
     * @brief Empty the grid
     */
    void empty();

    /**
     * @brief Get the cells in the grid
     */
    const Cells& get_cells() const;
  };

}  // namespace bubblematch
