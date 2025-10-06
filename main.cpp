#include <iostream>
int n = 2;
int amountOfArray = 10;
using namespace std;

void checkConditionIndexForInsert(int &index){
    do{
        cout<<"Index must be positive and smaller than "<< n + 1<<endl;
        cout<<"Enter Index: "; cin>>index;
    }while((index < 0 || index > n));
    
}
void checkConditionIndexForDelete(int &index){
    do{
        cout<<"Index must be positive and smaller than "<< n <<endl;
        cout<<"Enter Index: "; cin>>index;
    }while((index < 0 || index >= n));
    
}
void insertNewElement(int *arr, int &index, int value){
    if(index == n){
        arr[index] = value;
    } else {
        for(int i = n; i > index; i--){
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
    }
    if(n < 9){
        n++;
    }
}// kit merl tha trov dak loop marn dorng oy vea swap 8 9, 7 8, 6 7 ... trem index del ke pjol
void deleteElement(int *arr, int &index){
    for(int i = index; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    if(n > 0){
        n--;
    }
}

int main(){
    
        int a[amountOfArray] = {1,2};
        int option;
    while(true){
        cout<<"1. Input New Element"<<endl;
        cout<<"2. Delete Element"<<endl;
        cout<<"3. View Element"<<endl;
        cout<<"Enter Option: ";cin>>option;
        int inputIndex,inputValue;
        switch(option){
            case 1:
                checkConditionIndexForInsert(inputIndex);
                cout<<"Enter Value: "; cin>>inputValue;
                insertNewElement(a,inputIndex,inputValue);
            break;
            case 2:
                checkConditionIndexForDelete(inputIndex);
                deleteElement(a,inputIndex);
            break;
            case 3:
                for(int i = 0; i < n; i++){
                    cout<<"Value "<<i<<": "<<a[i]<<endl;
                }
            break;
            
        }
    }

    return 0;
}
