int main()
{
    int a=10,b=20;
    int *xx,*yy;
    int swap();
    
    xx=&a;
    yy=&b;
    
    printf("In the main()....\n");
    printf("a=%d,%p    b=%d,%p\n",a,&a,b,&b);
    swap(xx,yy);
    printf("a=%d,%p    b=%d,%p\n",a,&a,b,&b);
    system("pause");
    return 0;
}


int swap(int *xx,int *yy)
{
    int tmp;
    tmp=*xx;
    *xx=*yy;
    *yy=tmp;
    
}    
    
    
