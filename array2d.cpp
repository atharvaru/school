// Atharva Usturge
// 12/18/24
// array 2lab
// extra extra subject
#include <iostream>
#include <iomanip>


using namespace std;


int main() {
    // number 1
    int rows, columns;
    cout << "Enter number of rows (1-5): ";
    cin >> rows;
    cout << "Enter number of columns (1-5): ";
    cin >> columns;

    if (rows < 1 || rows > 5 || columns < 1 || columns > 5) {
        cout << "Rows and columns must be between 1 and 5" << endl;
        return 1;
    }

    int array[5][5];
    srand(time(0));
// luh random num
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            array[i][j] = rand() % 50 + 1;
        }
    }
// luh matirx
    cout << "Original matrix: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << setw(4) << array[i][j];
        }
        cout << endl;
    }

    int maxElement = array[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << "Maximum element: " << maxElement << " at row " << maxRow << " and column " << maxCol << endl;

    // number 2
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = rand() % 100 + 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
// row
    for (int i = 0; i < n; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += arr[i][j];
        }
        cout << "Sum of row " << i << ": " << rowSum << ", Average: " << static_cast<double>(rowSum) / n << endl;
    }

    // column 
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < n; ++i) {
            colSum += arr[i][j];
        }
        cout << "Sum of column " << j << ": " << colSum << ", Average: " << static_cast<double>(colSum) / n << endl;
    }
    // number 3
]
    int numStudents;
    int numSubjects = 4; 

    cout << "Enter the number of students (1-10): ";
    cin >> numStudents;

    if (numStudents < 1 || numStudents > 10) {
        cout << "Number of students must be between 1 and 10" << endl;
        return 1;
    }

    int scores[numStudents][numSubjects];
    srand(time(0));

    
    for (int i = 0; i < numStudents; ++i) {
        for (int j = 0; j < numSubjects; ++j) {
            scores[i][j] = rand() % 51 + 50;
        }
    }

    //  extra subject
    cout << "Original matrix (Exam scores): " << endl;
    cout << "Student\tMath\tEnglish\tScience\tComputer Science" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << i + 1 << "\t";
        for (int j = 0; j < numSubjects; ++j) {
            cout << setw(4) << scores[i][j] << "\t";
        }
        cout << endl;
    }

    // Calculate and print the average score for each subject
    for (int j = 0; j < numSubjects; ++j) {
        int sum = 0;
        for (int i = 0; i < numStudents; ++i) {
            sum += scores[i][j];
        }
        double average = static_cast<double>(sum) / numStudents;
        switch (j) {
            case 0: cout << "Average score for Math: " << average << endl; break;
            case 1: cout << "Average score for English: " << average << endl; break;
            case 2: cout << "Average score for Science: " << average << endl; break;
            case 3: cout << "Average score for Computer Science: " << average << endl; break;
        }
    }

    }


