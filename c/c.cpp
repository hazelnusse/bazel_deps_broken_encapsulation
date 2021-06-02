#include "c/c.hpp"

long int c_func() {
  // The following two lines are examples of broken encapsulation.
  // A client should never be able to call implementation details of
  // dependencies (direct or transitive). This might not seem like a big deal to
  // the author of the following two lines, but it is a huge detriment for the
  // *implementators* of libraries because they have no mechanism with teeth
  // (i.e., make it not compile) to prevent undesired dependencies from
  // appearing over time. A consequence is significantly more work when the time
  // comes to change the implementation of library 'a' -- all clients, and the
  // clients clients, and the clients clients clients, ..., must be updated to
  // reflect the change to the implementation details of 'a', since changing the
  // implementation of 'a' can very directly break client code. This gets
  // particularly painful the "further" apart the author of library 'a' and the
  // client who comes to depend on implementation details of library 'a' are.
  auto some_data = a_func();
  auto some_other_data = a_template_func<'k'>();

  return 42l + some_data + some_other_data;
}
