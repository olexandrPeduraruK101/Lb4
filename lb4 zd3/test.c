#include "stdio.h"// бібліотеки//
#include "math.h"

int main (void){//
int j, i, n;
float x, s, p ; // вводим змінні 
while(1){
    
printf("\n\tVvedit naturalne chuclo n =  ");
scanf("%d",&n);
printf("\tVvedit chuclo  x =  ");
scanf("%f",&x);

if(x==0){printf("\nNull u znamenuku. Vedu druge znachennya x ...\n"); x =1;continue;} 
else{
    
for (i = 1; i <= n; i++)//задаєм значення 1 
{ 
for (s = 1, j = 1;j <= n-1; j++) // задаєм значення 2 
s +=(float) j/x;//рішення  що з боку
}
p +=(float) s;//відповідь
printf("\n\t\tVidpovid = %.3f\n\n",p );//вивід відповіді
break;
}
}
}
