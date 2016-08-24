#include <stdio.h>

typedef struct TypeToken
{
  int Handle;
} tokentype;

typedef struct CppObjTypeDesc
{
  int Handle;
} cppobjtype;


int test(cppobjtype *CppObject, tokentype *Anchor)
{
  // reported by Klaram that uninitialized value is assigned
  CppObject->Handle = Anchor->Handle;
  return 1;
}

int main()
{
  cppobjtype CppObject;
  tokentype Anchor;

  // fixed by Stensal Inc. 
  Anchor.Handle = 0;

  printf("%d\n", test(&CppObject, &Anchor));

  return 0;
}
