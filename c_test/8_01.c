int main()
{
    int i=2;
    void data();
    
    
    printf("i=%d\n",i);
    data(i);
    printf("i=%d\n",i);
    system("pause");
    return 0;
}


void data(int i)
{
    printf("i=%d\n",i);
    i++;
    printf("i=%d\n",i);
}        
