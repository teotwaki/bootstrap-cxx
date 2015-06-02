#include "log.hh"

void init_logging() {
  google::InitGoogleLogging(PACKAGE_NAME);

  DLOG(INFO) << "Logging framework initialised";
}
