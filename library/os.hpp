#pragma once
#include <ostream>
#include <vector>

template<typename T, typename S>
std::ostream &operator<<(std::ostream &os, const std::pair<T, S> &p) {
  os << "(" << p.first << ", " << p.second << ")";
  return os;
}

template<typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<T> &vector) {
  for (size_t i = 0; i < vector.size(); ++i) {
    os << (i > 0 ? " " : "") << vector[i];
  }
  return os;
}

template<typename T>
std::ostream &operator<<(std::ostream &os, const std::vector<std::vector<T>> &vector) {
  for (size_t i = 0; i < vector.size(); ++i) {
    os << vector[i] << std::endl;
  }
  return os;
}
