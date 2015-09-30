//"strcpy(目的,來源)"  -->將"來源"複製到"目的"(僅適用於字元陣列) 

int main()
{
    char s1[50],s2[50];  //宣告字元陣列 
    
    puts("請輸入字串"); 
    gets(s1);

    printf("複製前,s2=%s\n",s2);
    strcpy(s2,s1);
    printf("複製後,s2=%s\n",s2); 

    system("pause");
    return 0;
}
