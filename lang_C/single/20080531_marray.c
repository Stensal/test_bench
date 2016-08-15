int main ()
{
  int a[2][100];

  int i = 0, j = 1;

  a[i][j] = 0;

  j = a[i][j];

  if (j != 0) 
    abort ();

  return 0;
}
