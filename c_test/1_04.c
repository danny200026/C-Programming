int main()           
{
    float a=3.14;                 //�^��r�������j�p�g!!! 
    int A=369;
    printf("%d  %f  %d\t",A,a,A);    //"\t"�b���۷��Tab��(�Y�ť|��) 
    printf("%d",A);
    system("pause");
     
//�Q�׮榡���~ 
    a=1.323;    //�b�o�̪�a�w�g�N�W���ŧi��a���л\ 
    A=232;      //�b�o�̪�a�w�g�N�W���ŧi��A���л\
    printf("%d\n",a);    //�o�̪�a������ܬ��B�I��(%f),���O�o�̪��榡���~,�ҥH�|�X�{�ü� 
    printf("%f\n",A);    //�o�̪�A������ܬ���ƭ�(%d),���O�o�̪��榡���~,�ҥH�|�X�{�ü�
    system("pause");
    
//�Q�׵��Ӥj���j�p
    float b=123;
    int B=16.436952;
    printf("%f\n",b);    //�o�̪�b�ȫ᭱�|�h�X�n�X�ӹs 
    printf("%d\n",B);    //�o�̪�B�Ȥp���I�᭱�|�h�� 
    system("pause");
  
//�Q�פ������
    float c;
    int C;
    printf("%f\n",c);    //�b��,�]��"c"�ȥ��ŧi�Ʀr,�]���|�b�O���餤�����N�� 
    printf("%d\n",C);    //�b��,�]��"C"�ȥ��ŧi�Ʀr,�]���|�b�O���餤�����N��
    system("pause");
    return 0;
}
