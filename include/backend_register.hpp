#ifndef _GAMALLOC_BACKEND_REGISTER_
#define _GAMALLOC_BACKEND_REGISTER_

#include <tuple>

static std::tuple<> backends;

enum BackendRegister : int {
  default_backend=0
};

#endif
