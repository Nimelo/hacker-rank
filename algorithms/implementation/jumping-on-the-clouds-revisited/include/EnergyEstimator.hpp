#pragma once

#include <vector>
#include <cstddef>
#include "CloudType.hpp"

namespace com::github::nimelo {
  class EnergyEstimator {
    public:
      EnergyEstimator(
        std::vector<CloudType> const& cloud_config,
        size_t const& energy = 100
      ) : cloud_config_{cloud_config}, energy_(energy) {}

      auto play(size_t const& leap_size)
       const -> size_t {
        size_t number_of_clouds = cloud_config_.size();
        size_t energy = energy_ - number_of_clouds / leap_size;

        for(size_t i = 0; i < number_of_clouds; i+= leap_size)
        if(cloud_config_[i] == CloudType::THUNDERCLOUD)
          energy -= 2;

        return energy;
      }

    private:
      std::vector<CloudType> cloud_config_;
      size_t energy_;
  };
}