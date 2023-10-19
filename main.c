#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int flag = 1;
 int y; //y가 while 문 밖에도 존재해야 한다.  
 while(flag!=0)
 {
     y = 3;
     flag = 0;
 }
 y = 4;
  
  system("PAUSE");	
  return 0;
}
