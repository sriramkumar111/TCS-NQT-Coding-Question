//In a database there are N Students, the fields of the table are (Name, age, grade, Gender) 
//Your task is to return the name of students whose age is greater than 20 years old &
// Calculate the average of grades using ascli values of female Candidates

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n
    vector<string> ans;
    int totalFemale = 0, totalGrade = 0;
    while(n--) {
        string name, gender;
        char grade;
        int age;
        cin >> name >> age >> grade >> gender;

        if(age > 20)
            cout << name << endl;
        
        if (gender == "Female") {
            totalFemale++;
            totalGrade += grade; 
        }
    }
    double avg = (double) (totalGrade / totalFemale);
    cout << avg << endl;
    
}

//if input is comma separated
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    cin.ignore();  // Ignore the newline character after reading `n`
//
//    vector<string> ans;
//    int totalFemale = 0, totalGrade = 0;
//
//    while (n--) {
//        string input;
//        getline(cin, input);  // Read entire line as a string
//
//        stringstream ss(input);  // Convert string into stream
//        string name, gender, ageStr, gradeStr;
//        int age;
//        char grade;
//
//        // Extract values by splitting on commas
//        getline(ss, name, ',');  
//        getline(ss, ageStr, ',');  
//        getline(ss, gradeStr, ',');  
//        getline(ss, gender, ',');  
//
//        // Convert age and grade to integer and char
//        age = stoi(ageStr);  
//        grade = gradeStr[0];  
//
//        // Output students older than 20
//        if (age > 20)
//            cout << name << endl;
//
//        // Calculate total ASCII sum of grades for female candidates
//        if (gender == "Female") {
//            totalFemale++;
//            totalGrade += grade;  // Adds ASCII value of the grade
//        }
//    }
//
//    // Compute and print the average grade value for females
//    double avg = (totalFemale > 0) ? (double)totalGrade / totalFemale : 0;
//    cout << fixed << setprecision(2) << avg << endl;
//
//    return 0;
//}
////Example input
////3
//Alice,22,A,Female
//Bob,19,B,Male
//Catherine,21,C,Female


//output
//Alice
//Catherine
//66.00

