#include<stdlib.h>

int main (int argc, char ** argv)
{
  int i=0;
  float *array;
  array=realloc(array,((i+1)*sizeof(float)));
  printf ("%p\n", array);
  return 0;
}
