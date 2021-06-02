#pragma once

// The following two #include's *definitely* should not work since b/b.cpp
// (a/a.cpp) depending on a/a.hpp (a/a_impl.hpp) is an implementation detail
// which clients should be insulated from.
#include "a/a.hpp"
#include "a/a_impl.hpp"

// Of course, we can and should be able to depend on 'b' here, since we
// explicitly declare a bazel dependency on b. This doesn't transitively pull in
// a/a.hpp or a/a_impl.hpp since those are *implementation* details of b/b.cpp
// and not exposed in b's interface.
#include "b/b.hpp"

long int c_func();
