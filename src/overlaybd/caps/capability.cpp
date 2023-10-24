#include "capability.h"
#include <stdio.h>

CapabilitiesChecker::CapabilitiesChecker() {
}

CapabilitiesChecker::~CapabilitiesChecker() {
}

bool CapabilitiesChecker::hasCapability(cap_value_t capability) {
    // Get the process ID
    pid_t pid = getpid();

    // Get the capabilities of the process
    cap_t caps = cap_get_pid(pid);
    if (caps == NULL) {
        return false;
    }

    // Check for a specific capability
    cap_flag_value_t flag;
    if (cap_get_flag(caps, capability, CAP_EFFECTIVE, &flag) != 0) {
        cap_free(caps);
        return false;
    }

    cap_free(caps);
    return flag == CAP_SET;
}
