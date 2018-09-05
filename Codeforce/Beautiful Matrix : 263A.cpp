#include<iostream>
#include<cstdio>
int main()
{
    int arr[5][5];
    int i,j,k,l;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                if(arr[i][j]==1)
                {
                    k=i;
                    l=j;
                }
        }
    }
    int brr[5][5] = {4,3,2,3,4,3,2,1,2,3,2,1,0,1,2,3,2,1,2,3,4,3,2,3,4};
    printf("%d\n",brr[k][l]);
    return 0;
}
