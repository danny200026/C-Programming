//�~�ӼзǦ�:(�H�U�T��@) 

#include <iostream>
using namespace std;

class father
{
    private:  //�u��b���O���ϥΤ����\�Q�l���O�~�� 
            
    protected:  //�l���O�i�H�~�� 
              
    public:  //���}(�j�a�ҥi�ϥ�)        

};

/* �l���O�~�Ӥ覡����:"private"`"protected"`"public" 
   
   *����:  �~�Ӯ�,�l���O�u�|���������"protected"�M"public"
           ���~�Ӫ��覡�u�|�v�T�~�ӫ�Ҥ��t�����A.
           
           �Ҧp:  1.class son:public father
                    �|�N������"protected"�M"public"��ʤ��ʦa�~�ӤU�� 

                  2.class son:protected father
                    �|�N������"protected"�M"public"������l���O��"protected"
                    
                  3.class son:private father
                    �|�N������"protected"�M"public"������l���O��"private"
                    
*/                      
class son:private father   
{

};
