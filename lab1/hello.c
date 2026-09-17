#include <stdio.h>
#include <omp.h>

int main()
{
   #pragma omp parallel
   {
   printf("Hello from thread %d\n", omp_get_thread_num());
   //#pragma omp barrier
   #pragma omp critical
   printf("Bye from thread %d\n", omp_get_thread_num());
   }

  return 0;
}
