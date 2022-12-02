#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


void b()
{
 int i;
 time_t secondes;
 struct tm instant;
 time(&secondes);
 instant=*localtime(&secondes);
printf(" %d:%d:%d\n", instant.tm_hour, instant.tm_min, instant.tm_sec); 
}
int main (void)
{
    b();

return 0;
}
