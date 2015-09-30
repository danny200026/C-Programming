int a,b,t=0,tmp=1;

void res()
{
    
    while(t<b)
    {
        tmp=tmp*a;
        t++;
        res(); 
    }
    
}

int main()
{
    printf("請輸入兩個整數\n");
    scanf("%d %d",&a,&b);
    res();
    
    printf("The power(%d,%d)=%d\n",a,b,tmp);
    
    system("pause");
    return 0;
}
