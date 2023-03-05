#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student
{
    private:
    vector <double> note;
    string nume;
    string prenume;
    public:
    Student(double nota1, double nota2, double nota3, double nota4, double nota5, string nume_student, string prenume_student)
    {
        note.push_back(nota1);
        note.push_back(nota2);
        note.push_back(nota3);
        note.push_back(nota4);
        note.push_back(nota5);
    }
    double Media(double nota1, double nota2, double nota3, double nota4, double nota5)
    {
        double medie=(float)(nota1+nota2+nota3+nota4+nota5)/5;
        return medie;
    }
    int Integralist(double nota1, double nota2, double nota3, double nota4, double nota5)
    {
        if(nota1>=5 && nota2>=5 && nota3>=5 && nota4>=5 && nota5>=5)
            return 1;
        else
            return 0;
    }
    int BursaMerit(double nota1, double nota2, double nota3, double nota4, double nota5)
    {
        double medie=(float)(nota1+nota2+nota3+nota4+nota5)/5;
        if(medie>=8 && medie<=9.8)
            return 1;
        else
            return 0;
    }
    int BursaPerformanta(double nota1, double nota2, double nota3, double nota4, double nota5)
    {
        double medie=(float)(nota1+nota2+nota3+nota4+nota5)/5;
        if(medie>=9.8 && medie<=10)
            return 1;
        else
            return 0;
    }
};

int main()
{
    int i,n,nr1=0,nr2=0;
    string nume,prenume;
    cin>>n;
    vector <Student> elev;
    int x,y,z;
    for(i=0;i<n;i++)
    {
        cin>>nume>>prenume;
        double grade1,grade2,grade3,grade4,grade5;
        cin>>grade1>>grade2>>grade3>>grade4>>grade5;
        elev.push_back(Student(grade1,grade2,grade3,grade4,grade5,nume,prenume));
        x=elev[i].BursaMerit(grade1,grade2,grade3,grade4,grade5);
        y=elev[i].BursaPerformanta(grade1,grade2,grade3,grade4,grade5);
        z=elev[i].Integralist(grade1,grade2,grade3,grade4,grade5);
        if(x==1 && z==1)
            nr1=nr1+1;
        if(y==1 && z==1)
            nr2=nr2+1;
    }
    cout<<nr1<<" "<<nr2;
}