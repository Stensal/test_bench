f(long a){return (--a > 0);}
main()
{
  if(f(0x80000000L)==0) {
    
    printf ("%d abort\n", f(0x80000000L));
    abort();
  }
  exit(0);
}
