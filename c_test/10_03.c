int main()                   
{                           //指標是一個用來存放記憶體位址的變數! 
    int sum=100,*ptri;      //在這裡宣告指標變數!  
    
    ptri=&sum;   //注意!將變數位址丟入指標變數時,指標變數前勿加"*",否則會變成"取值" 
    
    printf("%d,%p,%d\n",sum,&sum);
    printf("%d,%p,%p,%d\n",*ptri,ptri,&ptri,sizeof(ptri));
    system("pause");
    return 0;
}

//注意!指標的功能雖然是將被指向變數(sum)的記憶體地址存放在指標(*ptri)內
//但是指標變數的記憶體位置和被指向的變數的記憶體位置是不同的!!!!!
 
/*"指標"就像個抽屜
一個可以把"變數"放進去的抽屜
把sum放進*ptr1這個抽屜
但是放進去的卻不是真正的實體只是sum這個東西的所在位置
當把*ptr1抽屜打開時電腦自動去找出sum的位置
找到後再把sum這樣東西呈現在你眼前*.....網路上的文章擷取:
http://tw.knowledge.yahoo.com/question/question?qid=1607091705369*/    
