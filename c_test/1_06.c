int main()
{
    int a=105;
    float b=9.032512851;
    printf("*%d*\n",a);     //�b��,�P���Ȭ��ѦҮy��
    system("pause");
    
    
     
    printf("*%10f*\n",b);    //�b��,�Y�b"%d"��άO"%f"���Ÿ�������J+"10"(�ݤU�@��) 
    system("pause");        //�|�b�P��������10��,�B�Ʀr�a�k
    
    
      
    printf("*%-10d*\n",a);    //�Ϥ�,�Y�b������J-"10",�]�|�b�P��������10��,���Ʀr�a��
    system("pause");
    
    
    
    printf("*%15.4f*\n",b);
    system("pause");    //�b�Ÿ�������J"15.4",�N�q����15��,�B�p���I4��H��|�ˤ��J
    
    
    
    
    printf("*%2f*\n",b);    //�Y�b�Ÿ�����J��Ÿ��Ȥp����,�h�|�۰ʪŶ}(�b���|�X�{��Ӫ��ܼ�) 
    system("pause");
    
    
    
    
    printf("*%.2f*\n",b);    //�b���|����Ӫ��ܼ�,����p���I��ĤG��|�|�ˤ��J 
    system("pause");
    return 0;
}
