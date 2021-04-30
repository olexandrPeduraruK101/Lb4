#include <stdio.h>
#include <math.h>

int main (void){
int a,b;
float c,g;

while(1){
    printf("\n Vedit cile chislo a:  ");
    scanf("%d",&a); 
    printf(" Vedit cile chislo b:  ");
    scanf("%d",&b);
    g = (float) (3*(pow(a,2)-3*b)); 
if (g == 0){ printf("\n\nNull u znamenuku. Poprobuy sche raz...\n\n"); g=1;
continue;}
else {c =(float) ((2*cos(a)-pow(b,2))/(g));

printf("\n\n\nVidpovid:\t %.2f\n\n\n\n",c);break;
}


}
return 0;}