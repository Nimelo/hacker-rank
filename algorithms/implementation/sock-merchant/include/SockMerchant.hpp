#pragma once

#include <vector>
#include <map>
#include <algorithm>
#include <cstddef>

namespace com::github::nimelo {
  template<class T>
  class SockMerchant {
    public:
      SockMerchant(std::vector<T> & socks) {
        std::for_each(
          socks.begin(),
          socks.end(),
          [&](T const & sock) {
            auto sock_counter = paired_socks_counter_.find(sock);
            if (sock_counter == paired_socks_counter_.end()) {
              paired_socks_counter_.insert({sock, 1});
            } else {
              ++sock_counter->second;
            }
          }
        );
      }

      auto get_total_pairs() const -> size_t {
        size_t total = 0;
        std::for_each(
          paired_socks_counter_.begin(),
          paired_socks_counter_.end(),
          [&](decltype(*paired_socks_counter_.begin()) const & pair) {
            total += pair.second / 2;
          }
        );

        return total;
      }
    private:
      std::map<T, size_t> paired_socks_counter_;
  };
}