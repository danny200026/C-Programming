int main()
{
    int x=10;
    if (x==15)    //在這裡的"=="判斷x是否等於15,"if"為假設.在"if"後面不要加"分號"!! 
    {
    printf("yes,x=15\n",x);  //等於15的話執行此行 
    }
    else  //"else"為否則 
    {
    printf("no,x=%d\n",x);  //若不等於15的話執行此行 
    }    
    system("pause");
    
    
    /*注意!!,若"if","else"內執行的指令只有一行,則大括號可以省略
    例如:
    if (x==15)    //在這裡的"=="判斷x是否等於15,"if"為假設 
        printf("yes,x=15\n",x);  //等於15的話執行此行 
    else  //"else"為否則 
        printf("no,x=%d\n",x);  //若不等於15的話執行此行*/    
    
    
    return 0;
}
