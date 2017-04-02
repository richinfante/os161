#include <unistd.h>

int
main(int argc, char **argv)
{
	
  // Print the int
  int res = printint(22);

  // Print the response code
  printint(res);
 
 // const char s = "hello, world";

  reversestring("hey", strlen("hey"));
  // Exit.
	_exit(0);
  return 0;
}
