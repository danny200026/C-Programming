int main()
{
    int a,i,result=1;
    
    printf("�п�J�@�Ӿ��:");
    scanf("%d",&a);
     
    for(i=a;i>=1;i--)
        result=result*i;
    printf("%d!=%d",a,result); 
    system("pause");
    return 0;
}
