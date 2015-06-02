#include "log.hpp"

void init_logging() {
  google::InitGoogleLogging(PACKAGE_NAME);

  DLOG(INFO) << "Logging framework initialised";
}
