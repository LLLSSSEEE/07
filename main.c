#include <stdio.h>
#include <stdlib.h>

static int all_files;
extern void sub();

int main(void)
{
    sub();
    printf("%d\n", all_files);
    
    system("PAUSE");
    return 0;
}


//int main(int argc, char *argv[])

//    system("PAUSE"); // 얘 안쓰면 검정색창 금방 사라짐 
//    return 0;
