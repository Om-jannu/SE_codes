#include <iostream>
using namespace std;
 
void sum(int a, int b)
{
    cout << "Sum of int " << a+b << endl;
}
 
void sum(float c, float d)
{
    cout << "Sum of float " << c+d << endl;
}
 
void sum()
{
    int size, i, arr1[5], arr2[5], add[5];
    cout << "\nPlease Enter the Array Size =  ";
    cin >> size;
    
    cout << "\nPlease Enter the First Array Items =  ";
    for(i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }   
    cout << "\nPlease Enter the Second Array Items =  ";
    for(i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }
    for(i = 0; i < size; i++)
    {
        add[i] = arr1[i] + arr2[i];
        cout << arr1[i] << " + " << arr2[i] << " = " << add[i] << "\n";
    }
    cout << "\nThe Final Result of adding 2 One Dimensional Arrays = ";
    for(i = 0; i < size; i++)
    {
        cout << add[i] << " ";
    }
 
}
 
int main()
{
    int a, b, arr1[5], arr2[5];
    float c, d;
 
    sum(3,5);
 
    sum(2.2f,3.8f);
 
    sum();
 
    return 0;
}

