#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    int status {1};
    char action {'P'};
    vector <int> numberList;
	while(status == 1){
        cout << "P - Print Numbers" << endl;
        cout << "A - Add a Number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl << endl;
        
        cout << "Enter your choice: ";
        
        cin >> action;
        
        switch(action){
            case 'P':
            case 'p':
                if(numberList.size() == 0){
                    cout << "[] - the list is empty" << endl << endl;
                }else{
                    for(unsigned int count {0}; count < numberList.size(); count++){
                    cout << "[ " << numberList.at(count);
                } 
                cout <<" ]" << endl; 
                }
            break;
            case 'A':
            case 'a':
            {
                int addNumber {0};
                cout << "Enter an integer to add to the list: " << endl;
                cin >> addNumber;
                numberList.push_back(addNumber);
                cout << addNumber << " added" << endl;
                break; 
            }
            //mean should be a double not an integer
            case 'M':
            case 'm':
            {
              int sum {0};
              double average {0.0};
              unsigned int count {1};
              while(count - 1 < numberList.size()){
                  sum += numberList.at(count-1);
                  average = double(sum) / double(count);
                  count++;
              }
              cout << "The mean is: " << average << endl;
              break; 
            }
            case 'S':
            case 's':
            cout << "You chose s" << endl;
            break;
            case 'L':
            case 'l':
            cout << "You chose l" << endl;
            break;
            case 'Q':
            case 'q':
            cout << "Goodbye" << endl;
            status = 0;
            break;
            default : 
            cout << "That is not a valid choice" << endl;
        }
    }
}
