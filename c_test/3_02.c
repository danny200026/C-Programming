int main()
{    /*"x++"����m��,�|�⦨"x+1", "++x"���e�m��,�|�⦨"1+x", 
       "x--"����m��,�|�⦨"x-1", "--x"���e�m��,�|�⦨"-1+x" 
       �S�O�`�N,��m��(�Ҧp:y++)���[��Ÿ��n�b���l�⧹��b�[�H�p��
       �e�m���h�L������*/    
    
    int x=7,y=10;             
    y=x++;
    printf("x=%d,y=%d",x,y); //�b�o��,�ѩ�x++�O��m��,�ҥH�|�Ny=x++�⦨1.y=x 2.x=x+1(�]��x++�O��m��) 
    x=7,y=10;
    y=++x;
    printf("\nx=%d,y=%d",x,y);//�b�o��,�ѩ�++x�O�e�m��,�ҥH�|�Ny=++x�⦨y=1+x(�]��++x�O�e�m��) 
    x=7,y=10;
    y=x--;
    printf("\nx=%d,y=%d",x,y);
    x=7,y=10;
    y=--x;
    printf("\nx=%d,y=%d",x,y);
    system("pause");
    return 0;
}
