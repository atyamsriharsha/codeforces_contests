#include<iostream>



using namespace std;


int main()
{
    int n = 0;
    long long int tmpI = 0;
    unsigned long long arr[101],Marr[101];
    int p = 0,neg=0;
    int countN = 0,countP=0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tmpI;
        if (tmpI < 0)
        {
            cin >> Marr[neg];
            Marr[neg] = Marr[neg] ;
            countN++;
            neg++;
        }
        else
        {
            cin >> arr[p];
            countP++;
            p++;
        }
    }
    sort(arr,arr+neg) ;
    unsigned long long int sum = 0;
    if (countN > countP)
    {
        int Result = countP + 1;
        for (int i = 0; i < Result; i++)
        {
            sum += Marr[i];
        }

        for (int j = 0; j < countP; j++)
        {
            sum += arr[j];
        }
    }
    else if (countN < countP)
    {
        int Result = countN + 1;
        for (int i = 0; i < Result; i++)
        {
            sum += arr[i];
        }

        for (int j = 0; j < countN; j++)
        {
            sum += Marr[j];
        }
    }
    else
    {
        for (int i = 0; i < countP; i++)
        {
            sum += arr[i];
        }
        for (int j = 0; j < countN; j++)
        {
            sum += Marr[j];
        }
    }




    cout << sum << "\n";
    
    //system("pause");
    return 0;
    
}