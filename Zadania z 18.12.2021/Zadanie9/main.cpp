#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct student {
    string imie;
    string nazwisko;
    vector <int> oceny;
};

float average_of(struct student a){

    float suma =0;
    for(int i=0;i<a.oceny.size();i++){
        suma += a.oceny[i];
    }
    return suma/a.oceny.size();
}

student get_best_student(vector <student> A) {

     for (int i=0; i<A.size(); i++){
        for (int j=0; j<(A.size()-1); j++){
            if (average_of(A[j])>average_of(A[j+1])){
                swap(A[j],A[j+1]);
        }
        }
    }
        return A.back();
    }

/*student get_best_student.p(vector <student> *A) {

     for (int i=0; i<*A.size(); i++){
        for (int j=0; j<(A.size()-1); j++){
            if (average_of(A[j])>average_of(A[j+1])){
                swap(A[j],A[j+1]);
        }
        }
    }
        return A.back();
    }*/

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

    cout << average_of(stud1) << endl;
    cout << average_of(stud2) << endl;
    cout << average_of(stud3) << endl;

    vector <student> studenci = {stud1,stud2,stud3};
    vector <student> *wsk = &studenci;

    get_best_student(studenci);

    return 0;
}
