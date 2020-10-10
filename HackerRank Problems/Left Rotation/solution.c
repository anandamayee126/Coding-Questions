#include<stdio.h>
main(){
    long int i,A[100000],d,n;
    scanf("%ld %ld",&n,&d);
    if(d<=n){
    for(i=0;i<n;i++)
       scanf("%ld",&A[i]);
    for(i=d;i<n;i++){
        printf("%ld ",A[i]);
    }
    for(i=0;i<d;i++){
        printf("%ld ",A[i]);
    }
    }
    return 0;
}
