#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char *argv[])
//{
    int main(void)
    {
        int i;
        int temp = 1; // �̷��� �ۿ��� ������ ����� 1,2,3,4,5 �� ����� �ȴ�.  
        
        for (i=0; i<5; i++)
        {
            //int temp = 1; �̰� �ۿ��� ��������� ��. �ƴϸ� static int temp = 1; �� �ؼ� ������ �����Ⱓ�� �÷��� ���� ���� 
            printf("temp = %d\n", temp);
            temp++;
        }
     
        
             
  
  system("PAUSE");	
  return 0; }
//}
