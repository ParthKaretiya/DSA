#include <iostream>
using namespace std ;

int main()
{
   int arr [9] = {1,4,5,6,7,8,14,16,18};
   int start = 0;
   int end = 8;
   int target = 15;
   while(start < end){
       int mid = (start + end)/2;
       if(arr[mid] == target){
           cout<< "Target Found" << endl ;
           break ;
       }
       else if(arr[mid] < target){
           start = mid + 1 ;
           
       }
       else{ 
           end = mid - 1 ;
       }
   }
   
   cout << "Target Not Found" << endl;

    return 0;
}

//443