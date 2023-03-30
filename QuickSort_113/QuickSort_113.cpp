#include <iostream>
using namespace std;


int arr[20];        //array of integers to hold velues
int cmp_count = 0;  //number of comparision
int mov_count = 0;  //number of data movements
int n;

void input() {
    while (true)
    {
        cout << "Masukan panjang element array: ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nMaksimum"
    }

    cout << "\n-------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">"
            cint >> arr[i];
    }
}

//swaps the element st index x with the element at index y
void swap(int x, int y)
{
    int temp;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp; 
}

void q_short(int low, int high)
{
    int pivot, i, j;
    if (low > high)                         //Langkah Algoritma No. 1
        return;

    //Partition the List into two parts:
    //one containing elements less that or equal to pivot
    //outher conntaining elements greather than pivot

    pivot = arr[low]                //Langkah Algoritma No. 2

    i = low + 1;                //Langkah Algoritma No. 3
    j = high;                   //Langkah Algoritma No. 4


    while (i <= j)              //Langkah Algoritma No. 10
    {
        //search for an element greather than pivot
        while ((arr[i] <= pivot) && (i <= high))
        {
            i++;                    //Langkah Algoritma No. 6
            cmp_count++;
        }
        cmp_count++;

        //search for an element less than or equal to pivot
        while ((arr[j] > pivot) && (j >= low)                   //Langkah Algoritma No. 7
        {
            j--;                                                //Langkah Algoritma No. 8
            cmp_count++;
        }
        cmp_count++;

        // if the greather element is on the left of the element
        if (i < j)                                              //Langkah Algoritma No. 9
        {
            //swap the element at index i whit the element at index j
            swap(i, j);
            mov_count++;
        }
    }
    //j now containt the index of the last element in the sorted list
    if (low < j)                                                //Langkah Algoritma No. 11
    {
        //move the pivot to its correct position in the list
        swap(low, j);
        mov_count++;
    }






}

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
