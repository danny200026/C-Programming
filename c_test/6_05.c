int main()
{
    int a,max,min,g[4];
    
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
        max=g[a];
    }
    
    for(a=0;a<4;a++)
    {
        if(g[a]<min)
        min=g[a];
    }
    
    printf("最高分為:%d\n",max);
    printf("最低分為:%d\n",min); 
    system("pause");
    return 0;
}
