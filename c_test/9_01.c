#define PI 3.14159

float area(int n)
{
    return PI*n*n;      
}


float length(int n)
{
    return 2*PI*n;
}


int main()
{
    int n;
    
    printf("�п�J�b�|:");
    scanf("%d",&n);
    
    printf("�ꪺ���n��:%.2f\n",area(n));
    printf("�ꪺ�P����:%.2f\n",length(n)); 
    system("pause");
    return 0;
}
