#include <iostream>
#include <string>
#include "MyText.h"

using namespace std;

int main() {
    MyText text;

    cout << "Введіть кількість рядків: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Введіть рядок " << (i + 1) << " : ";
        string input;
        cin >> input;
        text.AddLine(input);
    }

    cout << "Початковий текст : " << endl;
    cout << text.GetText() << endl;

    cout << "Введіть новий рядок, який хочете додати: ";
    string newLine;
    cin >> newLine;
    text.AddLine(newLine);

    cout << "Текст після додавання : " << endl;
    cout << text.GetText() << endl;

    cout << "Найкоротший рядок (довжина) : " << endl;
    cout << text.GetShortestLineLength() << endl;

    cout << "Відсоток приголосних : " << endl;
    cout << text.GetConsonantsPercentage() << "%" << endl;

    text.ReplaceAllMultipleSpacesWithOne();
    cout << "Після заміни пробілів : " << endl;
    cout << text.GetText() << endl;

    text.ClearAllEdges();
    cout << "Після очищення пробілів по краях : " << endl;
    cout << text.GetText() << endl;

    cout << "Введіть індекс рядка для видалення : ";
    int index;
    cin >> index;

    text.RemoveLine(index - 1);

    cout << "Після видалення : " << endl;
    cout << text.GetText() << endl;

    text.Clear();

    cout << "Після очистки тексту : " << endl;
    cout << text.GetText() << endl;

    MyText text1;
    text1.AddLine("ki");
    text1.AddLine("Liza");
    text1.AddLine("tii");

    cout << "Початковий текст : " << endl;
    cout << text1.GetText() << endl;

    cout << "Найкоротший рядок (довжина) : " << endl;
    cout << text1.GetShortestLineLength() << endl;

    cout << "Відсоток приголосних : " << endl;
    cout << text1.GetConsonantsPercentage() << "%" << endl;

    text1.ReplaceAllMultipleSpacesWithOne();
    cout << "Після заміни пробілів : " << endl;
    cout << text1.GetText() << endl;

    text1.ClearAllEdges();
    cout << "Після очищення пробілів : " << endl;
    cout << text1.GetText() << endl;

    text1.RemoveLine(2);
    cout << "Після видалення рядка з індексом 2 : " << endl;
    cout << text1.GetText() << endl;

    text1.Clear();
    cout << "Після очистки тексту : " << endl;
    cout << text1.GetText() << endl;

    return 0;
}