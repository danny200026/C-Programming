#include <iostream>
using namespace std;

struct book
{
     string bookid,bookname;
     int bookprice,bookqty,total;      
       
}word;

int main()
{
    word.bookid="A0001";
    word.bookname="Word2010�i��";
    word.bookprice=250; 
    word.bookqty=20;
    word.total=word.bookprice*word.bookqty*0.8;

    cout<<word.bookqty<<"��"<<word.bookname<<",����@"
    <<word.bookprice*word.bookqty<<"��,���K���@"<<word.total<<"��\n"; 

    system("pause");
    return 0;
}
