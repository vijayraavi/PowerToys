#include "pch.h"
#include "restart_elevated.h"
#include "common/common.h"

static bool restart_as_elevated = false;

void schedlue_restart_as_elevated() {
  restart_as_elevated = true;
}
bool restart_as_elevated_if_scheduled() {
  if (restart_as_elevated) {
    return run_elevated(get_process_path(GetCurrentProcessId()), {});
  } else {
    return false;
  }
}
