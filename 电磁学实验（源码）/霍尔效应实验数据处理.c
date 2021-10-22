#include<stdio.h>
int main()
{
    int i=1;
    while(i==1)
       {
        float u1,u2,u3,u4,uh;
        printf("输入u1到u4\n");
        scanf("%f%f%f%f",&u1,&u2,&u3,&u4);
        uh=(u1+u2+u3+u4)/4;
        printf("UH=%f\n",uh);
        printf("是否继续计算磁感应强度B?\n是，请输入1，否，请输入0\n");
        int answer;
        scanf("%d",&answer);
        if (answer==1)
            {
                float Is,Kh,B;
                printf("请输入工作电流Is，霍尔系数KH\n");
                scanf("%f%f",&Is,&Kh);
                B=uh/(Kh*Is);
                printf("B=%f",B);
            }
        else if(answer==0)
        {}
        else printf("错误\n");
        printf("是否继续计算别的数据?是，请输入1，否，请输入0\n");
        scanf("%d",&i);
        }
    printf("感谢使用，再见");
    return 0;
}