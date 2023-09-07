#include <pybind11/pybind11.h>

double add(const double lhs, const double rhs) {
    return lhs + rhs;
}

PYBIND11_MODULE(mypybind11lib, m) {
  using namespace pybind11::literals;

  m.doc() = "simple pybind11 example";
  m.def("add", &add, "add two variables", "lhs"_a, "rhs"_a);
}
