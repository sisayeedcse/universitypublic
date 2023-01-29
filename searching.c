#include <stdio.h>
int main(){

int i,n=5,j,k=0;
int a[10] = {1,2,3,4,5,6,7,8,9,10};

scanf("%d",&j);

for(i=0;i<=n;i++){
    if(j==a[i]){
        k=1;
    }
}if(k==1){
    printf("Matched");

}else printf("Not matched");






return 0;
}
