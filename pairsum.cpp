#include<bits/stdc++.h>
using namespace std;

int pairsum(int* arr,int n, int k)
{
     unordered_map<int,int> table;
        
        for(int i=0;i<n;i++)
        {
            table[arr[i]]++;
        }
        
        int count=0;
        
        for(int i=0;i<n;i++)
        {
         
            count=count+table[(k-arr[i])];
            
            if(2*arr[i]==k)    // let arr={2,2,2,2} and k=4, then we have counted the pair 2 and itself which is to be removed.
                               
            count--;
             
        }
        
        return count/2;
}