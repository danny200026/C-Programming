void func1()
{
    static int a=1;
    static char b=1; //"static int a=1","static"�N���R�A��,�[�W��۷������ܼ�
    printf("a=%d  b=%c\n",a,b);
    a++;            //�`�N!!�[�W"stasic"�᪺�ܼ����M���������ܼ�,���O�ä��O�����ܼ�!!!!! 
    b++;
}



int main()
{
    int k;
    
    
    for(k=1;k<=5;k++)
        func1();
            
    
    system("pause");
    return 0;
}
