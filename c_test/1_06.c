int main()
{
    int a=105;
    float b=9.032512851;
    printf("*%d*\n",a);     //在此,星號僅為參考座標
    system("pause");
    
    
     
    printf("*%10f*\n",b);    //在此,若在"%d"亦或是"%f"等符號中間輸入+"10"(看下一行) 
    system("pause");        //會在星號之間空10格,且數字靠右
    
    
      
    printf("*%-10d*\n",a);    //反之,若在中間輸入-"10",也會在星號中間空10格,但數字靠左
    system("pause");
    
    
    
    printf("*%15.4f*\n",b);
    system("pause");    //在符號中間輸入"15.4",意義為空15格,且小數點4位以後四捨五入
    
    
    
    
    printf("*%2f*\n",b);    //若在符號中輸入比符號值小的數,則會自動空開(在此會出現原來的變數) 
    system("pause");
    
    
    
    
    printf("*%.2f*\n",b);    //在此會取原來的變數,但其小數點後第二位會四捨五入 
    system("pause");
    return 0;
}
