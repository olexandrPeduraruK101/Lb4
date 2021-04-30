#include <stdio.h>
#include <math.h>
#define iMAX  20
#define iMIN 10

int main(void) {
      int x,sum,i,kub;
      x = 12;
     
      for(sum=0, i=x; i<=iMAX;  i+=2) sum += i;kub = pow(sum,3);
        printf("\n\tFor : \t         suma parnuh chisel = %d\t kub = %d\n", sum,kub);
      
    kub = 0;
      sum=0;
      i=x-2;
      
      while((i+=2)<=iMAX) sum += i; kub = pow(sum,3);
        printf("\tWhile: \t         suma parnuh chisel = %d\t kub = %d\n", sum,kub);
        
        kub = 0;
      sum=0; 
      i=x;
      do { sum += i;kub = pow(sum,3); } while((i+=2)<=iMAX);
          printf("\tDo-while:\t suma parnuh chisel = %d\t kub = %d\n\n", sum,kub);
          
return 0;
}