#include <iostream>
#include <vector>

using namespace std;

struct Worker {
    std::string surname; // Прізвище
    int yearOfBirth; // Рік народження
    std::string position; // Посада
    float salary; // Зарплата
    std::string education; // Освіта
};

int main() {
    // Масив із 5 структур Worker
    vector<Worker> workers = {
      {"Іванов", 1960, "Директор", 10000, "Вища"},
      {"Петренко", 1975, "Програміст", 5000, "Вища"},
      {"Сидоренко", 1980, "Менеджер", 7000, "Вища"},
      {"Васильєва", 1990, "Бухгалтер", 4000, "Середня спеціальна"},
      {"Попова", 2000, "Стажист", 3000, "Незакінчена вища"}
    };
    int countWorkersOver60(const vector<Worker>&workers) {
        int count = 0;
        for (const Worker& worker : workers) {
            if (2024 - worker.yearOfBirth > 60) {
                count++;
            }
        }
        return count;
    }
    void printWorkersOver60(const vector<Worker>&workers) {
        for (const Worker& worker : workers) {
            if (2024 - worker.yearOfBirth > 60) {
                cout << "Прізвище: " << worker.surname << endl;
                cout << "Рік народження: " << worker.yearOfBirth << endl;
                cout << "Посада: " << worker.position << endl;
                cout << "Зарплата: " << worker.salary << endl;
                cout << "Освіта: " << worker.education << endl << endl;
            }
        }
    }

    // Виклик функцій
    int countOver60 = countWorkersOver60(workers);
    cout << "Кількість працівників старше 60 років: " << countWorkersOver60 << endl;
    printWorkersOver60(workers);

    return 0;
}
