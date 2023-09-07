#include <iostream>

using namespace std;

int partition(int arr[],int s,int e)
{
    int pivot=arr[s];

    int count=0;

    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot) //elements which are shorter than pivot are counted and shifted forwards
        {
            count++;
        }
    }
    //place pivot at right

    int pivotIndex=s+count;

    swap(arr[pivotIndex],arr[s]); //swap the follwing element with counting position

    //left and right changes with i and j

    int i=s,j=e;

    while(i<pivotIndex && j >pivotIndex)
    {
        while(arr[i]<pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
       
    }
    }






void quickSort(int arr[],int s,int e)
{
    //base case
    if(s>=e)
      return ;

  //creating a partion

  int p=partition(arr,s,e);

  //left partitioin

  quickSort(arr,s,p-1);

  //right partition

  quickSort(arr,p+1,e);

}







int  main()
{
    int arr[5]={2,4,1,6,3};
    int n=5;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}

