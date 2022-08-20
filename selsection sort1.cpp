#include<iostream>
using namespace std;
void array1(int arr[])
{
    for(int i=0;i<5-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);

    }
}
int main()
{

    int myarr[5]={9,8,7,5,6};
    array1(myarr);
    for(int i=0;i<5;i++)
    {
        cout<<myarr[i];
    }
    return 0;


}
