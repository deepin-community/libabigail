// Compile with:
// gcc -gctf -shared -o libobj-v0.so obj-v0.c

struct S0
{
  int  mem0;
  char mem1;
};

struct S1
{
  int mem2;
};

void
bar(struct S0 *s)
{}

void
foo(struct S1 *s)
{}
