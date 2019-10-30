// Selection Sort Array Program

#include<iostream>
using namespace std;

int main()
{
     int size, ArrayNum[60], a, b, temp, index, small, count=0;
    
    cout<<"Enter Array Size : ";
    cin>>size;
    
    cout<<"Enter Array Elements : ";
    for(a=0; a<size; a++)
        cin>>ArrayNum[a];
    
    cout<<"Sorting array using selection sort.\n";
    for(a=0; a<(size-1); a++)
    {
        small = ArrayNum[a];

        for(b=(a+1); b<size; b++)
        {
            if(small>ArrayNum[b])
            {
                small = ArrayNum[b];
                count++;
                index = b;
            }
        }
        if(count!=0)
        {
            temp = ArrayNum[a];
            ArrayNum[a] = small;
            ArrayNum[index] = temp;
        }
        count=0;
    }
    cout<<"Array after sorting is :\n";
    for(a=0; a<size; a++)
        cout<<ArrayNum[a]<<" ";

    cout << endl;
}