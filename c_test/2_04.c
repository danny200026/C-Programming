int main()
{
    float x,y; 
    printf("請輸入攝氏溫度:");
    scanf("%f",&x);
    y=x*9/5+32;     //計算公式,將前面所得到的數字放入計算公式內 
    printf("攝氏溫度為:%f,華氏溫度為:%f\n",x,y); 
    system("pause");
    return 0;
}
