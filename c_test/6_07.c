int main()
{
    int a,b,c,tmp,g[5];
    
    for(a=0;a<=3;a++)
    {
        printf("�п�J��%d��P�Ǫ����Z:",a+1);
        scanf("%d",&g[a]);
    }
    
    
    for(a=0;a<=3;a++)
    {
        for(b=0;b<=3;b++)
        {
            if(g[b]>g[a])
            {
                tmp=g[a];
                g[a]=g[b];
                g[b]=tmp;
            }
        }      
    }
    
    printf("**********�ѧC�Ʀܰ������G��*************\n"); 
    
    for(c=0;c<=3;c++)
    {
        printf("%d\n",g[c]);
    }   
                 
    system("pause");
    return 0;
}
