#include<stdio.h>
#include<math.h>
int main(void){
    FILE *fp;
    FILE *ff;
    double x[10],y[10],theta,xd[10],yd[10];
    printf("theta "); scanf("%lf",&theta);
    fp=fopen("gnu.dat","r");
    ff=fopen("gnurot.dat","w");
    for(int i=0;i<10;i++){
        fscanf(fp, "%lf" "%lf", &x[i],&y[i]);
    }
    for(int i=0;i<10;i++){
        fprintf(ff, "%f %f\n",x[i]*cos(theta)-y[i]*sin(theta), x[i]*sin(theta)+y[i]*cos(theta));
        xd[i]=x[i]*cos(theta)-y[i]*sin(theta); yd[i]=x[i]*sin(theta)+y[i]*cos(theta);
    }
    return 0;
}