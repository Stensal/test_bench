/* { dg-do run } */

extern void abort ();
extern void exit (int);
struct bac { unsigned char c:8; }  c = { 255 };
struct bas { unsigned short s:16; } s = { 65535 };
struct baz { unsigned int a:2, b:4, c:32;} y = { 7, 8, 9};

int main()
{
       if (c.c != 255)
         abort ();
       if (s.s != 65535)
         abort ();

       if (y.a != 3) 
         abort ();

       if (y.b != 8)
         abort ();

       if (y.c != 9)
         abort ();
       exit(0);
}
