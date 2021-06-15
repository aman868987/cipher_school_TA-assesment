

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the integer"<<endl;
    int n;
    cin>>n;
    int arr[n];
    if(n%2==0)
    {
      for(int i=0;i<n;i++)
      {
        if(i%2==0)
          arr[i]=i+1;
        else
          arr[i]=-(i);
      }
    }
    else
    {
      for(int i=0;i<n-1;i++)
      {
        if(i%2==0)
          arr[i]=i+1;
        else
          arr[i]=-(i);
      }
      arr[n-1]=0;
    }
    cout<<"The array:";
    for(int i=0;i<n;i++)
    std::cout << arr[i]<<" ";
    return 0;
}
