int main()
{
    char a[]="abcdefghijklmn";
    int b[]={1,2,3,4,5,6,7,8};    //�@�Ӧr���b�O����e1��byte,�Ʀr(���)�e4��byte!! 
    int c[]={1,2,3,4,5,6,7};       //float�e�|��byte,double�e8��byte!! 
    int d[]={1,2,3,4,5,6,7,8,9};
    int e[19];
    e[0]=11,e[2]=40,e[4]=50,e[6]=55;     //�b�o�̭ӧO�ŧie[0]=11,e[2]=40,e[4]=50.... 
    
    
    
    printf("�r��a�e�O����%d�Ӧ줸��\n",sizeof(a));
    printf("�r��b�e�O����%d�Ӧ줸��\n",sizeof(b));
    printf("�r��c�e�O����%d�Ӧ줸��\n",sizeof(c));
    printf("�r��d�e�O����%d�Ӧ줸��\n",sizeof(d));
    printf("�r��e�e�O����%d�Ӧ줸��\n",sizeof(e[2])); 
    system("pause");
    return 0;
}
