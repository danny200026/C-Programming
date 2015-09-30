void myex(int *a,int *b,int *tmp)
{    
    *tmp=*a;
    *a=*b;
    *b=*tmp;    
}

int main()
{
    int a,b,tmp;
    scanf("%d %d",&a,&b);
    
    printf("原本a=%d,b=%d\n",a,b);
    myex(&a,&b,&tmp);
    printf("後來a=%d,b=%d\n",a,b); 
    
    system("pause");
    return 0;
}
