#include<iostream>
using namespace std;

bool isHeap(int arr[],  int n)  /** function to check given array is max heapsort  */
{
     /**Start from root and go till the last internal  */
    // node
    for (int i=0; i<=(n-2)/2; i++)
    {
        /**If left child is greater, return false */
        if (arr[2*i +1] > arr[i])
                return false;

        /**If right child is greater, return false */
        if (2*i+2 < n && arr[2*i+2] > arr[i])
                return false;
    }
    return true;
}
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node *newNode(int data)
{
   Node *temp=new Node();
     temp->data=data;
     temp->left=temp->right=NULL;
     return temp;
}
Node *CreateNode(int arr[],int i,int n)
{
    if(i>=n)
        return NULL;
    for( int j=0;j<n;j++)
    {

    }
}
void Heap(int arr[],int n)
{
	int temp,j=n;
	temp=arr[n];

	while(j>1 && temp>arr[j/2])
	{
	     arr[j]=arr[j/2];
	     j=j/2;
	}
	arr[j]=temp;
}

int main()
{
	int arr1[]={0,10,20,30,25,5,40,35};     /** first element of array compulsory should  be 0*/
	int len=sizeof(arr1)/sizeof(arr1[0]);    /**  */
	for( int i=2;i<=len;i++)
	{
	    Heap(arr1,i);     /** calling heap function with array index to be inserted  */
	}
  for(int k=0;k<len;k++)     /**  for display array with starting index with 1 */
  {
     cout<<arr1[k]<<" ";
  }
  //int tp=arr1[0];
 int heap_arr[]={0};
  for(int p=0;p<len;p++)    /** sequzing the array removing the index 0 of array shifting all the elements towards left */
    {
      if(arr1[p+1])
         heap_arr[p]=arr1[p+1];
      else
         break;
    }
   cout<<endl;
   for(int n=0;n<len-1;n++)
   {
       cout<<heap_arr[n]<<" ";
   }
   cout<<endl;
   int length=len-1;
   isHeap(heap_arr, length)? printf("the heap is max sorted"): printf("the heap is not sorted");
//  cout<<length<<endl;
//
///** now  making binary tree of max heap aaray */
}
