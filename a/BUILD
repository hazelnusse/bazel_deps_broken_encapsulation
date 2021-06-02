# A header only library that is only used in the implementation of the 'a' library.
# This should not be exposed to *anybody* besides 'a'.
cc_library(
    name = 'a_impl',
    hdrs = ['a_impl.hpp'],
    visibility = ['//visibility:private'],
)

# A simple 'a' library which depends on 'a_impl' to do its dirty deeds.
# The only allowed client/consumer of 'a' are targets in the 'b' package.
cc_library(
    name = 'a',
    srcs = ['a.cpp'],
    hdrs = ['a.hpp'],
    deps = [':a_impl'],
    visibility = ['//b:__pkg__'],
)
