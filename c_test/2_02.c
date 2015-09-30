int main()
{
    int i;
    printf("請輸入任意數字:");     //scanf()用法為  scanf("格式",變數) 即是將格式區內指定的資料載入變數內 
    scanf("%d",&i);           //在scanf()內不可加"\n" ,"&"在這裡為取址符號,在這裡不加上去的話會造成程式當掉!! 
    printf("你輸入的數字是:%d\n",i);     
    system("pause");
    return 0;
}
