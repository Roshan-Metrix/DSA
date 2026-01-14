#include <iostream>
using namespace std;

int searchIndex(int noOfDatas, int records[], int searchNum){
    for (int i = 0; i < noOfDatas; i++){
        if (records[i] == searchNum){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, num;
    cout << "Enter the no. of datas for Array:";
    cin >> n;

    int datas[n];
    cout << "\nEnter " << n << " datas:\n"
         << endl;
    for (int i = 0; i < n; i++){
        cin >> datas[i];
    }
    cout << '\n';
    cout << "Enter the no. for searching its index: ";
    cin >> num;
        cout << "The search no. is " << num << " and its index is " << searchIndex(n, datas, num);
}