#include <types.h>
#include <lib.h>
#include <thread.h>


int sys_reversestring(const char * string, int length) {
        int i;

        for (i = length - 1; i >= 0; i--) {
                kprintf("%c", string[i]);
        }
        kprintf("\n");

        return length % 3 == 0
                ? 0
                : 1;
}

int sys_exit(int code) {
          kprintf("thread exit: code %d\n", code);
          thread_exit(code);

          // Shouldn't ever reach here.
          return 0;
}

int sys_printint(int c) {
        kprintf("print_int:  %d\n", c);

        return c % 5 == 0 ? 0 : 1;
}                           

