int main()
{
    int a=1;
    char ch1;
    
    for(a=1;a<=129;++a)
    {
        ch1=a;
        printf("%c=%d\t",ch1,a);
        
        if(a%8==0)      //第11行和第12行:假如"a%8=0",要換行(即每8個換一行)!! 
        printf("\n");
    }   
    printf("%c=%d\n",ch1,a);
    system("pause");
    return 0;
}
