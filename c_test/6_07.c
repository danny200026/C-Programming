int main()
{
    int a,b,c,tmp,g[5];
    
    for(a=0;a<=3;a++)
    {
        printf("請輸入第%d位同學的成績:",a+1);
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
    
    printf("**********由低排至高的結果為*************\n"); 
    
    for(c=0;c<=3;c++)
    {
        printf("%d\n",g[c]);
    }   
                 
    system("pause");
    return 0;
}
