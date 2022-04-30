#include <bubblematch/version.h>
#include <doctest/doctest.h>

#include <string>

TEST_CASE("BubbleMatch version") {
  static_assert(std::string_view(BUBBLEMATCH_VERSION) == std::string_view("1.0"));
  CHECK(std::string(BUBBLEMATCH_VERSION) == std::string("1.0"));
}
