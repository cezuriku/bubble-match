#include <bubblematch/bubblematch.h>
#include <bubblematch/version.h>
#include <doctest/doctest.h>

#include <string>

TEST_CASE("BubbleMatch") {
  using namespace bubblematch;

  BubbleMatch bubblematch("Tests");

  CHECK(bubblematch.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(bubblematch.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(bubblematch.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(bubblematch.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("BubbleMatch version") {
  static_assert(std::string_view(BUBBLEMATCH_VERSION) == std::string_view("1.0"));
  CHECK(std::string(BUBBLEMATCH_VERSION) == std::string("1.0"));
}
