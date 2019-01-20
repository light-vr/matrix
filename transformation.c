#include<stdio.h>
#include<math.h>
#define N 100
int main(void){
    int n;
    double x[N],y[N],mat[2][2];
    printf("What is number of coordinates to enter?\n"); scanf("%d",&n);
    printf("please enter 2x2 transform matrix\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%lf",&mat[i][j]);
        }
    }
    printf("enter cood[x] [y]\n");
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&x[i],&y[i]);
    }
    printf("output result\n");
    for(int i=0;i<n;i++){
        printf("%lf %lf\n",mat[0][0]*x[i]+mat[0][1]*y[i],mat[1][0]*x[i]+mat[1][1]*y[i]);
    }
    return 0;
}