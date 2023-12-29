
    #include <iostream>

    #include <string>

    #include <vector>
     
    using namespace std;
     
    class User {

    private:

        string name;

        int age;
     
    public:
     
        User(string n, int a) : name(n), age(a) {

            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

            cout << "User Constructor Called" << endl;

            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

        }
     
     
        ~User() {

            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

            cout << "User Destructor Called" << endl;

            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

        }
     
     
        string GetName() const { return name; }

        int GetAge() const { return age; }

    };
     
    class Student : public User {

    private:

        string studentID;

        vector<string> courses;
     
    public:
     
        Student(string id, string n, int a) : User(n, a), studentID(id) {

            cout << "Student Constructor Called" << endl;

            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

            cout<< "--------------------------------------------------------------"<<endl;

        }
     
     
        ~Student() {

            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

            cout << "Student Destructor Called" << endl;

            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

        }
     
     
        void Display_student_info() const {

            cout << "Student ID: " << studentID << endl;

            cout << "Name: " << GetName() << endl;

            cout << "Age: " << GetAge() << endl;

        }
     
     
        void Display_courses() const {

            if (courses.empty()) {

                cout<< "##############################################################"<<endl;

                cout << "ERROR: STUDENT DOESN'T HAVE ANY COURSES YET!" << endl;

            } else {

                cout << "COURSE LIST:" << endl;

                for (const string& course : courses) {

                    cout << "- " << course << endl;

                }

            }

        }
     
     
        void Add_Course(string course) {
     
                courses.push_back(course);
     
            }
     
    };
     
    int main() {

        string namex = "Sahed Ahmed";

        int agex = 21;

        string sidx = "23-52493-2";
     
     
        Student s1(sidx, namex, agex);

        s1.Display_student_info();

        s1.Display_courses();

        s1.Add_Course("INTRODUCTION TO COMPUTER SCIENCE");

        s1.Add_Course("INTRODUCTION TO PROGRAMMING");

        s1.Add_Course("OBJECT ORIENTED PROGRAMMING 1");

        s1.Add_Course("OBJECT ORIENTED PROGRAMMING 2");

        s1.Add_Course("INTRODUCTION TO MACHINE LEARNING");

        s1.Add_Course("INTRODUCTION TO DATA SCIENCE");

        cout<< "--------------------------------------------------------------"<<endl;

        s1.Display_courses();

        cout<< "--------------------------------------------------------------"<<endl;
     
        return 0;

    }

