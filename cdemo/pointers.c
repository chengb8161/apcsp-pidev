#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  int d;
  int* ptrtod;

  ptrtod = &d;

  d = 5.67;
  printf("The value of d is %d\n", d);

  *ptrtod = 6;
  printf("The value of d is %d\n", d);

  printf("The value of ptrtod is %d\n", ptrtod);
  printf("It stores the value %d\n", *ptrtod);
  printf("The address of d is %d\n", &d);
  
  int e;
  int* ptrtoe;

  ptrtoe = &e;

  e = 3.45;
  printf("The value of e is %d\n", e);

  *ptrtoe = 6;
  printf("The value of e is %d\n", e);

  printf("The value of ptrtoe is %d\n", ptrtoe);
  printf("It stores the value %d\n", *ptrtoe);
  printf("The address of e is %d\n", &e);

  int temp = d;
  d = e;
  e = temp;

  printf("The value of d is %f\n", d);
  printf("The value of e is %f\n", e);
}
