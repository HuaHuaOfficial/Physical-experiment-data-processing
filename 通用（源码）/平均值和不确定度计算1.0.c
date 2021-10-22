#include<stdio.h>
#include<math.h>
float ua(float a[],float t,int n)
{
    float u,avg,sum=0;
    float s=0;
    int i;
    for(i=0;i<n;i++)
        s+=a[i];
    avg=s/n;
    for(i=0;i<n;i++)
        sum=sum+(a[i]-avg)*(a[i]-avg);
    u=t*sqrt(sum/n*(n-1));
    return u;
}
int main()
{
    float a[9];
    int i,n;
    float u,t,avg,c,s=0;
    printf("输入数的个数\n");
    scanf("%d",&n);
    printf("输入数据\n");
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);
    switch(n){         /*选择对应的t值*/
    case 3:t=1.32;break;
    case 4:t=1.20;break;
    case 5:t=1.14;break;
    case 6:t=1.11;break;
    case 7:t=1.09;break;
    case 8:t=1.08;break;
    case 9:t=1.07;break;
    case 10:t=1.06;break;
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    u=ua(a,t,n);
    printf("这几个数的算术平均值为%f\n",avg);
    printf("这几个数的A类不确定度为%f(p=68.3%%)\n",u);
    return 0;
}