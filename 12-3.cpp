// This program demonstrates the use of dynamic arrays

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float *monthSales = nullptr; // a pointer used to point to an array
                                // holding monthly sales
    float total = 0;
    float average;
    int numOfSales;
    int count;

    cout << fixed << showpoint << setprecision(2);
    cout << "How many monthly sales will be processed? ";
    cin >> numOfSales;
    // Fill in the code to allocate memory for the array pointed to by
// monthSales.
    monthSales = new float[numOfSales];
    if ( monthSales == nullptr )
        {
            cout << "Error allocating memory!\n";
            return 1;
        }

    cout << "Enter the sales below\n";
    for (count = 0; count < numOfSales; count++){
        cout << "Sales for Month number " << count+1<< ": ";
        // Fill in code to bring sales into an element of the array
        cin>>*(monthSales+ count);
        }

    for (count = 0; count < numOfSales; count++){
        total = total + monthSales[count];
    }

    average = total / numOfSales;
    cout << "Average Monthly sale is $" << average << endl;

    // Fill in the code to deallocate memory assigned to the array.
    delete[] monthSales;

return 0;
}