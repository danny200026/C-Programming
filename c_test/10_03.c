int main()                   
{                           //���ЬO�@�ӥΨӦs��O�����}���ܼ�! 
    int sum=100,*ptri;      //�b�o�̫ŧi�����ܼ�!  
    
    ptri=&sum;   //�`�N!�N�ܼƦ�}��J�����ܼƮ�,�����ܼƫe�ť["*",�_�h�|�ܦ�"����" 
    
    printf("%d,%p,%d\n",sum,&sum);
    printf("%d,%p,%p,%d\n",*ptri,ptri,&ptri,sizeof(ptri));
    system("pause");
    return 0;
}

//�`�N!���Ъ��\�����M�O�N�Q���V�ܼ�(sum)���O����a�}�s��b����(*ptri)��
//���O�����ܼƪ��O�����m�M�Q���V���ܼƪ��O�����m�O���P��!!!!!
 
/*"����"�N���ө�P
�@�ӥi�H��"�ܼ�"��i�h����P
��sum��i*ptr1�o�ө�P
���O��i�h���o���O�u��������u�Osum�o�ӪF�誺�Ҧb��m
���*ptr1��P���}�ɹq���۰ʥh��Xsum����m
����A��sum�o�˪F��e�{�b�A���e*.....�����W���峹�^��:
http://tw.knowledge.yahoo.com/question/question?qid=1607091705369*/    
