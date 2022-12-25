#include "tyaml.hpp"
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace TYAML {
std::vector<std::string> split(std::string str) {
  std::vector<std::string> ret;
  std::stringstream ss{str};
  for(std::string buf; getline(ss, buf, ':');) {
    std::erase_if(buf, [](unsigned char c) { return std::isspace(c); });
    ret.push_back(buf);
  }
  return ret;
}

std::string tablize(int nest, std::vector<std::string> key, std::vector<std::string> value) {
  std::stringstream ss;
  if(key.size() != value.size()) std::cout << "!!!!!" << std::endl;
  for(int i = 0; i < key.size(); ++i) {
    ss << std::string(nest, ' ') << (i ? "  " : "- ")
       << key.at(i) << ": "
       << value.at(i) << std::endl;
  }
  return ss.str();
}

void convert(std::istream& tyaml, std::ostream& out) {
  std::string buf;
  int line_cnt = 0;
  for(; std::getline(tyaml, buf); ++line_cnt) {
    size_t start_pos = buf.find(start);
    if(start_pos == std::string::npos) {
      out << buf << std::endl;
    } else {
      std::vector<std::string> key = split(buf.erase(0, start_pos + start.size()));
      for(std::string item; std::getline(tyaml, item);) {
        if(item.find(end) != std::string::npos) break;
        int hyphen_pos = item.find(hyphen);
        std::vector<std::string> value = split(item.erase(0, hyphen_pos + hyphen.size()));
        out << tablize(hyphen_pos, key, value);
      }
    }
  }
  return;
}
}  // namespace TYAML
