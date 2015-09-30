int main()
{
    int a,max,min,ma=1,mi=1,g[4];
    
    for(a=0;a<4;a++)
    {
        printf("請輸入第%d位同學的分數\n",a+1); 
        scanf("%d",&g[a]);
    }     
   
    max=g[0];
    min=g[0];
    
    for(a=0;a<4;a++)
    {
        if(g[a]>max)
        {
        max=g[a];
        ma=a+1;
        }
    }
    
    for(a=0;a<4;a++)
    {
        if(g[a]<min)
        {
        min=g[a];
        mi=a+1;
        }
    }
    
    printf("第%d位同學最高分為:%d\n",ma,max);
    printf("第%d位同學最低分為:%d\n",mi,min);
    
    system("pause");
    return 0;
}
