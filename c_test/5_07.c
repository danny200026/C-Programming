int main()
{
    int a=1;
    char ch1;
    
    for(a=1;a<=129;++a)
    {
        ch1=a;
        printf("%c=%d\t",ch1,a);
        
        if(a%8==0)      //��11��M��12��:���p"a%8=0",�n����(�Y�C8�Ӵ��@��)!! 
        printf("\n");
    }   
    printf("%c=%d\n",ch1,a);
    system("pause");
    return 0;
}
