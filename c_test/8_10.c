int a,result;

int ans(int s)
{    
    printf("%d\n",s*--s);   //�o�̪�"s*--s"�]��"--s"�O�e�m���ҥH�|����"--s",�ӳ̫�⦡�|�ܦ�"(s-1)*(s-1)" 
    return s;   //�^��"s"��                  
}

int main()
{
    
    printf("�п�J�@�Ӿ��");
    scanf("%d",&a);
    
    printf("%d",ans(a));  //�`�N!!!�o�̷|���"ans(a)"����᪺���G 
    
    system("pause");
    return 0;
}
