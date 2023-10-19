#include <stdio.h>
#include <stdlib.h>

void f(void);
int i;

int main(int argc, char *argv[])
{
    for (i=0; i<5; i++)
    {
        f();
    }
    
    system("PAUSE");
    return 0;
}

void f(void)
{
     for (i=0; i<10; i++)
        printf("#");

    
//    system("PAUSE"); // 얘 안쓰면 검정색창 금방 사라짐 
//    return 0;
}


             
  
  //system("PAUSE");	
  //return 0; }
//}
