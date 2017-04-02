
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

  // strings with length divisible by 3 return 0
  assert(reversestring("yeh", 3) == 0);
  assert(reversestring("!olleh!", 6) == 0);

  // others return 1
  assert(reversestring("!gnikrow si siht", 16) == 1);
  assert(reversestring("):", 2) == 1);

  // Exit.
	_exit(0);
  return 0;
}
