# Modern CMake Template

[![C++ CI with CMake](https://github.com/paakmau/modern-cmake-template/actions/workflows/cmake.yml/badge.svg)](https://github.com/paakmau/modern-cmake-template/actions/workflows/cmake.yml)

This is a modern CMake template, which contains a single library.

## Features

- Test with GoogleTest
- Benchmark with Google benchmark
- Code formatting with ClangFormat
- Simple installing and exporting

## Requirements

- CMake (version 3.14 or later)
- C++ Compiler (such as GCC, Clang or MSVC)

## Quick start

Clone the repository

```shell
$ git clone https://github.com/paakmau/modern-cmake-template
```

Navigate to project directory.

```shell
$ cd modern-cpp-template
```

Create a directory for build, and then navigate to it.

```shell
$ mkdir build
$ cd build
```

Generate the project buildsystem.

```shell
$ cmake .. -DCMAKE_BUILD_TYPE=Release
```

Build the project.

```shell
$ cmake --build . --config Release
```

Run tests.

```shell
$ ctest
```

The project can be installed as follows.

```shell
$ cmake --install . --config Release
```

## Import the library

There're two ways to import this library.

### Subdirectory

Copy the whole project to a directory used for placing external dependencies, such as `extern`.

Put a `add_subdirectory(modern-cpp-template)` in `CMakeLists.txt`.

The library can be linked like `target_link_libraries(<Other Target> PRIVATE Demo::Demo)`.

### Find package

Install the library as described above.

Put a `find_package(Demo 0.0.1 REQUIRED)` in `CMakeLists.txt`.

Link the library like `target_link_libraries(<Other Target> PRIVATE Demo::Demo)`.
