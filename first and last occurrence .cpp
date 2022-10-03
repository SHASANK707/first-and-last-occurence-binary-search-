#include<iostream>
using namespace std;
int firstocc( int arr[],int n,int key)
{

int s=0;
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e)
{
    if(arr[mid]==key) //array of mid gives the value  that is stored in a array 
    {
        ans=mid;   //it will store the value of mid in ans for temporary
        e=mid-1;    //if we just return ans it can not find the  first occ. so to find the leftmost occ. this step is done
    }
    else if(key<arr[mid])
    {
        e=mid-1;   //left side bhagega
        
    }
    else if(key>arr[mid])
    {
        s=mid+1;  //right side bhagega
    }
    

    
    mid=s+(e-s)/2;
}
return ans;
}

int lastocc(int arr[],int n, int key)
{
    int s=0;
int e=n-1;
int mid=s+(e-s)/2;
int ans=-1;
while(s<=e)
{
    if(arr[mid]==key)
    {
        ans=mid;
        s=mid+1;
    }
    else if(key<arr[mid])
    {
        e=mid-1;
        
    }
    else if(key>arr[mid])
    {
        s=mid+1;
    }
    

    
    mid=s+(e-s)/2;
}
return ans;

}



int main()
{
    int arr[9]={1,2,5,3,5,5,5,6};
    cout<<"the first occurrence is "<<firstocc(arr,9,5)<<endl;
    cout <<"the last occurence is : "<<lastocc(arr,9,5)<<endl;

return 0;
}
