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
    
    printf("請輸入半徑:");
    scanf("%d",&n);
    
    printf("圓的面積為:%.2f\n",area(n));
    printf("圓的周長為:%.2f\n",length(n)); 
    system("pause");
    return 0;
}
