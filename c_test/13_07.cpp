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
    word.bookname="Word2010進階";
    word.bookprice=250; 
    word.bookqty=20;
    word.total=word.bookprice*word.bookqty*0.8;

    cout<<word.bookqty<<"本"<<word.bookname<<",原價共"
    <<word.bookprice*word.bookqty<<"元,打八折後共"<<word.total<<"元\n"; 

    system("pause");
    return 0;
}
