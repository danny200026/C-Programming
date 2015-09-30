int main()
{
    int x=7,y=10;
    printf("x=%d",x++);  //由於x++是後置式,所以只會印出前面的x,不會將後面的"++"算入,因此會將"++"放入下一行的式子中 
    printf("\nx=%d",x--); //因為上一行的"++"所以會先將這一行的x--中的"x"與"++"加以計算,得到結果8 
    printf("\nx=%d",++x); //這一行是前置式,不會和上面後置式中的"--"計算 
    printf("\nx=%d",--x);
    printf("\ny=%d",y++);
    printf("\ny=%d",y--);
    printf("\ny=%d",++y);
    printf("\ny=%d",--y);
    system("pause");
    return 0;
}
