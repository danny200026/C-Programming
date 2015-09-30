int main()
{
    int a=0;
    
    switch (a)    //switch()代表開關或選擇(括號不能省略)!!
    { 
    default:
            printf("others\n");   
     case 1:    //case相當於選項 
            printf("1\n");
              
     case 2:
            printf("2\n");
          
     case 3: 
            printf("3\n");
           
     case 15:
            printf("15\n");
            break;      //中斷點,會跳出switch(),若沒有加入"break"會從符合的"case"下一直執行下去                     
   
    }       
    system("pause");
    return 0;
}
