void re(int a)
{
    if(a==10)
        printf("finish\n");
    else
    {
        printf("%d\n",a);
        re(++a);
        
        printf("%d\n",a);    //�n�`�N���O,�o�T�����M���L;���O����W�������j������ 
        a=a-3;               //�|�q�̫�o�쪺�ȶ}�l���s����  
        printf("%d\n",a);    //�Ҧp:�o�̬O��10�}�l:10-3=7,9-3=6,8-3=5,7-3=4.....��4-3=1!! 
    }
       
}

int main()
{
    re(3);   
    
    system("pause");
    return 0;
}
