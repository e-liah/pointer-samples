#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>

using namespace std;

// Define a constant for the maximum number of students
const int MAX_STUDENTS = 100;

struct Content {
    int i, StudentNum[MAX_STUDENTS];
    string name[MAX_STUDENTS], courseYear[MAX_STUDENTS], Result;
    double gwa[MAX_STUDENTS], Science[MAX_STUDENTS], Math[MAX_STUDENTS], Prog[MAX_STUDENTS];
};

void wallpaper() {
    cout << "\t\t\t\t\tWelcome To Bagsakan School Records";

    cout << endl;

    for (int i = 0; i < 37; i++) {
        cout << "_-_";
    }
    cout << endl;
}

void addinfo(Content& P) {
    wallpaper();
    cout << endl;
    cout << "\t\t\t\t\tEnter number of students: ";
    cin >> P.i;
    cin.ignore();

    cout << "\t\t\t\t\tEnter student names:\n";
    for (int j = 0; j < P.i; j++) {
        string name;
        cout << "\t\t\t\t\t";
        getline(cin, name);
        P.name[j] = name; // Store each student name in the name array
    }
    cout << endl;

    cout << "\t\t\t\t\tEnter Student Number:\n";
    for (int j = 0; j < P.i; j++) {
        cout << "\t\t\t\t\t";
        cin >> P.StudentNum[j];
    }
    cin.ignore();
    cout << endl;

    cout << "\t\t\t\t\tEnter Student Course And Year:\n";
    for (int j = 0; j < P.i; j++) {
        string coursenum;
        cout << "\t\t\t\t\t";
        getline(cin, coursenum);
        P.courseYear[j] = coursenum; // Store each course and year in the courseYear array
    }
    cout << endl;
}


void enterSubj(Content& P) {
    double average[MAX_STUDENTS];

    for (int i = 0; i < P.i; i++) {
Return:
        cout << "\t\t\t\t\tStudent " << i + 1 << " Grades:\n";
        cout << "\t\t\t\t\tMath:" << endl;
        cout << "\t\t\t\t\t";
        cin >> P.Math[i];
        if (P.Math[i] < 0 || P.Math[i] > 100) {
            cout << "\t\t\t\t\tGrade is not correct";
            system("pause");
            cout << endl;
            goto Return;
        }
        if (P.Math[i] >= 75) {
            P.Result.append("\t\t\t\t\tMath: Passed\n");
        }
        else {
            P.Result.append("\t\t\t\t\tMath: Failed\n");
        }
        cout << "\t\t\t\t\tScience:" << endl;
        cout << "\t\t\t\t\t";
        cin >> P.Science[i];
        if (P.Science[i] < 0 || P.Science[i] > 100) {
            cout << "\t\t\t\t\tGrade is not correct";
            system("pause");
            cout << endl;
            goto Return;
        }
        if (P.Science[i] >= 75) {
            P.Result.append("\t\t\t\t\tScience: Passed\n");
        }
        else {
            P.Result.append("\t\t\t\t\tScience: Failed\n");
        }
        cout << "\t\t\t\t\tProgramming:" << endl;
        cout << "\t\t\t\t\t";
        cin >> P.Prog[i];
        if (P.Prog[i] < 0 || P.Prog[i] > 100) {
            cout << "\t\t\t\t\tGrade is not correct";
            system("pause");
            cout << endl;
            goto Return;
        }
        if (P.Prog[i] >= 75) {
            P.Result.append("\t\t\t\t\tProgramming: Passed\n");
        }
        else {
            P.Result.append("\t\t\t\t\tProgramming: Failed\n");
        }
        average[i] = (P.Math[i] + P.Science[i] + P.Prog[i]) / 3;
        P.gwa[i] = average[i];
    }
    system("pause");
    system("cls");
}

void displayinfoone(Content& P) {
    wallpaper();
    cout << endl;

    int studentNum;
    cout << "\n\t\t\t\t\tEnter student number: ";
    cin >> studentNum;

    int index = -1;
    for (int i = 0; i < P.i; i++) {
        if (P.StudentNum[i] == studentNum) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "\t\t\t\t\tNo student found with that student number." << endl;
        system("cls");
        return;
    }

    cout << "\t\t\t\t\tStudent name: " << P.name[index] << endl;
    cout << "\t\t\t\t\tStudent number: " << P.StudentNum[index] << endl;
    cout << "\t\t\t\t\tCourse and year: " << P.courseYear[index] << endl;
    cout << "\t\t\t\t\tGrades: " << endl;
    cout << "\t\t\t\t\tMath: " << P.Math[index] << endl;
    cout << "\t\t\t\t\tScience: " << P.Science[index] << endl;
    cout << "\t\t\t\t\tProgramming: " << P.Prog[index] << endl;

    double average = (P.Math[index] + P.Science[index] + P.Prog[index]) / 3.0;
    double gwa = average;

    if (gwa < 70) {
        gwa = 0.5;
    }
    else if (gwa >= 70 && gwa < 76) {
        gwa = 1.0;
    }
    else if (gwa >= 76 && gwa < 80) {
        gwa = 1.5;
    }
    else if (gwa >= 80 && gwa < 85) {
        gwa = 2.0;
    }
    else if (gwa >= 85 && gwa < 89) {
        gwa = 2.5;
    }
    else if (gwa >= 89 && gwa < 94) {
        gwa = 3.0;
    }
    else if (gwa >= 94 && gwa < 97) {
        gwa = 3.5;
    }
    else {
        gwa = 4.0;
    }

    cout << "\t\t\t\t\tGWA: " << fixed << setprecision(2) << gwa << endl;

    system("pause");
    system("cls");
}


void displayinfoall(Content& P) {
    wallpaper();
    cout << endl;
    cout << "\t\t\t\t\tStudent names and numbers:\n";
    for (int i = 0; i < P.i; i++) {
        cout << "\t\t\t\t\t"<< P.name[i] << "(" << P.StudentNum[i] << ")" << endl;
    }
    cout << endl;

    cout << "\t\t\t\t\tStudent Course And Year:\n";
    for (int i = 0; i < P.i; i++) {
        cout << "\t\t\t\t\tStudent " << i + 1 << ": " << P.courseYear[i] << endl;
    }
    cout << endl;

    cout << "\t\t\t\t\tSubject Results:\n";
    cout  << P.Result;

    for (int i = 0; i < P.i; i++) {
        double average = (P.Math[i] + P.Science[i] + P.Prog[i]) / 3.0;
        double gwa = average;

        if (gwa < 70) {
            gwa = 0.5;
        }
        else if (gwa >= 70 && gwa < 76) {
            gwa = 1.0;
        }
        else if (gwa >= 76 && gwa < 80) {
            gwa = 1.5;
        }
        else if (gwa >= 80 && gwa < 85) {
            gwa = 2.0;
        }
        else if (gwa >= 85 && gwa < 89) {
            gwa = 2.5;
        }
        else if (gwa >= 89 && gwa < 94) {
            gwa = 3.0;
        }
        else if (gwa >= 94 && gwa < 97) {
            gwa = 3.5;
        }
        else {
            gwa = 4.0;
        }

        cout << "\t\t\t\t\tStudent " << i + 1 << " GWA: " << fixed << setprecision(2) << gwa << endl;

        system("pause");
        system("cls");

    }
}


int main() {
    Content P;
    int choice;
    system("Color 0B");

    cout << "\t\t\t\t\tWelcome To Bagsakan School Records";

    cout << endl;

    for (int i = 0; i <37; i++) {
        cout << "_-_";
    }
        
    do {
        cout << endl;
        cout << "\t\t\t\t\tWhat would you like to do?\n";
        cout << "\t\t\t\t\t1. Add student info\n";
        cout << "\t\t\t\t\t2. Display all student info\n";
        cout << "\t\t\t\t\t3. Display student info by student number\n";
        cout << "\t\t\t\t\t4. Exit\n";
        for (int i = 0; i < 37; i++) {
            cout << "_-_";
        }
        cout << endl;
        cout << "\t\t\t\t\tEnter your choice: ";
 
        cin >> choice;


        switch (choice) {
        case 1:
            Sleep(1000);
            system("cls");
            addinfo(P);
            enterSubj(P);
            break;

        case 2:
            Sleep(1000);
            system("cls");
            displayinfoall(P);
            break;

        case 3:
            Sleep(1000);
            system("cls");
            displayinfoone(P);
            break;


        case 4:
            Sleep(1000);
            system("cls");
            cout << "\t\t\t\t\tExiting program..." << endl;
            break;

        default:
            Sleep(1000);
            system("cls");
            cout << "\t\t\t\t\tInvalid choice. Please try again." << endl;
        }

        cout << endl;

    } while (choice != 4);

    return 0;
}
