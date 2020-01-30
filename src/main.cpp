#include <fstream>
#include <iostream>
#include <unordered_map>

#include "assembler.h"
#include "instructions.h"

int main() {
  using namespace ravel;

  std::ifstream t(std::string(CMAKE_SOURCE_DIR) + "/test/asm/a_plus_b_1.s");
  std::string src((std::istreambuf_iterator<char>(t)),
                  std::istreambuf_iterator<char>());
  assemble(src);

  return 0;
}