#include <stdio.h>
#include <stdlib.h>

int inc(int counter); 
int main(int argc, char *argv[])
{
    //int main(void)
    //{
      int i = 10;
      printf("함수 호출전 i = %d\n", i);
      i = inc(i); //그냥 inc(i); 였으면 의도대로 안된다.  
      printf("함수 호출후 i = %d\n", i);
      
      system("PAUSE"); 
      return 0;
}
    
int inc(int counter)
{
        counter++; // 얘를 효과적으로 하고싶으면 i=inc(i); 로 바꿔줘야 한다.  
        return counter; // 계산한걸 밖으로 꺼낼 때 사용. 
} 
        
             
  
  //system("PAUSE");	
  //return 0; }
//}
