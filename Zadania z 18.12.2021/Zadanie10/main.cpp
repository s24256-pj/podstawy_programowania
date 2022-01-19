#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student {
    string imie;
    string nazwisko;
    vector <int> oceny;
};

struct group{
    string nazwa;
    vector <student> studenci;
};

void add_student(student const& new_student,group g){

    g.studenci.push_back(new_student);

}

int main()
{
    student stud1;
    stud1.imie = "Jan";
    stud1.nazwisko = "Kowalski";
    stud1.oceny = {2,5,4,3};

    student stud2;
    stud2.imie = "Janek";
    stud2.nazwisko = "Kowal";
    stud2.oceny = {5,4,3,4};

    student stud3;
    stud3.imie = "Piotr";
    stud3.nazwisko = "Nowak";
    stud3.oceny = {5,5,3,2};

    group gro1;
    gro1.nazwa = "1A";
    gro1.studenci = {};

    group gro2;
    gro2.nazwa = "1B";
    gro2.studenci = {};

    add_student(stud1,gro2);
    add_student(stud3,gro1);
    add_student(stud2,gro2);

    show(gro2);

    return 0;
}
