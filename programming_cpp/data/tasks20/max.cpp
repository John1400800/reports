#include <cstdint>
#include "max.hpp"

template <> // temlate specialization
int32_t max<int32_t>(int32_t a, int32_t b) {
    return a > b ? a : b;
}
