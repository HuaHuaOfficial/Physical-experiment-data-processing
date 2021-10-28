/*1.1版本新增计算完成后不立即退出，而是课选择是否计算其他数据*/
/*1.2版本新增关于*/
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
    int d,answer=1;
    printf("欢迎来到平均值和不确定度计算器v1.2\n");
    printf("1>进入程序\n2>关于\n");
    scanf("%d",&d);
    while (answer==1){
    switch (d)
        {
        case 1:{
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
                printf("是否继续计算其他数据？\n是，请输入1\n否，请输入2\n");
                scanf("%d",&answer);
                if(answer!=1) break;
                }
        case 2:
            printf("均值和不确定度计算器v1.2由骅骅独立开发，开源在GitHub\n有啥建议都可以提\n");
            printf("1>返回\n2>退出\n");
            scanf("%d",&answer);
            break;
        default: break;
        }
    }
    printf("感谢使用，再见");
    return 0;
} 