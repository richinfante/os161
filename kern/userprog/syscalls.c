#include <types.h>
#include <lib.h>
#include <thread.h>

int syscall_exit(int code) {
  thread_exit(code);
  kprintf("Exited: code %d", code);
  return 0;
}

int syscall_printint(int c) {
  kprintf("Printed: %d", c);
  return c % 5 == 0;
}
