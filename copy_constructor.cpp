// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student 
{
    private:
        int roll;
        int marks;
    public:
        student(int a,int b)
        {
            roll=a;
            marks=b;
        }
        student(student &a);
        void show_data()
        {
            cout <<roll<<endl;
            cout <<marks<<endl;
        }
        
};

student :: student(student &t)
{
    roll=t.roll;
    marks=t.marks;
}

int main() {
   student s1(12,100);
   s1.show_data();
   
   student s2(s1);
   s2.show_data();
    return 0;
}
