#include "pls.h"

PLS_ADD_DEP("trivial_cmake_lib", "https://github.com/dkorolev/trivial_cmake_lib");

#include "trivial_cmake_lib.h"

int trivial_transitive_bare_lib_duplicate(int x) {
  return trivial_cmake_lib_add(x, x);
}
