# A simple 'b' library that PRIVATELY depends on 'a' (i.e., b/b.cpp includes a/a.hpp).
# This library may only be depended upon by targets in the 'c' package.
cc_library(
    name = 'b',
    srcs = ['b.cpp'],
    hdrs = ['b.hpp'],
    deps = ['//a'],
    visibility = ['//c:__pkg__'],
)
