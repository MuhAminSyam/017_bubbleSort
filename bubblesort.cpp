#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variable global array a dengan ukuran 20 
int n;       //deklarasikan variable global n untuk menyimpan banyaknya elemen pada array

void input() {//prosedur input
    while (true){
        cout << "masukkan banyaknyaelemen pada array:"<< endl;
        cin >> n;
        if (n<=20)
           break;
           else{
            cout << "\nArray dapat mempunyai maksimal 20 elemen\n" <<endl;           }
    }
} 


cout << endl;
cout << "=============" << endl;
cout << "masukkan elemen array" << endl;
cout << "=============" << endl;


for (int i = 0; <n; 1++){
    cout << "Data ke-" << (i+1) << ";";
    cin >> arr[i];
}

void bubblesortArray(){ //procedur untuk mengurutkan array dengan metode bubble sort
    int pass = 1; //step1
    do
    {
      for (int j = 0; j <= n - 1 - pass;j++)
      {//step2
       if(arr[j] > arr[j+1]){
        int temp;
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
           }
      }