#include <types.h>
#include <lib.h>
#include <thread.h>

int sys_reversestring(const char * string, int length) {
    int i;
        
    // start at the end of the string, walk forward
    for (i = length - 1; i >= 0; i--) {
        // print individual character
        kprintf("%c", string[i]);
    }

    //print newline
    kprintf("\n");
        
    // if length is multiple of 3, return 0;
    if (length % 3 == 0) {
      return 0;
    }
        
    // otherwise, return 1.
    return 1;
}

int sys_exit(int code) {
    kprintf("thread exit: code %d\n", code);
    thread_exit(code);
    
    // Shouldn't ever reach here.
    return 0;
}

int sys_printint(int c) {
    kprintf("print_int:  %d\n", c);

    // return 0 if c is a multiple of 5.
    if (c % 5 == 0) {
      return 0;
    }

    return 1;
}                           

