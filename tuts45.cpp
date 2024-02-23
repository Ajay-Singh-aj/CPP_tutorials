#include<iostream>
//this is for virtual base class in which we remove amibiguity when a class is derived from two other class
//these other two are derived from any other class .
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<< roll_no<<endl;
        }
};

class Test : public virtual Student{
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2){
                maths = m1;
                physics = m2;
            }

            void print_marks(void){
                cout << "You result is here: "<<endl
                     << "Maths: "<< maths<<endl
                     << "Physics: "<< physics<<endl;
            }
};

class Sports: public virtual Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }

};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<< "Your total score is: "<<total<<endl;
        }
        void analysis(void){
            if ((int)total>=150){
                cout<<"Congrats! You have passed the exam.\n";
            }
            else{
                cout<<"Sorry! you have failed your exam.\n";
            }
        }
};
int main(){
    Result harry;
    harry.set_number(4200);
    harry.set_marks(78.9, 99);
    harry.set_score(9);
    harry.display();
    harry.analysis();
    return 0;
}
