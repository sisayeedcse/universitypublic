#include <stdio.h>
int main(){
int i,j;
int a[3][3],b[3][3],c[3][3];

// single line grp decl. a[3][3]={1,2,3,4,5,6,7,8,9};
// single line grp with rearrange decl. a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// multi Array with user input

for (i=0; i<3; i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("The values of a are - \n");
for (i=0; i<3; i++){
    for(j=0;j<3;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
for (i=0; i<3; i++){
    for(j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}
printf("The values of b are - \n");
for (i=0; i<3; i++){
    for(j=0;j<3;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
}
printf("The Result is  - \n");
for (i=0; i<3; i++){
    for(j=0;j<3;j++){
        c[i][j] = a[i][j]+b[i][j];
        printf("%d ",c[i][j]);
    }
    printf("\n");
}

return 0;
}
