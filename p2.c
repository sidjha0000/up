#include <stdio.h>
#include <unistd.h>
int main() {
// Check and display _POSIX_VERSION constant
printf("_POSIX_VERSION constant: %ld\n", _POSIX_VERSION);
// Print POSIX defined configuration options supported on the system
#ifdef _POSIX_ASYNCHRONOUS_IO
printf("POSIX Asynchronous I/O supported\n");
#endif
#ifdef _POSIX_BARRIERS
printf("POSIX Barriers supported\n");
#endif
#ifdef _POSIX_CHOWN_RESTRICTED
printf("POSIX Chown Restricted supported\n");
#endif
#ifdef _POSIX_CLOCK_SELECTION
printf("POSIX Clock Selection supported\n");
#endif
#ifdef _POSIX_CPUTIME
printf("POSIX CPU Time supported\n");
#endif
#ifdef _POSIX_FSYNC
printf("POSIX Fsync supported\n");
#endif
#ifdef _POSIX_IPV6
printf("POSIX IPv6 supported\n");
#endif
#ifdef _POSIX_JOB_CONTROL
printf("POSIX Job Control supported\n");
#endif
#ifdef _POSIX_MAPPED_FILES
printf("POSIX Mapped Files supported\n");
#endif
#ifdef _POSIX_MEMLOCK
printf("POSIX Memlock supported\n");
#endif
#ifdef _POSIX_MEMLOCK_RANGE
printf("POSIX Memlock Range supported\n");
#endif
#ifdef _POSIX_MEMORY_PROTECTION
printf("POSIX Memory Protection supported\n");
#endif
#ifdef _POSIX_MESSAGE_PASSING
printf("POSIX Message Passing supported\n");
#endif
#ifdef _POSIX_MONOTONIC_CLOCK
printf("POSIX Monotonic Clock supported\n");
#endif
#ifdef _POSIX_NO_TRUNC
printf("POSIX No Truncation supported\n");
#endif
#ifdef _POSIX_PRIORITIZED_IO
printf("POSIX Prioritized I/O supported\n");
#endif
#ifdef _POSIX_PRIORITY_SCHEDULING
printf("POSIX Priority Scheduling supported\n");
#endif
#ifdef _POSIX_RAW_SOCKETS
printf("POSIX Raw Sockets supported\n");
#endif
#ifdef _POSIX_REALTIME_SIGNALS
printf("POSIX Real-time Signals supported\n");
#endif
return 0;
}
