int main()
{
    char a[]="abcdefghijklmn";
    int b[]={1,2,3,4,5,6,7,8};    //一個字元在記憶體占1個byte,數字(整數)占4個byte!! 
    int c[]={1,2,3,4,5,6,7};       //float占四個byte,double占8個byte!! 
    int d[]={1,2,3,4,5,6,7,8,9};
    int e[19];
    e[0]=11,e[2]=40,e[4]=50,e[6]=55;     //在這裡個別宣告e[0]=11,e[2]=40,e[4]=50.... 
    
    
    
    printf("字串a占記憶體%d個位元組\n",sizeof(a));
    printf("字串b占記憶體%d個位元組\n",sizeof(b));
    printf("字串c占記憶體%d個位元組\n",sizeof(c));
    printf("字串d占記憶體%d個位元組\n",sizeof(d));
    printf("字串e占記憶體%d個位元組\n",sizeof(e[2])); 
    system("pause");
    return 0;
}
