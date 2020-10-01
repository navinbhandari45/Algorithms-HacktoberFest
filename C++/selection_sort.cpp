#include <iostream>

using namespace std;

void display(int a[],int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<" "<<endl;
    }


int *selsort(int a[],int n){
    for (int i = 0; i < n ; i++)
    {
        int j=i;
        for (int k = i+1; k < n; k++)
        {
            if (a[k]<a[i])
            {
                j=k;
                int t=a[i];
                a[i]=a[j];
                a[j]=t;  
            } 
            display(a,n); 
        }
    }
    return a;
}
int main()
{
    int n;
    cout<<"Enter length of Array :"<<endl;
    ;
    cin>>n;
    int a[n];
    cout<<"Enter the array :"<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a[i]=x;
    }
    cout<<"Unsorted array :"<<endl;
    display(a,n);
    selsort(a,n);
    cout<<"Sorted array :"<<endl;
    display(a,n);
    return 0;
}
