#pragma once

namespace com::github::nimelo {
  template<typename T>
  class Adder {
    public:
      Adder(T lhs, T rhs) : lhs_(lhs), rhs_(rhs) {}
      T get() const { return lhs_ + rhs_; }
    private:
      T lhs_;
      T rhs_;
  };
}