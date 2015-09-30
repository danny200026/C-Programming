int a,n,result=1;

void ans(int na)
{
    if(na<=0)
        printf("%d!=%d\n",a,result);
    else
    {    
        result=result*na;
        ans(--na);
    }
}
int main()
{
    printf("請輸入一個整數:");
    scanf("%d",&a);
    ans(a); 
    
    system("pause");
    return 0;
}
