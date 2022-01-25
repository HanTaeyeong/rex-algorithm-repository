#include <cstdio>
#include <iostream>

const int MAX_DEGREE = 30;

using namespace std;

class Polynomial{
    
    int coef[MAX_DEGREE]={0};
    
    public:
        Polynomial(int coefs[], int size){
            //int coefsSize= *(&coefs + 1) - coefs;
            
            for(int i=0;i<size;i++){
                coef[i]=coefs[i];
            }
        }
        
        void display(){
            for(int i=0;i<MAX_DEGREE;i++){
                if(coef[i]==0){continue;}
                cout<<coef[i]<<"x^"<<i<<" ";
            }
            cout<<"\n";
        }

        Polynomial getAddedPolynomial(Polynomial a, Polynomial b){
            int tempCoef[MAX_DEGREE]={0};

            for(int i=0;i<MAX_DEGREE;i++){
                tempCoef[i]=a.coef[i]+b.coef[i];    
            }
            return Polynomial(tempCoef,MAX_DEGREE);
        }
};

int main(){
    // “array” is a “pointer to the first element of array” but “&array” is a “pointer to whole array of 5 int”. 
    //Since “array” is pointer to int, addition of 1 resulted in an address with increment of 4 (assuming int size in your machine is 4 bytes). 

    int arrA[]={1,2,3,4,5,0,0,1};    
    int arrB[]={4,2,0,0,1,4};
    
    Polynomial a =Polynomial(arrA,8);
    Polynomial b =Polynomial(arrB,6);
    
    int coefs[]={1,2,4,65,2,4,2,1};

    a.display();
    b.display();

    Polynomial c = a.getAddedPolynomial(a,b);

    c.display();
    return 0;

}


