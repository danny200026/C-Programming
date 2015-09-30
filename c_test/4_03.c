int main()
{
    int a=25;
    
    if (a>=30)
        printf("a>=30\n");
        
    if (a>=20)
        printf("a>=20\n");
        
    if (a>=10)    //若此行的條件式不符合,會執行第14行的"else"          
        printf("a>=10\n");
    
    else
        printf("other");      
    
    system("pause");
    return 0;
}
