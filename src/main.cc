#include "main.hh"

int main() {
  init_logging();

  DLOG(INFO) << PACKAGE_NAME << " starting up";
  do_something();

  DLOG(INFO) << "Everything done. Shutting down.";
  return 0;
}
