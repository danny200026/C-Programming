int main()
{
    int x=7,y=10;
    printf("x=%d",x++);  //�ѩ�x++�O��m��,�ҥH�u�|�L�X�e����x,���|�N�᭱��"++"��J,�]���|�N"++"��J�U�@�檺���l�� 
    printf("\nx=%d",x--); //�]���W�@�檺"++"�ҥH�|���N�o�@�檺x--����"x"�P"++"�[�H�p��,�o�쵲�G8 
    printf("\nx=%d",++x); //�o�@��O�e�m��,���|�M�W����m������"--"�p�� 
    printf("\nx=%d",--x);
    printf("\ny=%d",y++);
    printf("\ny=%d",y--);
    printf("\ny=%d",++y);
    printf("\ny=%d",--y);
    system("pause");
    return 0;
}
