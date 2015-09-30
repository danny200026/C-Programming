void re(int a)
{
    printf("%d\n",a);
    re(++a);   //»¼°j 
}

int main()
{
    re(10);   
    system("pause");
    return 0;
}
