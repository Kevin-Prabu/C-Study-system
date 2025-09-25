#include <iostream>//input output system
#include <string>//allows for string
#include <thread>//allows for multiple programs to run at once
using namespace std;

class Studies{
    string name;
    int grade;
    string subject;
    string strenght;
    string learning_style;
    int choice;
    string learning_preference;
    public:
    void startup(string name="User",int grade=0,string subject="NULL"){
        cout<<"Creating user_id Please wait..."<<endl;
        this_thread::sleep_for(chrono::seconds(3));//"(run this program to sleep for 3 seconds)(choro means chronometer which measues time)
        cout<<"User ID has been created "<<endl;
        cout<<"\nusername: "<<name<<"\n"<<"Grade: "<<grade<<"\n"<<"Subject: "<<subject<<"\n"<<endl;
    }    
    void Creation(){
        cout<<"Please Enter some personal details"<<endl;
        cout<<"Enter your name: ";
        cin.ignore(); // Clear input buffer
        getline(cin, name);
        cout<<"Enter your grade: ";
        cin>>grade;
        cout<<"Enter the subject you want help in: ";
        cin.ignore(); // Clear input buffer
        getline(cin, subject);
        cout<<"please wait as your info is being saved\n"<<endl;
        this_thread::sleep_for(chrono::seconds(3));//"(run this program to sleep for 3 seconds)
        cout<<"is the details correct please check\n"<<"username: "<<name<<"\n"<<"Grade: "<<grade<<"\n"<<"Subject: "<<subject<<"\n"<<endl;
        this_thread::sleep_for(chrono::seconds(3));
    }
    void Flash_cards();
    void Spaced_Repetation();
    void Pomodoro_Method();
    void Feynman_Techniques();
    void Leitner_System();
    void PQ4R_Method();
    void SQ3R_Method();
    friend void Learning_style(Studies T);
    static void Study_Tips();
    void study_hour();
    void study_hour(int study_time);

    string subject1,subject2,subject3;
    Studies(){
        subject1="NULL";
        subject2="NULL";
        subject3="NULL";
    }
    Studies(string o, string p, string r){
        subject1=o;
        subject2=p;
        subject3=r;
    } 
};

class marks{
    int past_marks;
    int current_marks;

    public: 
    
    marks(){
        past_marks = 0;
        current_marks = 0;
    }

    marks(int a, int b){
        past_marks = a;
        current_marks = b;
    }

     int operator-(){
        return current_marks-past_marks;
    }


    void calc(){
        int pmarks,mark;
            cout<<"This is calculating the total marks"<<endl;
            cout<<"Please enter your previous marks and your current marks"<<endl;
            cout<<"Please enter your past marks: "; cin>>pmarks;
            cout<<"Please enter your current marks: "; cin>>mark;
                marks calc(pmarks,mark);
                int difference = -calc;
                    if(difference>0){
                        cout<<"you are improving as your marks have increased by: "<<difference<<endl;
                    }
                    else if(difference<0){
                        cout<<"you current methods of studying are highly ineffective please change them as your marks are: "<<difference<<endl;

                    }
                    else if(difference == 0){
                        cout<<"You current method is ineffective please change them as your marks are: "<<difference<<endl;
                    }
                }
    void total_marks();
    marks operator+(const marks &m) {
        marks result;
        result.past_marks = this->past_marks + m.past_marks;
        result.current_marks = this->current_marks + m.current_marks;
    return result;
}
    int getPastMarks() const {
        return past_marks;
    }

    int getCurrentMarks() const {
        return current_marks;
    }
};

class student{
    public:
    string student;
    void name(){
        cout<<"The name of the student is: "; cin>>student;
    }
};
class details: public student{
    public:
    string subject;
    int grade,hours_studied;
    void infos(){
        cout<<"Please enter the details of "<<student<<endl;
        cout<<"Subject: "; cin>>subject;
        cout<<"Marks: "; cin>>grade;
        cout<<"Hours Studied: "; cin>>hours_studied;
    }
};
class comp: public details{
    public:
    int choice;
    void display(comp second){
        cout<<"Do you wish to find \n1.Highest Grade\n2.Most hour studied\n"; cin>>choice;
        if (choice == 1){
            if(grade>second.grade){
                cout<<student<<" Has Scored more then then "<<second.student<<endl;
            }
            else if(grade<second.grade){
                cout<<second.student<<" Has Scored more then then "<<student<<endl;
            }
            else{
                cout<<"They both scored the same";
            }
        }
        else if(choice == 2){
            if(hours_studied>second.hours_studied){
                cout<<student<<" Has studied longer then "<<second.student<<endl;
            }
            else if(hours_studied<second.hours_studied){
                cout<<second.student<<" Has studied longer then "<<student<<endl;
            }
            else{
                cout<<"They both studied the same";
            }
        }
        else{
            cout<<"invalid choice";
        }
    }
};


class attendence{
	public:
	int attedencess;
	void mark(){
		cout<<"Please enter how much days you attendent classes: "; cin>>attedencess;
	}
};
class total_attendence{
	public:
	int total;
	void hours_learning(){
		cout<<"Please enter the total days of school was there: "; cin>>total;
	}
};
class calculations: public attendence, public total_attendence{
	public:
	int calc;
	double percent;
	void display(){
		mark();
		hours_learning();
		double attend = (double)attedencess / total * 100;
		int missed = total - attedencess;
		cout<<"So from your records you have missed "<<missed<<" days which is "<<attend<<"%"<<endl;
	}
};

void Studies::Flash_cards(){
    cout<<"======You have selelected Flash cards======\n"<<endl;
    cout<<"Do you wish to\n1.Learn more on flash_cards\n2.How to make it effective\n"<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"You wished to learn more on flashcards\n"<<endl;
        cout<<"Flash cards is a style of learning where the user will write the question on one side of the sheet and the answer on the other side of the sheet\n"<<endl;
    }
    else if (choice==2){
        cout<<"There is a few ways to make it more effective"<<endl;
        cout<<"1)make it more memorable\n2)Use mnemonic device\n3)Study it frequently\n4)Write your own information\n5)Use color code\n"<<endl;
    }
    else{
        cout<<"Sorry you selected a invalid option\n";
    }
    this_thread::sleep_for(chrono::seconds(2));
}
void Studies::Spaced_Repetation(){
    cout<<"======You have selelected Spaced_Repetation======\n"<<endl;
    cout<<"Do you wish to\n1.Learn more on Spaced_Repetation\n2.How to make it effective"<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"You wished to learn more on flashcards"<<endl;
        cout<<"its an evidence based learning technique that involves reviewing information at intervals to enhance long-term memory retention."<<endl;
    }
    else if (choice==2){
    cout<<"There is a few ways to make it more effective"<<endl;
    cout<<"1)Try using this without the help of flashcards\n2)Set up a porper enviormenet and dont execpt results in a few days\n3)try spacing it out more and more"<<endl;
    }
    else{
        cout<<"Sorry you selected a invalid option";
    }
    this_thread::sleep_for(chrono::seconds(2));
}
void Studies::Pomodoro_Method(){
    cout<<"======You have selelected Pomodoro_Method======\n"<<endl;
    cout<<"Do you wish to\n1.Learn more on Pomodoro_Method\n2.How to make it effective"<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"You wished to learn more on Pomodoro Method"<<endl;
        cout<<"It involes breaking down a task to 25 minutes each with a break of 5 minutes sually for 8 cycles then taking 1 hour break"<<endl;
    }
    else if (choice==2){
    cout<<"There is a few ways to make it more effective"<<endl;
    cout<<"1)Do the hardest task in the first 25 minutes so the rest of your session will go well\n2)after 4 or 8 cycles take a 15min or 30 min break respectivtily\n3)do max of 8 cycles in 1 sitting"<<endl;
    }
    else{
        cout<<"Sorry you selected a invalid option";
    }
    this_thread::sleep_for(chrono::seconds(2));
}
void Studies::Feynman_Techniques(){
    cout<<"======You have selelected Feynman_Techniques======\n"<<endl;
    cout<<"Do you wish to\n1.Learn more on Feynman_Techniques\n2.How to make it effective"<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"You wished to learn more on Feynman Techniques"<<endl;
        cout<<"its a study method for students to learn through the act of teaching "<<endl;
    }
    else if (choice==2){
    cout<<"There is a few ways to make it more effective"<<endl;
    cout<<"1)Set proper deadlines on your learning\n2)Set spefici goals such as finishing a chapter in a few days instead of 1 day\n3)first understand the concept then only teach"<<endl;
    }
    else{
        cout<<"Sorry you selected a invalid option";
    }
    this_thread::sleep_for(chrono::seconds(2));
}
void Studies::Leitner_System(){
    cout<<"======You have selelected Leintner System======\n"<<endl;
    cout<<"Do you wish to\n1.Learn more on Leitner_System\n2.How to make it effective"<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"You wished to learn more on Leitner_System"<<endl;
        cout<<"it is a mix of flashcards, card boxes, and spaced repetition to leanr more effectivily "<<endl;
    }
    else if (choice==2){
    cout<<"There is a few ways to make it more effective"<<endl;
    cout<<"1)take advantage of repeation and flashcards\n2)review the flashcards and repeation properly"<<endl;
    }
    else{
        cout<<"Sorry you selected a invalid option";
    }
    this_thread::sleep_for(chrono::seconds(2));
}
void Studies::PQ4R_Method(){
    cout<<"======You have selelected PQ4R_Method======\n"<<endl;
    cout<<"Do you wish to\n1.Learn more on PQ4R_Method\n2.How to make it effective"<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"You wished to learn more on PQ4R_Method"<<endl;
        cout<<"PQ4R stduy method is a combination of Preview the materials, questions,read,reflect,recite and review this method allows for a deeper understand of the topic"<<endl;
    }
    else if (choice==2){
    cout<<"There is a few ways to make it more effective"<<endl;
    cout<<"1)Active reading and reflection\n2)use this when your first learning a new chapter\n"<<endl;
    }
    else{
        cout<<"Sorry you selected a invalid option";
    }
    this_thread::sleep_for(chrono::seconds(2));
}
void Studies::SQ3R_Method(){
    cout<<"======You have selelected SQ3R_Method======\n"<<endl;
    cout<<"Do you wish to\n1.Learn more on SQ3R_Method\n2.How to make it effective"<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"You wished to learn more on SQ3R Method"<<endl;
        cout<<"SQ3R method is the combiation of Survey, Question, Read, Recite and review it is almost same as PQ4R the only difference is there is no reflection on the topic"<<endl;
    }
    else if (choice==2){
    cout<<"There is a few ways to make it more effective"<<endl;
    cout<<"1)this is a faster versoin of the SQ£R method\n2)use this when your first learning a new chapter"<<endl;
    }
    else{
        cout<<"Sorry you selected a invalid option";
    }
    this_thread::sleep_for(chrono::seconds(2));
}
void Learning_style(Studies T){
    string choice;
    int choice2;
    cout<<"=========Learning Preference=========="<<endl;
    do{
        cout<<"Check out each learning style and select the one which matchs your personality\n1.Auditory Learners\n2.Visual Learners\n3.Physical Learners"<<endl;
        cout<<"Please select one that matchs you the best: ";
        cin.ignore();
        getline(cin,T.learning_preference);
        cout<<"you have selected: "<<T.learning_preference<<endl;
        cout<<"are you sure(y/n): ";
        cin>>choice;
        if (choice=="n"){
            cout<<"Deleting information please wait...\n";
            this_thread::sleep_for(chrono::seconds(3));
            cout<<"info successfully deleted\n\n";
            this_thread::sleep_for(chrono::seconds(2));
        }
        else{
            cout<<"successfully added";
        }
    }while(choice == "n");
}
void Studies::Study_Tips() {
    cout << "\nStudy Tips\n"<<endl;
    cout<<"1. Study in short, focused sessions.\n2. Minimize distractions while studying.\n3. Test yourself regularly.\n4. Teach someone else to retain better.\n5. Take regular breaks and stay hydrated"<<endl;
    this_thread::sleep_for(chrono::seconds(2));
}
void Studies::study_hour(){
    int hours,week,month,year;
    hours=2;
    cout<<"Since you didnt pick a proper time lets take the average of 2 hours"<<endl;
    week=hours*7;
    month=hours*31;
    year=month*12;
        cout<<"therefore with our calucations you study\n1.Per day: "<<hours<<"\n2.Per week: "<<week<<"\n2.Per month: "<<month<<"\n4.Per year: "<<year<<endl;    
}
void Studies::study_hour(int study_time){
    int hours,week,month,year;
    hours=study_time;
    cout<<"Thanks for entering you time of "<<hours<<" hours"<<endl;
    week=hours*7;
    month=hours*31;
    year=month*12;
    cout<<"therefore with our calucations you study\n1.Per day: "<<hours<<"\n2.Per week: "<<week<<"\n2.Per month: "<<month<<"\n4.Per year: "<<year<<endl;  
}
void marks::total_marks() {
    int p1,c1,p2,c2,name1,name2;
    cout << "\n--- Total Marks Calculator (2 people) ---\n";
    cout <<"Enter the first person name:"; cin>>name1;
    cout <<"Enter the second person name:"; cin>>name2;
    
    cout << "Enter past and current marks for "<<name1<<"\n";
    cout << "Past: "; cin >> p1;
    cout << "Current: "; cin >> c1;

    cout << "Enter past and current marks for "<<name2<<"\n";
    cout << "Past: "; cin >> p2;
    cout << "Current: "; cin >> c2;

    marks exam1(p1, c1), exam2(p2, c2);
    marks total = exam1 + exam2;

    cout << "\nTotal Past Marks: " << total.getPastMarks();
    cout << "\nTotal Current Marks: " << total.getCurrentMarks() << "\n";
}

int main(){
    Studies s,s1;
    marks m;   
    int selection,hours;
    string choice,choice2,choice3,pick,pick1;
    string o,p,r;
    int n=1;
    s.startup();
    do{
        cout<<"Do you wish to create a userID or skip this process: ";
        cin>>choice;
        if (choice=="user"){
            s.Creation();
            cout<<"Are you sure the details are correct(y/n): ";
            cin>>choice2;
        }
        else if(choice=="skip"){
            s.startup();
            cout<<"Are you sure(y/n): ";
            cin>>choice2;
        } 
        else{
            cout<<"invalid option"<<endl;
            return 0;
        }
    }while(choice2 == "n");

    Learning_style(s); 

    cout<<"\n"<<"Do you wish to add 3 subjects for a better learning experience"<<endl;
    cin>>choice3;
    if (choice3=="yes"){
        cout<<"Please select your subjects"<<endl;
        cout<<"subject 1: "; cin>>o;
        cout<<"subject 2: "; cin>>p;
        cout<<"subject 3: "; cin>>r;
        Studies s1(o,p,r);
        cout<<"You have selected\n Subject 1:"<<s1.subject1<<"\nSubject 2:"<<s1.subject2<<"\nSubject 3:"<<s1.subject3<<"\nOur learning assitance will remeber that"<<endl;    
    }
    else if(choice3=="no"){
        Studies s1;
        cout<<"you have selected \n Subject 1:"<<s1.subject1<<"\nSubject 2:"<<s1.subject2<<"\nSubject 3:"<<s1.subject3<<endl;
    }
    
    do{
        cout<<"\033[32m\n========LEARNING STYLE========\033[0m\n1.FlashCards\n2.Spaced Repetation\n3.Pomodoro Method\n4.Feynman Techniques\n5.Leitner System\n6.PQ4R Method\n7.SQ3R Method\n8.Studying tips\n9. Progress\n10. Total Marks (Binary Operator)\n11. Exit\n\nPlease Enter a learning style: ";
        cin>>selection;
        switch(selection){
            case 1:
                s.Flash_cards();
                break;
            case 2:
                s.Spaced_Repetation();
                break;
            case 3:
                s.Pomodoro_Method();
                break;
            case 4:
                s.Feynman_Techniques();
                break;
            case 5:
                s.Leitner_System();
                break;
            case 6:
                s.PQ4R_Method();
                break;
            case 7:
                s.SQ3R_Method();
                break;
            case 8:
                Studies::Study_Tips();
                break;
            case 9:
                m.calc();
                break;
            case 10:
                m.total_marks();
            default:
                cout<<"Thank you for visting\n"<<endl;
        } 
    } while (selection != 11);

    string interest = "no";
    int selection2;

    do{
    cout<<"After the study session lets have a relaxing break, We have some fun games for you"<<endl;
    cout<<"Do you wish to \n1.See how long you study in a year\n2.Compare yourself with a friend\nPlease select a choice"; cin>>selection2;
    if (selection2 == 1){
        cout<<"okay please\nEnter 1 if you want to see your own study time \nPress 2 if you wish to see world average\nPress 3 If you wish to see your attendence \nPlease write your choice: ", cin>>pick1;
            if (pick1=="1"){
                cout<<"Please enter your study hours: ", cin>>hours;
                s.study_hour(hours);
            }
            else if(pick1=="2"){
                cout<<"heres is the worlds average"<<endl;
                s.study_hour();
            }
    }
    else if(selection2 == 2){
        comp first,second;
        cout<<"Please enter the details of the first student"<<endl;
        first.name();
        first.infos();

        cout<<"Please enter the details of the Second student"<<endl;
        second.name();
        second.infos();

        first.display(second);
        cout<<"\n\n";
        }
        else if (selection2 == 3){
            calculations cc;
	        cc.display();
        }
        else{
            cout<<"Sorry its a invalid choice";
        }

    cout<<"Do you wish to continue the FUN: "; cin>>interest;
    }while (interest != "no");
    return 0;
}
