/*عرض جميع تفاصيل الترميز لحرف معين (ASCII, UTF-8, UTF-16, UTF-32).
إمكانية تحويل النصوص الكاملة بدلًا من الحروف الفردية.
التعامل مع أنظمة ترميز مختلفة (مثل Base64).
إضافة وظيفة للتحقق من صلاحية الرموز المدخلة (Valid/Invalid Encoding).
إظهار قائمة بالرموز الترميزية الشائعة مع وصفها (مثل الرموز الخاصة أو الأحرف غير القابلة للطباعة).*/

#include <iostream>
#include <iomanip> // For formatting output
#include <locale>
#include <codecvt>
#include <string>
#include <vector>

using namespace std;

// Function to display character details
void displayCharacterDetails(char ch) {
    cout << "\n=== Character Encoding Details ===\n";
    cout << "Character: " << ch << endl;
    cout << "-------------------------------\n";
    cout << setw(15) << left << "Encoding Type" << setw(10) << "Value" << endl;
    cout << "-------------------------------\n";
    cout << setw(15) << left << "ASCII" << setw(10) << int(ch) << endl;

    // UTF-8 representation
    cout << setw(15) << left << "UTF-8" << setw(10) << static_cast<int>(ch) << endl;

    // UTF-16 representation
    wchar_t wch = static_cast<wchar_t>(ch);
    cout << setw(15) << left << "UTF-16" << setw(10) << int(wch) << endl;

    // UTF-32 representation
    char32_t u32ch = static_cast<char32_t>(ch);
    cout << setw(15) << left << "UTF-32" << setw(10) << int(u32ch) << endl;

    cout << "-------------------------------\n";
}

// Function to convert a string to ASCII values
void convertTextToASCII(const string &text) {
    cout << "\n=== ASCII Values for Text ===\n";
    cout << "Text: \"" << text << "\"\n";
    cout << "-------------------------------\n";
    for (char ch : text) {
        cout << "'" << ch << "' (" << int(ch) << ") ";
    }
    cout << "\n-------------------------------\n";
}

// Function to display common symbols
void displayCommonSymbols() {
    cout << "\n=== Common Encoding Symbols ===\n";
    cout << setw(10) << left << "Symbol" << setw(15) << "Description" << setw(10) << "ASCII" << endl;
    cout << "-------------------------------------\n";
    cout << setw(10) << " " << setw(15) << "Space" << setw(10) << 32 << endl;
    cout << setw(10) << "\\n" << setw(15) << "Newline" << setw(10) << 10 << endl;
    cout << setw(10) << "\\t" << setw(15) << "Tab" << setw(10) << 9 << endl;
    cout << setw(10) << "!" << setw(15) << "Exclamation" << setw(10) << 33 << endl;
    cout << setw(10) << "$" << setw(15) << "Dollar" << setw(10) << 36 << endl;
    cout << setw(10) << "&" << setw(15) << "Ampersand" << setw(10) << 38 << endl;
    cout << setw(10) << "*" << setw(15) << "Asterisk" << setw(10) << 42 << endl;
    cout << setw(10) << "+" << setw(15) << "Plus" << setw(10) << 43 << endl;
    cout << setw(10) << "/" << setw(15) << "Slash" << setw(10) << 47 << endl;
    cout << "-------------------------------------\n";
}

int main() {
    int choice;
    while (true) {
        cout << "\n=== Universal Code Converter ===\n";
        cout << "Choose an option:\n";
        cout << "1. Convert a number to ASCII (Character)\n";
        cout << "2. View encoding details of a character (ASCII, UTF-8, UTF-16, UTF-32)\n";
        cout << "3. Convert a string to ASCII values\n";
        cout << "4. Display common symbols and their encoding values\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Convert number to ASCII
            int number;
            cout << "\nEnter the number to convert to ASCII: ";
            cin >> number;
            if (number >= 0 && number <= 127) {
                cout << "\nThe ASCII character for " << number << " is: '" << char(number) << "'\n";
            } else {
                cout << "Invalid number! ASCII values range from 0 to 127.\n";
            }
        }
        else if (choice == 2) {
            // Display all encoding details for a character
            char ch;
            cout << "\nEnter the character: ";
            cin >> ch;
            displayCharacterDetails(ch);
        }
        else if (choice == 3) {
            // Convert a string to ASCII values
            string text;
            cout << "\nEnter the string: ";
            cin.ignore(); // Clear buffer
            getline(cin, text);
            convertTextToASCII(text);
        }
        else if (choice == 4) {
            // Display common symbols
            displayCommonSymbols();
        }
        else if (choice == 5) {
            cout << "\nExiting the program. Goodbye!\n";
            break;
        }
        else {
            cout << "\nInvalid choice! Please try again.\n";
        }
    }

    return 0;
}
