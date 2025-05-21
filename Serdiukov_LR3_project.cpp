#include <iostream>
#include <string>
#include <map>
#include <cctype>
#include <limits>
using namespace std;

char mathGrade = ' ';
char physicsGrade = ' ';
char chemistryGrade = ' ';

void enterMathGrade();
void enterPhysicsGrade();
void enterChemistryGrade();
void calculateAverage();
void checkAverageAbove4();

void enterMathGrade() {
    const map<char, string> validGrades = {
        {'A', "Отлично"},
        {'B', "Хорошо"},
        {'C', "Удовлетворительно"},
        {'D', "Неудовлетворительно"},
        {'F', "Неудача"}
    };

    while (true) {
        cout << "\nВведите оценку по математике (A, B, C, D, F): ";
        char input;
        cin >> input;
        input = toupper(input);

        
        if (validGrades.find(input) != validGrades.end()) {
            mathGrade = input;
            cout << "Оценка по математике: " << mathGrade 
                 << " (" << validGrades.at(mathGrade) << ")\n";
            break;
        } else {
            cout << "Ошибка! Допустимые оценки: A, B, C, D, F. Попробуйте снова.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

void enterChemistryGrade() {
    const map<char, string> validGrades = {
        {'A', "Отлично (5)"},
        {'B', "Хорошо (4)"},
        {'C', "Удовлетворительно (3)"},
        {'D', "Неудовлетворительно (2)"},
        {'F', "Неудача (1)"}
    };

    while (true) {
        cout << "\nВведите оценку по химии (A, B, C, D, F): ";
        char input;
        cin >> input;
        input = toupper(input);

        if (validGrades.find(input) != validGrades.end()) {
            chemistryGrade = input;
            cout << "Оценка по химии: " << chemistryGrade 
                 << " " << validGrades.at(chemistryGrade) << "\n";
            break;
        } else {
            cout << "Ошибка! Допустимые оценки: A, B, C, D, F. Попробуйте снова.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

void enterPhisicsGrade() {
    const map<char, string> validGrades = {
        {'A', "Отлично (5)"},
        {'B', "Хорошо (4)"},
        {'C', "Удовлетворительно (3)"},
        {'D', "Неудовлетворительно (2)"},
        {'F', "Неудача (1)"}
    };

    while (true) {
        cout << "\nВведите оценку по физике (A, B, C, D, F): ";
        char input;
        cin >> input;
        input = toupper(input);

        if (validGrades.find(input) != validGrades.end()) {
            physicsGrade = input;
            cout << "Оценка по физике: " << physicsGrade 
                 << " " << validGrades.at(physicsGrade) << "\n";
            break;
        } else {
            cout << "Ошибка! Допустимые оценки: A, B, C, D, F. Попробуйте снова.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

void calculateAverage() {

}

void checkAverageAbove4() {
    
}

int main() {
    int choice;

    do {
        cout << "1. Ввод оценки по математике\n";
        cout << "2. Ввод оценки по физике\n";
        cout << "3. Ввод оценки по химии\n";
        cout << "4. Средний балл по трем предметам\n";
        cout << "5. Оценка среднего балла\n";
        cout << "Введите номер пункта меню, если хотите выйти введите 0: ";
        cin >> choice;

        switch(choice) {
            case 1:
                enterMathGrade();
                break;
            case 2:
                enterPhysicsGrade();
                break;
            case 3:
                enterChemistryGrade();
                break;
            case 4:
                calculateAverage();
                break;
            case 5:
                checkAverageAbove4();
                break;
            case 0:
                cout << "Выход из программы...\n";
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова.\n";
        }
    } while(choice != 0);

    return 0;
}



