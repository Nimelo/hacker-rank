#pragma once

#include <string>
#include <cstddef>

namespace com::github::nimelo {
  class TimeConversion {
    public:
      TimeConversion(std::string const& time) : time_{time} {}

      std::string get() const { 
        std::string time_of_day = time_.substr(time_length);
        int hours = std::stoi(time_.substr(0, hours_length));
        std::string hours_string;

        if (time_of_day == std::string(AM)) {
          hours_string = hours == 12 ? "00" : time_.substr(0, hours_length);
        } else {
          hours_string = hours == 12 ? "12" : std::to_string(hours + 12);
        }
        
        return hours_string + time_.substr(hours_length, time_length - hours_length);
      }
    private:
      static constexpr const char * AM = "AM";
      static constexpr const char * PM = "PM";
      static constexpr const char * separator = ":";
      static constexpr size_t separator_length = 1;
      static constexpr size_t hours_length = 2;
      static constexpr size_t minutes_length = 2;
      static constexpr size_t seconds_length = 2;
      static constexpr size_t time_length 
        = hours_length + separator_length
        + minutes_length + separator_length
        + seconds_length;
      std::string time_;
  };
}