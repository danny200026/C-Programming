int main()
{
    char s[3];
    int A,a[5];
    
        printf("�п�J�r��:\n"); 
        scanf("%s",s);    //�b�o��,�]����J���O�r��,�ҥH���ݭn�["&"!!! 
        
        
        printf("�A��J�F%s\n",s);
        printf("�䤤�Ĥ@�Ӧr���O:%c\n",s[0]);
        
    system("pause");
    
    for(A=0;A<4;A++)
    {
        printf("\n�п�J��%d�ӼƦr:",A+1);
        scanf("%d",&a[A]);
    }
    
    for(A=0;A<4;A++)
    {
        printf("�A��J����%d�ӼƦr�O:%d\n",A+1,a[A]);
    }   
    system("pause");
    return 0;
}
