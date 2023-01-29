#include <stdio.h>
int main(){

int i,n,j;
int num[10];
printf("Enter N value- ");
scanf("%d",&n);
for (i=0; i<n; i++){
    scanf("%d",&num[i]);
}
for (i=0; i<n; i++){
    for(j=i+1;j<n;j++){
    if(num[i]>num[j]){
        int t = num[i];
        num[i] = num[j];
        num[j] = t;
    }
    }
    }
for(i=0;i<n;i++){
        printf("\nNow the sorted list is- %d\n",num[i]);
    }



return 0;
}
