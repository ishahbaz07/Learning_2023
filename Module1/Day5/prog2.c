#include <stdio.h>
#include <conio.h>
struct complex
{
   float real, imag;
}a, b, c;
   struct complex read(void);
   void write(struct complex);
   struct complex add(struct complex, struct complex);
   struct complex mul(struct complex, struct complex);
void main ()
{
   clrscr();
   printf("Enter the 1st complex number\n ");
   a = read();
   write(a);

   printf("Enter  the 2nd complex number\n");
   b = read();
   write(b);

   printf("Addition\n ");
   c = add(a, b);
   write(c);

   printf("Multiplication\n");
   c = mul(a, b);
   write(c);

   getch();
}
struct complex read(void)
{
   struct complex t;
   printf("Enter the real part\n");
   scanf("%f", &t.real);
   printf("Enter the imaginary part\n");
   scanf("%f", &t.imag);
   return t;
}
void write(struct complex a)
{
   printf("Complex number  is\n");
   printf(" %.1f + i %.1f", a.real, a.imag);
   printf("\n");
}
struct complex add(struct complex p, struct complex q)
{
   struct complex t;
   t.real = (p.real + q.real);
   t.imag = (p.imag + q.imag);
   return t;
}
struct complex mul(struct complex p, struct complex q)
{
   struct complex t;
   t.real=(p.real * q.real) - (p.imag * q.imag);
   t.imag=(p.real * q.imag) + (p.imag * q.real);
   return t;
}