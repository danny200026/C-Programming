#include<stdlib.h>
#include<time.h>

int main()
{
    int r1,r2,i;
    
    srand(time(NULL));    //以時間為基值的亂數種子器 
    
    for(i=1;i<=10;i++)
    {
        r1=rand();    //r1=亂數 
        printf("%d\n",r1);
        r2=r1%10;
        printf("%d\n",r2);
    }    
    
    system("pause");
    return 0;
}
