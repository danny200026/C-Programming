int main()
{
    int a=5,b=10,tmp;
    
    printf("對調前:a=%d,b=%d\n",a,b);
    
        tmp=a;
        a=b;
        b=tmp;
         
    printf("對調後:a=%d,b=%d\n",a,b); 
    system("pause");
    return 0;
}
