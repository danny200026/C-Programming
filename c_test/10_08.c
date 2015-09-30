int main()
{
    int a=18,x=10,y=13;
    int func1();
    
    printf("In the main().....\n");
    printf("a=%d,%p    x=%d,%p    y=%d,%p\n",a,&a,x,&x,y,&y);
    func1(&a,&x,&y);
    printf("In the main().....\n");
    printf("a=%d,%p    x=%d,%p    y=%d,%p\n",a,&a,x,&x,y,&y);
    
    system("pause");
    return 0;
}


int func1(int a,int *x,int *y)
{
    int tmp;
    
    printf("In the func1()......\n");
    tmp=*x;
    *x=*y;
    *y=tmp;
    
    printf("a=%d,%p    x=%d,%p    y=%d,%p\n",a,&a,x,&x,y,&y);
    
}    
