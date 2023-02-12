#include "kubik.hpp"

using namespace std;

int current = 0, comp = 0, human = 0;
string num[] = {"Первый", "Второй", "Третий", "Заключительный"};

void first()
{
    current = rand() % 2;
    if (current)
    {
        cout << "Первым бросает игрок" << endl;
    }
    else
    {
        cout << "Первым бросает компьютер" << endl;
    }
    sleep(1);
}

void greet_and_rules()
{
    cout << "Давай поиграем в кубики. ";
    cout << "Все просто\n";
    cout << "Делаем по 4 броска\n";
    cout << "У кого больше очков, тот и победил\n";
    cout << "Погнали!\n";
}

int throwing()
{
    return rand() % 6 + 1;
}

void show_res(int flag)
{
    if (flag == 4)
    {
        cout << "Окончательный результат:" << endl;
    }
    else
    {
        cout << "Промежуточный результат:" << endl;
    }
    cout << "Очки компьютера: " << comp << endl;
    cout << "Очки игрока: " << human << endl;
}

void adding(int point)
{
    if ((current % 2))
    {
        human += point;
    }
    else
    {
        comp += point;
    }
    current += 1;
}

void show_throw(int point)
{
    sleep(1);
    if (!(current % 2))
    {
        cout << "Бросок игрока: " << point << endl;
        sleep(1);
    }
    else
    {
        cout << "Бросок компьютера: " << point << endl;
        sleep(1);
    }
}

void raund()
{
    int points;

    points = throwing();
    adding(points);
    show_throw(points);
    points = throwing();
    adding(points);
    show_throw(points);
}

void winner()
{
    if (human > comp)
    {
        cout << "Поздравляем! Ты выиграл";
    }
    else if (comp > human)
    {
        cout << "К сожалению, ты проиграл";
    }
    else
    {
        cout << "Ничья";
    }
    cout << "\n";
}

void reset()
{
    human = comp = 0;
}

void start_game()
{
    for (int i = 0; i < 4; i++)
    {
        cout << num[i] << " раунд" << endl;
        raund();
        cout << num[i] << " раунд окончен. ";
        show_res(i + 1);
        cout << "\n";
        sleep(2);
    }
}