#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef __unix__ /* ??? Is that good enough? */
#include <sys/types.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#ifndef MAP_ANON
#ifdef MAP_ANONYMOUS
#define MAP_ANON MAP_ANONYMOUS
#else
#define MAP_ANON MAP_FILE
#endif
#endif
#ifndef MAP_FILE
#define MAP_FILE 0
#endif
#ifndef MAP_FIXED
#define MAP_FIXED 0
#endif
#endif

#define MAP_START (void *)0x7fff8000
#define MAP_LEN 0x10000

#define OFFSET (MAP_LEN/2 - 2 * sizeof (char));

/*
extern void *m2_mmap(void *addr, size_t length, int prot, int flags,
					 int fd, off_t offset);


#if defined(KLARUM)
#define mmap m2_mmap
#endif
*/

void f (int s, char *p)
{
  int i;
  for (i = s; &p[i] < &p[40] && i >= 0; i++)
    {
      p[i] = -2;
    }
}

int main ()
{
#ifdef MAP_ANON
  char *p;
  int dev_zero;

  dev_zero = open ("/dev/zero", O_RDONLY);
  /* -1 is OK when we have MAP_ANON; else mmap will flag an error.  */
  if (INT_MAX != 0x7fffffffL || sizeof (char *) != sizeof (int))
    exit (0);
  p = mmap (MAP_START, MAP_LEN, PROT_READ|PROT_WRITE,
			MAP_ANONYMOUS|MAP_FIXED|MAP_PRIVATE, dev_zero, 0);

  //printf ("MAP_LEN = %u, p=%p\n", MAP_LEN, p);
  printf ("MAP_LEN = %u, p=%p\n", MAP_LEN, p);
  if (p != (char *)-1)
    {
      //p += OFFSET;
      p[39] = 0;
      f (0, p);
      if (p[39] != (char)-2)
	abort ();
      p[39] = 0;
      f (-1, p);
      if (p[39] != 0)
	abort ();
    }
#endif
  return 0;
}
