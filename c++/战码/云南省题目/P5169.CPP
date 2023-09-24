#include<iostream>
using namespace std;
int CompactIntegers(int *arr,int n)
{
    //直接从头到尾遍历整个数组，是0就将n减1，同时数组下表往前移
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            //将所有元素向前移
            int j = i;
            for (; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            //将要判断的元素的下标前移
            i = i - 1;
            //非0元素个数减1
            n--;
        }
    }
    return n;
}

int main(void)
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t = CompactIntegers(arr, n);
    if (t == 0)
    {
        cout << t << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < t - 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << arr[t - 1];
    }
    cout<<"\n";
    cout << t << endl;
    
    return 0;
}