#include<bits/stdc++.h>
using namespace std;

int pairsum(int *arr,int n,int num)
{
    
    int startindex=0;
    int endindex=n-1;
    int count=0;
    
    while(startindex<endindex)
    {
        if(arr[startindex]+arr[endindex]<num)
        {
            startindex++;
        }
        else if(arr[startindex]+arr[endindex]>num)
        {
            endindex--;
        }
        else
        {
            int firstele=arr[startindex];
            int lastele=arr[endindex];
            
            if(firstele==lastele)
            {
                count+=(endindex-startindex+1)*(endindex-startindex)/2;
                return count;
            }
           
            
            int tempstart=startindex+1;
            int tempend=endindex-1;
            
            while(tempstart<endindex && arr[tempstart]==firstele)
            {
               
                tempstart++;
            }
             while(tempend>startindex && arr[tempend]==lastele)
            {
               
                 tempend--;
            }
          int  firstelecount=tempstart-startindex;
          int  endelecount=endindex-tempend;
            
            count+=(firstelecount*endelecount);
            
            startindex=tempstart;
            endindex=tempend;
        }
    }
    return count;
    
}


int tripletSum(int *arr, int n, int num)
{
	//Write your code here
    
    int count=0;
    
    sort(arr,arr+n);
    
    set<int,greater<int>> s1;
    
    for(int i=0;i<n-2;i++)
    {
       
        count+=pairsum(arr+i+1,n-i-1,num-arr[i]);
            
         
    }
    
    return count;
}