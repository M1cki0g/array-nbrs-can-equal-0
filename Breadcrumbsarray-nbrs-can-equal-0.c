#include <stdio.h>
#include <stdlib.h>

int main()
{int t,i,a=1,b=2;
scanf("%d",&t);
while(t--){    
    scanf("%d",&a);
    scanf("%d",&b);
    if((a+2*b)%2==0){
        if(a==0 && b%2 != 0)
            printf("NO\n");
        else
            printf("YES\n");
     }
     else
        printf("NO\n");
}
    return 0;
}
