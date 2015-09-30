int main()
{
    int x=10,y=18;
    
    if (x==10&&y==18)  //"&&"判斷兩邊是否同時成立 
        printf("x=10,y=18\n");
    
    else if (x==11||y==12)   //"||"來判斷兩邊其中一邊是否成立 
        printf("x=11,y=12\n");
            
    else
        printf("other");
    system("pause");
    return 0;
}
