int main()
{
    int a=100,b=200;     
    int *ptr1,*ptr2;
    
    ptr1=&a;
    ptr2=&b;
    
    printf("before assignment....\n");
    printf("a=%d,%p    *ptr1=%d,%p,%p\n",a,&a,*ptr1,ptr1,&ptr1);
    printf("b=%d,%p    *ptr2=%d,%p,%p\n",b,&b,*ptr2,ptr2,&ptr2);
    
    
    *ptr2=*ptr1;
    printf("\nafter assignment....\n");
    printf("a=%d,%p    *ptr1=%d,%p,%p\n",a,&a,*ptr1,ptr1,&ptr1);
    printf("b=%d,%p    *ptr2=%d,%p,%p\n",b,&b,*ptr2,ptr2,&ptr2);
    
   
    *ptr1=*ptr1+1;
    printf("\nafter assignment....\n");
    printf("a=%d,%p    *ptr1=%d,%p,%p\n",a,&a,*ptr1,ptr1,&ptr1);
    printf("b=%d,%p    *ptr2=%d,%p,%p\n",b,&b,*ptr2,ptr2,&ptr2);
    
    
    ptr1=ptr1+1;
    printf("\nafter assignment....\n");
    printf("a=%d,%p    *ptr1=%d,%p,%p\n",a,&a,*ptr1,ptr1,&ptr1);
    printf("b=%d,%p    *ptr2=%d,%p,%p\n",b,&b,*ptr2,ptr2,&ptr2);
    
    system("pause");
    return 0;
}
