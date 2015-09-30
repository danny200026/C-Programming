void myex(int a,int b,int tmp)
{
    
    tmp=a;
    a=b;
    b=tmp;
    printf("後來a=%d,b=%d\n",a,b); 
}


int main()
{
    int a,b,tmp;
    scanf("%d %d",&a,&b);
    
    printf("原本a=%d,b=%d\n",a,b);
    myex(a,b,tmp);
    
    system("pause");
    return 0;
}
