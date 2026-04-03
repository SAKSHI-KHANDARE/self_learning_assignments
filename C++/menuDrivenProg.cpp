#include<iostream>

using namespace std;

int main()
{
    int choice , amount;
    int balance =1000;

    do{
        cout<<"   Bank menu \n";
        cout<<"1.  Check Balance\n ";
        cout<<"2. Deposit Money\n ";
        cout<<"3. Withdraw money\n ";
        cout<<"4. Exit\n ";
        cout<<"Enter your choice :";
        
        cin>>choice;

        switch(choice)
        {
            case 1 : 
                cout<<"Check the balance is: "<<balance<<endl;
                break;

            case 2 :
                cout<<"Enter the amount to deposit = ";
                cin>>amount;
                balance = balance + amount;
                cout<<"Deposited money\n"<<balance<<endl;
                break;

            case 3 : 
                cout<<"Enter amount to withdraw = ";
                cin>>amount;

                if(amount<=balance)
                {
                    balance = balance - amount;
                    cout<<"Money withdraw successfully\n ";
                    cout<<"Total balance is :"<<balance<<endl;
                    
                }
                else
                {
                    cout<<"Insufficient balance\n ";
                }
                break;
                
            case 4 :
                cout<<"EXit\n";
                break;

            default:
                cout<<"Invalid Choice\n";
                
        }
    }while (choice!=4);
        
        return 0;
        
}