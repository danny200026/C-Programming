int main()
{   
    int a=17,*ptri;
    int func();
    
    ptri=&a;
    printf("a=%d,%p      *ptri=%d,%p\n",a,&a,*ptri,ptri);
    func(a,&a);
    
    system("pause");
    return 0;
}


int func(int a,int *b)
{
    printf("a=%d,%p      *b=%d,%p\n",a,&a,*b,b);    
}    
