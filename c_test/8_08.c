int main()
{
    int a=0,i=0,result=1;
    
    printf("�п�J�@�Ӿ��:");
    scanf("%d",&a);
     
    i=a;
    while(i>=1)
    {
        result=result*i;
        i--;
    } 
    printf("%d!=%d\n",a,result);   
    system("pause");
    return 0;
}
