#include <stdio.h>
#include <stdlib.h>

int inc(int counter); 
int main(int argc, char *argv[])
{
    //int main(void)
    //{
      int i = 10;
      printf("�Լ� ȣ���� i = %d\n", i);
      i = inc(i); //�׳� inc(i); ������ �ǵ���� �ȵȴ�.  
      printf("�Լ� ȣ���� i = %d\n", i);
      
      system("PAUSE"); 
      return 0;
}
    
int inc(int counter)
{
        counter++; // �긦 ȿ�������� �ϰ������ i=inc(i); �� �ٲ���� �Ѵ�.  
        return counter; // ����Ѱ� ������ ���� �� ���. 
} 
        
             
  
  //system("PAUSE");	
  //return 0; }
//}
