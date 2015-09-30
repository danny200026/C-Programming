#define Max 7               //這裡在輸入時,不要加"="或";"!!!! 

int main()
{
    int a,all=0,s[Max];
    
    for(a=0;a<Max;a++)
    {
        printf("請輸入第%d個學生的分數:",a+1);
        scanf("%d",&s[a]);
        all+=s[a];
    }
        printf("*****結果*****\n");
    for(a=0;a<Max;a++)
    {
        printf("第%d個學生的分數是:%d\n",a+1,s[a]);
    }
    
    printf("學生的總分為:%d\n",all);
    printf("學生的平均是:%.2f\n",(float)all/Max); 
   
    system("pause");
    return 0;
}
