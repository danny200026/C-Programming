int main()
{
    char ch1,ch2,ch3,ch4;
    printf("請輸入三個字母\n");
    scanf("%c %c %c",&ch1,&ch2,&ch3);
    ch4=ch1+ch2-ch3;
    printf("%d=%c+%c-%c",ch4,ch1,ch2,ch3); 
    system("pause");
    return 0;
}
