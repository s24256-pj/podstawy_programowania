#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student {
    string imie;
    string nazwisko;
    int srednia;
};

struct group{
    string nazwa;
    vector <student> studenci;
};

void add_student(student const& new_student,group &g){

    g.studenci.push_back(new_student);

}

void show(group g){

        cout << g.nazwa << ": ";

        for (auto stud: g.studenci) {
            cout << stud.imie << " " << stud.nazwisko << "; ";
        }
        cout << endl;
    }

//best_group

int main()
{
    student stud1;
    stud1.imie = "Jan";
    stud1.nazwisko = "Kowalski";
    stud1.srednia = 2.4;

    student stud2;
    stud2.imie = "Janek";
    stud2.nazwisko = "Kowal";
    stud2.srednia = 4.3;

    student stud3;
    stud3.imie = "Piotr";
    stud3.nazwisko = "Nowak";
    stud3.srednia = 2.9;

    student stud4;
    stud4.imie = "Anna";
    stud4.nazwisko = "Burak";
    stud4.srednia = 4.3;

    group gro1;
    gro1.nazwa = "1A";
    gro1.studenci = {};

    group gro2;
    gro2.nazwa = "1B";
    gro2.studenci = {};


    add_student(stud1,gro2);
    add_student(stud3,gro1);
    add_student(stud2,gro2);
    add_student(stud4,gro1);

    show(gro2);
    show(gro1);

    return 0;
}
