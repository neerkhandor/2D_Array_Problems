#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
//for row wise sum we will do row wise traversal

void printRowSum(int arr[][3],int row,int col){
    for(int i=0;i<3;i++){
     int sum=0;
    for(int j=0;j<3;j++){
    
      sum=sum+arr[i][j];
    }
    cout<<sum<<endl;
  }
}
 void printColSum(int arr[][3],int row ,int col){
   for(int i=0;i<3;i++){
     int sum=0;
    for(int j=0;j<3;j++){
    
      sum=sum+arr[j][i];
    }
    cout<<sum<<endl;
  }
}
bool linearSearch(int arr[][3],int row,int col,int key){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(arr[i][j]==key){
        return true;
      }
    }
  }
  return false;
}
void linearSearch1(int arr[][3],int row,int col,int key){
  int flag=0;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      
      if(arr[i][j]==key){
        cout<<"Element is present at index ["<<i<<"]["<<j<<"]"<<endl;
        flag=1;
          }
    }
  }
  if(flag==0){
    cout<<"Element not found"<<endl;
  }
  
}
int getMax(int arr[][3],int row,int col){
  int maxi=INT_MIN;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(arr[i][j]>maxi){
        maxi=arr[i][j];
      }
    }
  }
  return maxi;
}
int getMin(int arr[][3],int row,int col){
  int mini=INT_MAX;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(arr[i][j]<mini){
        mini=arr[i][j];
      }
    }
  }
  return mini;
}
void transpose(int arr[][3],int row,int col){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr[j][i]<<" ";
    // transposeArr[j][i]=arr[i][j];
    }
    cout<<endl;
  }
}
void printVector(vector<vector <int>>v){

  for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
}
void inputArray(int arr[][3],int row,int col){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }
}
void printArray(int arr[][3],int row,int col){
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main() {
 int arr[3][3];
  // int sum=0;
  inputArray(arr,3,3);
  cout<<endl<<endl;
  printArray(arr, 3,3);
  cout<<endl<<endl;
  // printRowSum(arr, 3,3);
  // cout<<endl<<endl;
  // printColSum(arr, 3,3);
  int key;
  cout<<"Enter the key to find : ";
  cin>>key;
  bool find=linearSearch(arr,3,3,key);
  if(find){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not Found"<<endl;
  }
  int ans=getMax(arr,3,3);
  int ans1=getMin(arr,3,3);
  cout<<"Maximum Element is "<<ans<<" and minimum element is "<<ans1<<endl;
  linearSearch1(arr,3,3,key);
  transpose(arr,3,3);
  printArray(arr,3, 3);

  vector <vector<int> > v;
  vector <int> a{11,2,3};
  vector <int> b{4,5,6};
  vector <int> c{7,8,9};
  v.push_back(a);
  v.push_back(b);
  v.push_back(c);
  for(int i=0;i<v.size();i++){
    for(int j=0;j<v[i].size();j++){
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
  vector<vector <int>> v1(5,vector<int>(5,-8));
  printVector(v1);
  cout<<v1[2][3]<<endl;
}
// rotate matrix by 90 degree
// wave print
// spiral print
// zigzag print
// matrix multiplication
// median


// find duplicate of an array
// find first repeating element in an array
// sort 0 ,1 2
// move all -ve to one side
// find missing element
// find common element in 3 arrays
// factorial of large no