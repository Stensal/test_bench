extern void abort();
typedef void (*frob)();
frob f[] = {abort};
main()
{
  exit(0);
}
