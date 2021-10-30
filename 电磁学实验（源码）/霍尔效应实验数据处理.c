#include<stdio.h>
int main()
{
    int d,i=1;
    while(i==1){
    printf("欢迎来到霍尔效应实验数据处理程序v1.1\n");
    printf("1>进入程序\n2>关于\n输入其他值退出\n");
    scanf("%d",&d);
    switch (d)
        {
            case 1:{
                float u1,u2,u3,u4,uh;
                printf("输入u1到u4(请务必保留小数点)\n");
                scanf("%f%f%f%f",&u1,&u2,&u3,&u4);
                uh=(u1-u2-u3+u4)/4;
                printf("UH=%f\n",uh);
                printf("是否继续计算磁感应强度B?\n1>是\n2>否\n");
                int answer;
                scanf("%d",&answer);
                if (answer==1)
                    {
                        float Is,Kh,B;
                        printf("请输入工作电流Is，霍尔系数KH\n");
                        scanf("%f%f",&Is,&Kh);
                        B=uh/(Kh*Is);
                        printf("B=%f\n",B);
                    }
                else if(answer==2)
                {}
                else printf("错误\n");
                printf("是否继续计算别的数据?\n1>是\n2>否\n");
                scanf("%d",&i);
                break;
                }
            case 2: {
                printf("霍尔效应实验数据处理程序v1.1由骅骅独立开发，开源在GitHub\n有啥建议都可以提\n");
                printf("1>返回\n2>退出\n");
                scanf("%d",&d);
                if (d==2) i=2;
                break;
                }
            default: i=2;
        }
    }
    printf("感谢使用，再见");
    return 0;
}