#include<iostream>
using namespace std;
int main()
{
    int n;
    //cout<<“Enter no of elements\n”;
    cin>>n;
    int arr[n],cumulative_sum[n]={0},sum=0,maximum = INT_MIN,left,right;
    //cout<<"Enter "<<n<<" elements\n";
    cin>>arr[0];
    cumulative_sum[0]=arr[0];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        cumulative_sum[i] = arr[i]+cumulative_sum[i-1];
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                int s = i>0? cumulative_sum[j] - cumulative_sum[i-1] : cumulative_sum[j];
                if(maximum < s){
                    left = i;
                    right = j;
                    maximum = s;
                }
        }
    }
    for(int i=left;i<=right;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    cout<<"Maximum subarray sum is "<<maximum<<endl;
    return 0;
}
