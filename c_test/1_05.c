int main()
{
    int a=5,b=5,c=5;
    int d=25;
    int e=a+b;           
    printf("%d  %d\n",a,b+19);
    printf("%d\n",e);  //若要給三個相同的值,要以逗號隔開!! 
    system("pause");   //不能寫成"a=b=c=5",因為在C\C++的語言內,(看下行註釋) 
    return 0;          //"結果=運算式",即C=a+b則成立,a+b=c則不成立!! 
}
