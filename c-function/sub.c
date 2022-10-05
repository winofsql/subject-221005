void dispnum( int );
void hello( void );
int addnum( int, int );
void swapint( int *, int *);

int addnum( int a, int b ) {
  int x;
  x = a + b;
  return x;
}

void hello(void) {
  printf("Hello World\n");
  dispnum(100);
}

void dispnum( int a ) {

  printf("引数の値は%d\n", a);
  return;

}

void swapint( int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
