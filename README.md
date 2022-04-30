[![Actions Status](https://github.com/cezuriku/bubblematch/workflows/MacOS/badge.svg)](https://github.com/cezuriku/bubblematch/actions)
[![Actions Status](https://github.com/cezuriku/bubblematch/workflows/Windows/badge.svg)](https://github.com/cezuriku/bubblematch/actions)
[![Actions Status](https://github.com/cezuriku/bubblematch/workflows/Ubuntu/badge.svg)](https://github.com/cezuriku/bubblematch/actions)
[![Actions Status](https://github.com/cezuriku/bubblematch/workflows/Style/badge.svg)](https://github.com/cezuriku/bubblematch/actions)
[![Actions Status](https://github.com/cezuriku/bubblematch/workflows/Install/badge.svg)](https://github.com/cezuriku/bubblematch/actions)
[![codecov](https://codecov.io/gh/cezuriku/bubblematch/branch/master/graph/badge.svg)](https://codecov.io/gh/cezuriku/bubblematch)

# BubbleMatch

## Features

## Usage

### Build and run the standalone target

Use the following command to build and run the executable target.

```bash
cmake -S standalone -B build/standalone
cmake --build build/standalone
./build/standalone/BubbleMatch --help
```

### Build and run test suite

Use the following commands from the project's root directory to run the test suite.

```bash
cmake -S test -B build/test
cmake --build build/test
CTEST_OUTPUT_ON_FAILURE=1 cmake --build build/test --target test

# or simply call the executable: 
./build/test/BubbleMatchTests
```

To collect code coverage information, run CMake with the `-DENABLE_TEST_COVERAGE=1` option.

### Run clang-format

Use the following commands from the project's root directory to check and fix C++ and CMake source style.
This requires _clang-format_, _cmake-format_ and _pyyaml_ to be installed on the current system.

```bash
cmake -S test -B build/test

# view changes
cmake --build build/test --target format

# apply changes
cmake --build build/test --target fix-format
```

See [Format.cmake](https://github.com/TheLartians/Format.cmake) for details.

### Build the documentation

The documentation is automatically built and [published](https://thelartians.github.io/bubblematch) whenever a [GitHub Release](https://help.github.com/en/github/administering-a-repository/managing-releases-in-a-repository) is created.
To manually build documentation, call the following command.

```bash
cmake -S documentation -B build/doc
cmake --build build/doc --target GenerateDocs
# view the docs
open build/doc/doxygen/html/index.html
```

To build the documentation locally, you will need Doxygen, jinja2 and Pygments on installed your system.

### Build everything at once

The project also includes an `all` directory that allows building all targets at the same time.
This is useful during development, as it exposes all subprojects to your IDE and avoids redundant builds of the library.

```bash
cmake -S all -B build
cmake --build build

# run tests
./build/test/BubbleMatchTests
# format code
cmake --build build --target fix-format
# run standalone
./build/standalone/BubbleMatch --help
# build docs
cmake --build build --target GenerateDocs
```
