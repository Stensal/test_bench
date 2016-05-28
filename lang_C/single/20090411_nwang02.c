extern int printf (const char * fmt, ...);

int foo ()
{
 static int beenhere = 0;
 beenhere++;
 return beenhere > 1;
}
int main (int argc, char ** argv)
{
    int a;

    for (;;)
    {
      a = foo ();
      if (a) return 0;

      switch (a)
      {
        case 1: printf ("case 1\n");
        default: 
             printf ("default\n");
             break;
      }
    }
   return 0;
}
