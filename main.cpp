#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// --- PJESA E PËRBASHKËT (Variablat Globale) ---
int ids[100];
string names[100];
double gpas[100];
int studentCount = 0;












// --- Andi Haziri ---

// PR1: Funksioni bazik i shfaqjes

void displayStudents() {
    if (studentCount == 0) {
        cout << "\n[!] Nuk ka studente ne sistem. Shtoni disa studente me pare." << endl;
        return;
    }

    // Statistika bazike
    double sumGpa = 0;
    
    cout << "\n" << setfill('=') << setw(50) << "" << endl;
    cout << setfill(' ') << left << setw(10) << "ID" 
         << setw(25) << "EMRI I STUDENTIT" 
         << setw(10) << "GPA" << endl;
    cout << setfill('-') << setw(50) << "" << endl;
    cout << setfill(' ');

    for (int i = 0; i < studentCount; i++) {
        cout << left << setw(10) << ids[i] 
             << setw(25) << names[i] 
             << setw(10) << fixed << setprecision(2) << gpas[i] << endl;
        sumGpa += gpas[i];
    }

    cout << setfill('=') << setw(50) << "" << endl;
    cout << "Gjithesej Studente: " << studentCount;
    cout << " | Mesatarja e Grupit: " << (sumGpa / studentCount) << endl;
    cout << setfill('=') << setw(50) << "" << setfill(' ') << endl;
}


int getValidatedChoice() {
    int choice;
    while (true) {
        cout << "Zgjedhja juaj: ";
        if (cin >> choice) {
            return choice;
        } else {
            cout << "[!] Gabim: Ju lutem jepni nje numer valid." << endl;
            cin.clear(); // Pastron errorin
            cin.ignore(1000, '\n'); // Injoron karakteret e gabuara
        }
    }
}


// PR1: Funksioni i menusë
void menu() {
    cout << "\n  __________________________________________" << endl;
    cout << " |       STUDENT MANAGEMENT SYSTEM         |" << endl;
    cout << " |_________________________________________|" << endl;
    cout << " | 1. Shto Student i ri                    |" << endl;
    cout << " | 2. Shfaq Listen e Studenteve            |" << endl;
    cout << " | 3. Kerko sipas ID                       |" << endl;
    cout << " | 4. Gjenero Studente Testues             |" << endl;
    cout << " | 5. Dil nga programi                     |" << endl;
    cout << " |_________________________________________|" << endl;
}


int main() {

    return 0;
}
