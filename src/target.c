/*
 * @author  :  Rajan Khullar
 * @created :  02/14/16
 * @updated :  02/14/16
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  int x;
  for(x = 1; x < argc; x++)
  {
    printf("%s\n", argv[x]);
  }
  return 0;
}
