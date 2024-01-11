#include<iostream>
#include<vector>

using namespace std;

int main(){
     vector<int> arr={1, 0, 0, 1, 0, 2, 1, 2, 1, 1, 2, 2, 2, 0, 0, 0, 2, 1, 2, 0};
     int i=0;
     int j=0;
     int k=arr.size()-1;


         while(j<k){
             if(arr[j]==0){
                 swap(arr[i],arr[j]);
                 i++;
                 j++;

             }
             else if(arr[j]==1){
                 j++;
             }
             else{
                 swap(arr[j],arr[k]);
                 k--;
                 
                 
             }
         }

         for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
         }



    return 0;
}