#include <stdio.h>

void main() {
    union bjob {
      char name;
      float salary;

    }bjob;

    struct hjob{
      char name[32];
      float salary;

    }hjob;

    printf("Size of union is %ld byte\n", sizeof(bjob));
    printf("Size of structure = %ld byte\n", sizeof(hjob));




    } 