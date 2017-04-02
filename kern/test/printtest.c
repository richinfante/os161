#include <types.h>
#include <lib.h>
#include <test.h>



int
printtest(int nargs, char **args)
{
  printint(22);
  return _exit(0);
}
