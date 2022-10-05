#include <stdio.h>

extern void dispnum( int );
extern void hello( void );
extern int addnum( int, int );
extern void swapint( int *, int *);

int main(void) {
  printf("Hello World\n");
  dispnum(123);
  hello();
  printf( "%d\n", addnum(2, 5) );

  int a = 10;
  int b = 20;
  swapint(&a, &b);
  printf( "%d : %d\n", a, b );
  return 0;
}
