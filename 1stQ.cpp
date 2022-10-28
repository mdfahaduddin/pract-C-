#include <iostream>
using namespace std;

int maxTSum(int arrEle[], int n)
{

    int sum = INT_MIN;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                if (sum < arrEle[i] + arrEle[j] + arrEle[k])
                    sum = arrEle[i] + arrEle[j] + arrEle[k];
    return sum;
}

int main()
{
    int numOfArr;
    cin>>numOfArr;
     int arrEle[10] = {0,0,0,0,0,0,0,0,0,0};

    for (int z = 0; z < numOfArr; z++) {
    cin >> arrEle[z];
    }
    int n = sizeof(arrEle) / sizeof(arrEle[0]);
    cout << maxTSum(arrEle, n);

    return 0;
}


