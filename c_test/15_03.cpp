//�b���O��,�Y�@�}�l�N�S���S�O�]�w,�|�N�Ҧ����س��w�]��"private"!! 

#include <iostream>
using namespace std;

class father
{
      //private:          
      //protected:         
      //public:
           int speed;   
};      

class son:public father
{
      public:
      int disspeed()
      {
          cout<<"�{�b�t�׬�:"<<speed<<endl;    
      }
};

int main()
{
    son s;
    s.speed=20;
    s.disspeed();

    system("pause");
    return 0;
}
