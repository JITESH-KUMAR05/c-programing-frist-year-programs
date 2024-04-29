 
#include <stdio.h>
#include <string.h>
 
typedef struct book 
{
  int id;
  char name[20];
  int pages;
} status;
 
int main() 
{
  status record;
  record.id=1;
  strcpy(record.name, "wings of fire");
  printf(" Id is: %d \n", record.id);
  printf(" Name is: %s \n", record.name);
  return 0;
  
}