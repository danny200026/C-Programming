int main()
{
    int a,max,min,ma=1,mi=1,g[4];
    
    for(a=0;a<4;a++)
    {
        printf("�п�J��%d��P�Ǫ�����\n",a+1); 
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
    
    printf("��%d��P�ǳ̰�����:%d\n",ma,max);
    printf("��%d��P�ǳ̧C����:%d\n",mi,min);
    
    system("pause");
    return 0;
}
