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
    printf("�п�J�@�Ӿ��:");
    scanf("%d",&a);
    ans(a); 
    
    system("pause");
    return 0;
}
