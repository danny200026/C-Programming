int main()
{
    int x=10;
    float y=1.326445;
    char ch1='K'; 
    char a[]="ABCDEFG";     //�}�C���P���A���r�ꪺ���X 
    char b[]="abcdefg";                               
                      //sizeof���\��i�H���o��O���餤���r��Φr���ҥe���줸�ռ�                            
                      //�S�O�`�N,sizeof�᭱�A��"�}�C"���i�["[]" !! 
    printf("x�b�O���餺�e%d�Ӧ줸��!!\n",sizeof(int));
    printf("y�b�O���餺�e%d�Ӧ줸��!!\n",sizeof(float));
    printf("K�b�O���餺�e%d�Ӧ줸��!!\n",sizeof(ch1));
    printf("a�}�C�b�O���餺�e%d�Ӧ줸��!!\n",sizeof(a));   //�b�}�C��,�]���b�O����,�|�b"�r��"���̫�[�J�����r��,�ҥHa�}�C�|��8�Ӧ줸�� 
    printf("b�}�C�b�O���餺�e%d�Ӧ줸��!!\n",sizeof(b));   //�b�}�C��,�]���b�O����,�|�b"�r��"���̫�[�J�����r��,�ҥHb�}�C�|��8�Ӧ줸��
    
    system("pause");
    return 0;
}
