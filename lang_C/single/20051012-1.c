extern void abort (void);

struct type 
{
  int *a;
  
  int b:16;
  unsigned int p:9;
} t;

unsigned int 
foo ()
{
  return t.p;
}

int 
main (void)
{
  t.p = 8;
  // the original code makes no sense nwang
  //if (foo (t) != 8)
  if (foo () != 8)
    abort ();
  return 0;
}
