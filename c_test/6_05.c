int main()
{
    int a,max,min,g[4];
    
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
        max=g[a];
    }
    
    for(a=0;a<4;a++)
    {
        if(g[a]<min)
        min=g[a];
    }
    
    printf("�̰�����:%d\n",max);
    printf("�̧C����:%d\n",min); 
    system("pause");
    return 0;
}
