void re(int a)       
{
    if(a==100)
        printf("finish\n");
    else
    {
        printf("%d\n",a);
        re(++a);   
    }
       
}

int main()
{
    re(10);   
    
    system("pause");
    return 0;
}
