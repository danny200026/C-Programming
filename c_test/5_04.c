int main()
{
    int int1,int2;
    char char1;
    printf("�п�J��ӼƦr��+-*/%�Ÿ��i��B��(�r�P�r�����n�[�ť�!!)\n"); 
    printf("�Ҧp:45 + 45\n"); 
    scanf("%d %c %d",&int1,&char1,&int2);
    
    
    switch(char1)
    {
        case '+':    //�p�G�ﶵ�O�r��,�n�b�r�������[��޸�!!!    
            printf("%d+%d=%d\n",int1,int2,int1+int2);
            break;
        case '-':
            printf("%d-%d=%d\n",int1,int2,int1-int2);
            break;
        case '*':
            printf("%d*%d=%d\n",int1,int2,int1*int2);
            break;
        case '/':
            printf("%d/%d=%f\n",int1,int2,(float)int1/int2);
            break;
        case '%':
            printf("%d%%%d=%d\n",int1,int2,int1%int2);
            break;
            default:
                printf("��J���~!!!\n");
    }                  
    system("pause");
    return 0;
}
