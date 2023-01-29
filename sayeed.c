#include <stdio.h>
int main(){
int a[10],c[10];
int i,n=5;
a[0]= 2;
a[1]= 3;
a[2]= 4;
a[3]= 5;

printf("%d%d%d%d%d\n", a[0],a[1],a[2],a[3],a[4]);

int b[10] = {1,2,3,4,5};

printf("%d%d%d%d%d\n", b[0],b[1],b[2],b[3],b[4]);

for(i=0; i<=n; i++){
    scanf("please input 5 numbers-%d",&c[i]);
}
for(i=0;i<=n;i++){
    printf("HERE'S THE VALUES -%d",c[i]);
}


return 0;
}
