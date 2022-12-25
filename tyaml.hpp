#pragma once
#include <sstream>
#include <string>

namespace TYAML {
const std::string start = "#{";
const std::string end = "#}";
const std::string hyphen = "- ";
void convert(std::istream& in, std::ostream& out);
}  // namespace TYAML
