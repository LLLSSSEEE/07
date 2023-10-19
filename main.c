#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char *argv[])
//{
    int main(void)
    {
        int i;
        int temp = 1; // 이렇게 밖에서 선언을 해줘야 1,2,3,4,5 가 출력이 된다.  
        
        for (i=0; i<5; i++)
        {
            //int temp = 1; 이걸 밖에서 선언해줘야 함. 아니면 static int temp = 1; 로 해서 변수의 생존기간을 늘려줄 수도 있음 
            printf("temp = %d\n", temp);
            temp++;
        }
     
        
             
  
  system("PAUSE");	
  return 0; }
//}
