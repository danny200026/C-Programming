int main()
{
    int x=10;
    float y=1.326445;
    char ch1='K'; 
    char a[]="ABCDEFG";     //陣列為同型態的字串的集合 
    char b[]="abcdefg";                               
                      //sizeof的功能可以取得於記憶體中的字串或字元所占的位元組數                            
                      //特別注意,sizeof後面括的"陣列"不可加"[]" !! 
    printf("x在記憶體內占%d個位元組!!\n",sizeof(int));
    printf("y在記憶體內占%d個位元組!!\n",sizeof(float));
    printf("K在記憶體內占%d個位元組!!\n",sizeof(ch1));
    printf("a陣列在記憶體內占%d個位元組!!\n",sizeof(a));   //在陣列中,因為在記憶體,會在"字串"的最後加入結束字元,所以a陣列會有8個位元組 
    printf("b陣列在記憶體內占%d個位元組!!\n",sizeof(b));   //在陣列中,因為在記憶體,會在"字串"的最後加入結束字元,所以b陣列會有8個位元組
    
    system("pause");
    return 0;
}
