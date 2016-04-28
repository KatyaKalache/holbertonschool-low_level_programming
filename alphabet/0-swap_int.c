int main(void)
{
  int a;
    int b;

    a=1;
    b=2;
    printf("a=%d, b=%d\n", a, b);
    swap_int (&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
