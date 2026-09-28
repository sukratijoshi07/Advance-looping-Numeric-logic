
#include <stdio.h>

int main()
{  
    int a , b , i , j ,count , largest=0 ;
    printf("Enter the number :");
    scanf("%d %d",&a ,&b);
    for(i=a;i<=b;i++){
        count=0;
        for(j=1;j<=i;j++){
    if(i%j==0){
        count++;
        }
    }
    if(count==2){ 
       largest=i;
    }
    }
    printf("%d",largest);
    return 0 ;
    
}