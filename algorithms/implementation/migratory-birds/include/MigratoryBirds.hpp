#pragma once

#include <cstddef>

#include <vector>
#include <unordered_set>
#include <unordered_map>

#include <algorithm>

namespace com::github::nimelo {
template<class T>
class MigratoryBirds {
public:
  MigratoryBirds(std::unordered_set<T> const& bird_types)
    : bird_types_{bird_types} {}
  auto get(std::vector<T> const& birds) -> std::unordered_map<T, size_t> const { 
    std::unordered_map<T, size_t> bird_type_map;

    std::for_each(
      bird_types_.begin(),
      bird_types_.end(),
      [&](T const& type) {
        bird_type_map.insert({ type, static_cast<size_t>(0)});
    });

    std::for_each(
      birds.begin(),
      birds.end(),
      [&](T const& bird) {
        if (bird_type_map.find(bird) != bird_type_map.end()) {
          bird_type_map[bird]++; 
        }
      }
    );

    return bird_type_map;
  }

  auto get_common_type(std::vector<T> const& birds) -> T const { 
    auto map = get(birds);
    auto it = std::max_element(
      map.begin(),
      map.end(),
      [](std::pair<T, size_t> const& p1, std::pair<T, size_t> const& p2) {
          return p1.second < p2.second ||
            (p1.second == p2.second && p1.first > p2.first);
    });
    return (*it).first;
  }

private:
  std::unordered_set<T> bird_types_;
};
}