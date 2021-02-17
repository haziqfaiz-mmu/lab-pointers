#include<iostream>

using namespace std;


void selectionSort(float* score, int num_scores){
        int minIndex, minValue;

        for(int start=0;start<(num_scores-1);start++){
            minIndex = start;
            minValue = score[start];

            for(int index = start+1;index<num_scores;index++){
                if (score[index]<minValue){
                    minValue = score[index];
                    minIndex = index;
                }
            }
            swap(score[minIndex],score[start]);
        }
}

int main(){
    float *score = nullptr; // a pointer variable
    int num_scores;
    
    cout<<"Enter the num scores: ";
    cin>>num_scores;

    score = new float[num_scores]; // allocation of the array

    for(int i=0;i<num_scores;i++){
        cout<<"Enter score number "<<i+1<<": ";
        cin>>*(score+i);
    }

    cout<<"Before sort"<<endl;
    for(int i=0;i<num_scores;i++){
        cout<<*(score+i)<<" ";
    }
    selectionSort(score,num_scores); // call to the function

    cout<<"\nAfter sort"<<endl;
    for(int i=0;i<num_scores;i++){
        cout<<*(score+i)<<" ";
    }

    int total{0};
    for(int i=0;i<num_scores;i++){
        total = total + score[i];
    }

    cout<<"\nThe average is "<<total/num_scores<<endl;
}