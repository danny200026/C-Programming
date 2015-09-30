int main()
{                                                    
    char ch1='a',ch2='A',ch3='z',ch4='Z';            // %c是指顯示字母!! 
    char ch5=98,ch6=66,ch7=122,ch8=96;    
    printf("%d  %d  %d  %d\n",ch1,ch2,ch3,ch4);    //在這行顯示的是ACII碼(每種字母皆有對應)   
    printf("%c  %c  %c  %c\n",ch5,ch6,ch7,ch8);
    system("pause");
    return 0;
}
