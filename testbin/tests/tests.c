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
	
  // Print the int
  assert(printint(5) == 0);
  assert(printint(6) == 1);
 
  assert(reversestring("hey", 3) == 0);
  assert(reversestring("hello", 5) == 1);

  // Exit.
	_exit(0);
  return 0;
}
