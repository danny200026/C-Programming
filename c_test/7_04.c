int main()
{
    int a,b,tmp;
    scanf("%d %d",&a,&b);
    
    
    
    printf("原本a=%d,b=%d\n",a,b);
    tmp=a;
    a=b;
    b=tmp;
    printf("後來a=%d,b=%d\n",a,b); 
    
    
    
    system("pause");
    return 0;
}
