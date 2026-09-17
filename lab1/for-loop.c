#include <stdlib.h>
#include <stdio.h>

#include <omp.h>

int 
main()
{
  int i;

  for(i=0; i < 40; i++)
    printf("%d computes %i\n",omp_get_thread_num(),i);

  return 0;
}
