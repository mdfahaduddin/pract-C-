#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class students
{
    int reg;
    char name[50];
    int phy, che, math;
    double Percentage;
    char grade;
    void cal();
public:
    void enterdata();
    void display() const;
    void display_table() const;
    int getRegNum() const;
};
void students::cal()
{
    Percentage=(phy+che+math)/3.0;
    if(Percentage>=90)
        grade='A';
    else if(Percentage>=80)
        grade='B';
    else if(Percentage>=70)
        grade='C';
    else if(Percentage>=60)
        grade='D';
    else if(Percentage>=50)
        grade='E';
    else
        grade='F';
}
void students::enterdata()
{
    cout<<"\nEnter registration number of the student ";
    cin>>reg;
    cout<<"\nEnter student's Name: ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"\nEnter student's physics grade: ";
    cin>>phy;
    cout<<"\nEnter student's chemistry grade: ";
    cin>>che;
    cout<<"\nEnter student's mathematics grade: ";
    cin>>math;
    cal();
}
void students::display() const
{
    cout<<"\nRegistration Number: "<<reg;
    cout<<"\nName: "<<name;
    cout<<"\nPhysics: "<<phy;
    cout<<"\nChemistry: "<<che;
    cout<<"\nMathematics: "<<math;
    cout<<"\nPercentage: "<<Percentage;
    cout<<"\nLetter Grade: "<<grade;
}
void students::display_table() const
{
    cout<<reg<<setw(8)<<" "<<name<<setw(12)<<phy<<setw(6)<<che<<setw(6)<<math<<setw(6)
    <<Percentage<<setw(8)<<grade<<endl;
}
int  students::getRegNum() const
{
    return reg;
}
void write()
{
    students stu;
    ofstream o_File;
    o_File.open("students.dat",ios::binary|ios::app);
    stu.enterdata();
    o_File.write(reinterpret_cast<char *> (&stu), sizeof(students));
    o_File.close();
        cout<<"\n\nStudent record is Created ";
    cin.ignore();
    cin.get();
}
void display_all()
{
    students stu;
    ifstream in_File;
    in_File.open("students.dat",ios::binary);
    if(!in_File)
    {
        cout<<" Not able to open file !";
        cin.ignore();
        cin.get();
        return;
    }
    cout<<"\n\t\tDISPLAY ALL THE RECORD PRESENT !\n\n";
    while(in_File.read(reinterpret_cast<char *> (&stu), sizeof(students)))
    {
        stu.display();
    }
    in_File.close();
    cin.ignore();
    cin.get();
}
void display(int n)
{
    students stu;
    ifstream in_File;
    in_File.open("students.dat",ios::binary);
    if(!in_File)
    {
        cout<<" Not able to open file !";
        cin.ignore();
        cin.get();
        return;
    }
    bool f=false;
    while(in_File.read(reinterpret_cast<char *> (&stu), sizeof(students)))
    {
        if(stu.getRegNum()==n)
        {
             stu.display();
             f=true;
        }
    }
    in_File.close();
    if(f==false)
        cout<<"\n\nNot exist";
    cin.ignore();
    cin.get();
}
void modify(int n)
{
    bool find=false;
    students stu;
    fstream folder;
    folder.open("students.dat",ios::binary|ios::in|ios::out);
    if(!folder)
    {
        cout<<" Not able to open file !";
        cin.ignore();
        cin.get();
        return;
    }

        while (!folder.eof() && find==false)
    {
        folder.read(reinterpret_cast<char *> (&stu), sizeof(students));
        if(stu.getRegNum()==n)
        {
            stu.display();
            cout<<"\n\nPlease Enter The New Details of student"<<endl;
            stu.enterdata();
                int pos=(-1)*static_cast<int>(sizeof(stu));
                folder.seekp(pos,ios::cur);
                folder.write(reinterpret_cast<char *> (&stu), sizeof(students));
                cout<<"\n\n\t Updated";
                find=true;
        }
    }
    folder.close();
    if(find==false)
        cout<<"\n\n Not Found ";
    cin.ignore();
    cin.get();
}
void delete_student(int n)
{
    students stu;
    ifstream in_File;
    in_File.open("students.dat",ios::binary);
    if(!in_File)
    {
        cout<<" Not able to open file !";
        cin.ignore();
        cin.get();
        return;
    }
    ofstream o_File;
    o_File.open("Temporary.dat",ios::out);
    in_File.seekg(0,ios::beg);
    while(in_File.read(reinterpret_cast<char *> (&stu), sizeof(students)))
    {
        if(stu.getRegNum()!=n)
        {
            o_File.write(reinterpret_cast<char *> (&stu), sizeof(students));
        }
    }
    o_File.close();
    in_File.close();
    remove("students.dat");
    rename("Temporary.dat","students.dat");
    cout<<"\n\n\t Deleted ..";
    cin.ignore();
    cin.get();
}
void class_result()
{
    students stu;
    ifstream in_File;
    in_File.open("students.dat",ios::binary);
    if(!in_File)
    {
        cout<<" Not able to open file !";
        cin.ignore();
        cin.get();
        return;
    }
    cout<<"\n\n\t\tALL STUDENTS RESULT \n\n";
    cout<<"==========================================================\n";
    cout<<"Reg.No       Name        P    C    M      %age   Grade"<<endl;
    cout<<"==========================================================\n";
    while(in_File.read(reinterpret_cast<char *> (&stu), sizeof(students)))
    {
        stu.display_table();
    }
    cin.ignore();
    cin.get();
    in_File.close();
}
int main()
{
    char ch;
    int num;
    cout.setf(ios::fixed|ios::showpoint);
    cout<<setprecision(2);
    do
    {
    system("cls");
    cout<<"\n\n\t1.CREATE RECORD";
    cout<<"\n\n\t2.DISPLAY ALL RECORDS";
    cout<<"\n\n\t3.SEARCH RECORD ";
    cout<<"\n\n\t4.MODIFY RECORD";
    cout<<"\n\n\t5.DELETE RECORD";
    cout<<"\n\n\t6.DISPLAY RESULT";
    cout<<"\n\n\t7.EXIT";
    cout<<"\n\n\t Please Enter Your Choice (1-7): ";
    cin>>ch;
    system("cls");
    switch(ch)
    {
    case '1':   write(); break;
    case '2':   display_all(); break;
    case '3':   cout<<"\n\n\tPlease Enter Student's registration number: "; cin>>num;
                display(num); break;
    case '4':   cout<<"\n\n\tPlease Enter Student's registration number: "; cin>>num;
                modify(num);break;
    case '5':   cout<<"\n\n\tPlease Enter Student's registration number: "; cin>>num;
                delete_student(num);break;
    case '6' :  class_result(); break;
    case '7':   exit(0);
    default:    cout<<"\a";
    }
    }while(ch!='7');
    return 0;
}
