#include <unistd.h>
#include <stdio.h>

void assert(int condition) {
  if (!condition) {
    _exit(1);
  }
}

int
main(int argc, char **argv)
{
	
  // multiples of 5 return 0
  assert(printint(5) == 0);
  assert(printint(10) == 0);

  // others return 1
  assert(printint(6) == 1);

  // Exit.
	_exit(0);
  return 0;
}



