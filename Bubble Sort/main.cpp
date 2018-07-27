#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    int a[n];

    cout<<"Enter the Elements: "<<endl;
    int i;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int temp;

    cout<<"The Elements after Sorting: "<<endl;

    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
