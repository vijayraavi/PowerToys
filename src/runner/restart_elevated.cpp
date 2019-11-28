#include "pch.h"
#include "restart_elevated.h"
#include "common/common.h"

enum State {
  None,
  RestartAsElevated,
  RestartAsNonElevated
};
static State state = State::None;

void schedule_restart_as_elevated() {
  state = RestartAsElevated;
}

void schedule_restart_as_non_elevated() {
  state = RestartAsNonElevated;
}

bool restart_if_scheduled() {
  switch (state) {
  case RestartAsElevated:
    return run_elevated(get_process_path(GetCurrentProcessId()), {});
  case RestartAsNonElevated:
    return run_non_elevated(get_process_path(GetCurrentProcessId()), L"--dont-elevate");
  default:
    return false;
  }
}
