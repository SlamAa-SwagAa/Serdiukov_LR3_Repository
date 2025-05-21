#include <iostream>
#include <string>
using namespace std;

void enterMathGrade();
void enterPhysicsGrade();
void enterChemistryGrade();
void calculateAverage();
void checkAverageAbove4();

void enterMathGrade() {
    // разрабатывается Ивановым И. - ветка branch_fun_1
}

void enterPhysicsGrade() {
    // разрабатывается Петровым П. - ветка branch_fun_2
}

void enterChemistryGrade() {
    // разрабатывается Ивановым И. - ветка branch_fun_3
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



