void do_it(int a,int b,int c)   
/*�`�N!!�o�̪�"do_it()"�禡�M"int main()�b�O���餤��}���P!!
��M�b�o�̫ŧi��"a","b","c"�M"int_main()�̫ŧi��"a","b","c"���P!!!*/ 
{
printf("The original is a=%d b=%d c=%d\n",a,b,c);
    a=a+1;
    b=b+2;
    c=c+3;
    printf("The result is a=%d b=%d c=%d\n\n",a,b,c);
}


int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    do_it(a,b,c);    
    do_it(a,b,c);   
    do_it(a,b,c);   
    do_it(a,b,c);   
/*�N"int main()"����a,b,c��}�������"�ƻs"��"do_it()"����������}�ð���!!
�`�N!!�o�Ӯɭ�"int main()�Mdo_it����a,b,c��ƬO�W�ߪ�,���|���ۼv�T!!   
    system("pause"); 
    return 0;
}
