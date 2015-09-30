//繼承標準式:(以下三選一) 

#include <iostream>
using namespace std;

class father
{
    private:  //只能在類別內使用不允許被子類別繼承 
            
    protected:  //子類別可以繼承 
              
    public:  //公開(大家皆可使用)        

};

/* 子類別繼承方式分為:"private"`"protected"`"public" 
   
   *說明:  繼承時,子類別只會分到父項的"protected"和"public"
           而繼承的方式只會影響繼承後所分配的型態.
           
           例如:  1.class son:public father
                    會將父項的"protected"和"public"原封不動地繼承下來 

                  2.class son:protected father
                    會將父項的"protected"和"public"都分到子類別的"protected"
                    
                  3.class son:private father
                    會將父項的"protected"和"public"都分到子類別的"private"
                    
*/                      
class son:private father   
{

};
