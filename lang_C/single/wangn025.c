extern int printf (const char *, ...);

int main ()
{
    if (sizeof ("12345") == 6)
        ; 
    else
        abort ();

    int i;
    
    i = 1;
    if (sizeof (i) == sizeof(int) )
        ;
    else
        abort ();

    exit (0);
}
