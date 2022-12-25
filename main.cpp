#include "tyaml.hpp"
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
  std::ifstream fin(argv[1]);
  std::ofstream fout(argv[2]);
  TYAML::convert(fin, fout);
}
