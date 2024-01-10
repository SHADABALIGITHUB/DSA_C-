#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter the prime number up to:";
    cin>>n;
     vector<int> d;

    

    for(int i=1;i<n;i++){

         if(i==1){
            continue;
         }
         if(i==2){

            d.push_back(i);
        
          }
          else {
                 int c=0;
            for(int j=3;j<n;j++){

                if(i%2==0){
                    c=1;
                }
                
                if(i%j==0 ){

                    if(i==j){

                    }
                    else{

                        c=1;
                    }

                }
            }

          

       if(c==0){
                d.push_back(i);
              }


            
              
          }

           

        //   print array

     



    }
       for(int k:d){
            cout<<k<<" ";
        }

    return 0;

}
