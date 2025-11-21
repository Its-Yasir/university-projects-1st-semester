#include <iostream>
using namespace std;

int main()
{
    //Task 1:
    
    bool isRunning = true;
    int fineForRegular = 0;
    int fineForReference = 0;
    int fineForSpecial = 0;
    int highest = 0;
    int noOfViolations = 0;
    int noOfRegulars = 0;
    int noOfReferences = 0;
    int noOfSpecial = 0;
    cout << "Enter student name book type and fine days" << endl;
    do {
        int i = 1;
        cout << "\nPress 1 to continue adding and 2 to stop: ";
        int m;
        cin >> m;
        if (m == 2) {
            break;
        }
        bool isOk = true;
        string name;
        cout << "\nEnter Student's name: ";
        cin >> name;
        string category;
        cout << "\nEner book category: ";
        cin >> category;
        int days;
        cout << "\n Enter number of days(1-30): ";
        cin >> days;
        if (!(category == "regular" || category == "reference" || category == "special")) {
            cout << "\nCategory can only be Regular Reference or Special";
            isOk = false;
        }
        if (days > 30 || days < 1) {
            cout << "\nEnter days between 1 to 30";
            isOk = false;
        }
        if (days > 30) {
            cout << "\nYou entered 30 days so program is existed!";
            isOk = false;
            isRunning = false;
        }
        int fine = 0;
        if (isOk) {
            noOfViolations++;
            if (category == "regular") {
                fine = days * 20;
                fineForRegular += fine;
                noOfRegulars++;
            }
            else if (category =="reference") {
                fine = days * 50;
                fineForReference += fine;
                noOfReferences++;
            }
            else if (category == "special") {
                fine = days * 100;
                fineForSpecial += fine;
                noOfSpecial++;
            } 
            if (days > 5) {
                int c = days / 5;
                fine = fine + (500 * c);
            }
            i++;
            cout << "\nFine for" << name << " is " << fine;
        }
    } while (isRunning);

    cout << "\nAverage for regular = " << fineForRegular / noOfRegulars;
    cout << "\nAverage for references = " << fineForReference/ noOfReferences;
    cout << "\nAverage for specials = " << fineForSpecial/ noOfSpecial;
    



    //Task 2:
    /*
    bool isRunning = true;
    int noOftickets = 0;
    int highest = 0;
    int i = 1;
    do {
        cout << "\nPress 1 to enter earning of an agent and 2 to exit program: ";
        int m;
        cin >> m;
        int noOfTicketForAgent = 0;
        int perAgentTicket = 0;
        int salary = 0;
        
        if (m == 1) {
            for (int j = 1; j <= 5; j++) {
                int daily = 0;
                cout << "\nEnter number of basic tickets for agent " << i << " day " << j<<" : ";
                int basicNumber;
                cin >> basicNumber;
                perAgentTicket += basicNumber;
                noOftickets += basicNumber;
                salary = salary + basicNumber * 50;
                daily = daily + basicNumber * 50;
                cout << "\nEnter number of intermediate tickets for agent " << i << " day " << j << " : ";
                int interNumber;
                cin >> interNumber;
                perAgentTicket += interNumber;
                noOftickets += interNumber;
                salary = salary + interNumber * 100;
                daily = daily + interNumber * 50;
                cout << "\nEnter number of advanced tickets for agent " << i << " day " << j << " : ";
                int advanceNumber;
                cin >> advanceNumber;
                salary = salary + advanceNumber * 200;
                daily = daily + advanceNumber * 50;
                perAgentTicket += advanceNumber;
                noOftickets += advanceNumber;
                if (daily > 1500) {
                    salary += 100;
                }
            }
            cout << "\nTotal tickets resolved for agent " << i << " is " << perAgentTicket;
            if (salary > 7000) {
                salary += 300;
            }
            if (salary > highest) {
                highest = salary;
            }
            cout << "\nTotal weekely earning for agent " << i << " is " << salary << endl;
        }
        else if (m == 2) {
            break;
        }
        else {
            cout << "\nInvalid input!";
        }
        i++;
    } while (isRunning);
    cout << "\nHighest salary is: " << highest << endl;
    cout << "Total tickets resolved are: " << noOftickets << endl;
    */
    return 0;
}