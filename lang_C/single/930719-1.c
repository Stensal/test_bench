int
f (foo, bar, com)
{
  unsigned align = 0; //fixed by Stensal Inc.
  if (foo)
    return 0;
  while (1)
    {
      switch (bar)
	{
	case 1:
	  if (com != 0)
		  return align; // reported by Klaram, an uninitialized value is assigned
	  *(char *) 0 = 0;
	}
    }
}

main ()
{
  f (0, 1, 1);
  exit (0);
}
