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

//    system("PAUSE"); // �� �Ⱦ��� ������â �ݹ� ����� 
//    return 0;
