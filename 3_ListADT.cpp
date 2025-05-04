#include <iostream>
using namespace std;

class List{
    private:
    int arr[5];
    int size;

    public:
    //class constructor
    List(){
        size= 0;
    }

    void insertBeginning(int num){ //inserts element at the beginning of the array
        if (size>=5){
            cout << "Array is full.\n";
            return;
        }
        else{
            for (int i=size; i>0; i--){
                arr[i]=arr[i-1];
            }
            arr[0]=num;
            size++;
        }
    }

    void insertEnd(int num){    //inserts element at the end of the array
        if (size>=5){
            cout << "Array is full.\n";
            return;
        }
        else{
            arr[size]=num;
            size++;
        }
    }

    void insertPos(int pos, int num){   //inserts element at a given position in the array
        if (size>=5){
            cout << "Array is full.\n";
        }
        else{
            for (int i=size; i>pos; i--){
                arr[i]=arr[i-1];
            }
            arr[pos]=num;
            size++;
        }
    }

    int deleteBeginning(){  //deletes element from the beginning of the array
        if (size<=0){
            cout << "Array is empty.\n";
            return -1;
        }
        else{
            int i;
            int deleted = arr[0];
            for (i=0; i<size-1; i++){
                arr[i]=arr[i+1];
            }
            size--;
            return deleted;
        }
    }
    int deleteEnd(){    //deletes element from the end of the array
        if (size<=0){
            cout << "Array is empty.\n";
            return -1;
        }
        else{
            int deleted = arr[size-1];
            size--;
            return deleted;
        }
    }
    int deletePos(int pos){ //deletes element from a given position in the array
        if (size<=0){
            cout << "Array is empty.\n";
        }
        else{
            int deleted = arr[pos];
            for (int i=pos; i<size-1; i++){
                arr[i]=arr[i+1];
            }
            size--;
            return deleted;
        }
    }
    void search(int num){   //searches for an element in the array
        if (size<=0){
            cout << "Array is empty.\n";
        }
        else{
            int found = 0;
            for (int i=0; i<size; i++){
                if (arr[i]==num){
                    found = 1;
                    cout << "Element found at index position: " << i;
                }
            }
            if (found==0){
                cout << "Element not found.\n";
            }
        }
    }
    void rotate(int num){   //rotates the array to the right by a given number of times
        if (size<=0){
            cout << "Array is empty.\n";
        }
        else{
            int i, j;
            for (i=0; i<num; i++){
                int temp = arr[size-1];
                for (j=size-1; j>0; j--){
                    arr[j]=arr[j-1];
                }
                arr[j]=temp;
            }
        }
    }
    void display(){ //displays the array
        for (int i=0; i<size; i++){
            cout << arr[i];
            cout << " ";
        }
    }
};

int main(){
    class List list;
    int choice, num, pos;
    printf("1. Insert at the beginning\n2. Insert at the end\n3. Insert at a position\n4. Delete at the beginning\n5. Delete at the end\n6. Delete at a position\n7. Search\n8. Rotate\n9. Display\n10. Exit\n");
    while (true){
        cout << "\nType your choice: ";
        cin >> choice;
        if (choice==10){
            cout << "Exiting...\n";
            break;
        }
        else{
            switch (choice){
                case 1:
                cout << "Enter number to insert in beginning: ";
                cin >> num;
                list.insertBeginning(num);
                list.display();
                break;
                
                case 2:
                cout << "Enter number to insert in the end: ";
                cin >> num;
                list.insertEnd(num);
                list.display();
                break;

                case 3:
                cout << "Enter position to insert at: ";
                cin >> pos;
                cout << "Enter number to insert: ";
                cin >> num;
                list.insertPos(pos, num);
                list.display();
                break;

                case 4:
                cout << list.deleteBeginning() << endl;
                list.display();
                break;

                case 5:
                cout << list.deleteEnd() << endl;
                list.display();
                break;
                
                case 6:
                list.display();
                cout << "Enter position to delete: ";
                cin >> pos;
                cout << list.deletePos(pos) << endl;
                list.display();
                break;

                case 7:
                cout << "Enter number to search: ";
                cin >> num;
                list.search(num);
                break;

                case 8:
                cout << "Enter number of times to rotate: ";
                cin >> num;
                list.rotate(num);
                list.display();
                break;

                case 9:
                list.display();
                break;
                
                default:
                cout << "Invalid choice. Enter again.\n";
                break;
            }
        }
    }
}