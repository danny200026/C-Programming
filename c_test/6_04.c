int main()
{
    int a,all=0,s[4];
    
    for(a=0;a<4;a++)
    {
        printf("�п�J��%d�Ӿǥͪ�����:",a+1);
        scanf("%d",&s[a]);
        all+=s[a];
    }
        printf("*****���G*****\n");
    for(a=0;a<4;a++)
    {
        printf("��%d�Ӿǥͪ����ƬO:%d\n",a+1,s[a]);
    }
    
    printf("�ǥͪ��`����:%d\n",all);
    printf("�ǥͪ������O:%.2f\n",(float)all/4);    
    system("pause");
    return 0;
}
