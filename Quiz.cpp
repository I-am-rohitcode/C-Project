#include <iostream>
#include <String>
#include <conio.h>
#include <windows.h>
using namespace std;
struct Info
{
    string nam;
    char rollno[20];
    int marks, random;
};
Info st;
void result()
{
    float percentage = 0;
    cout << "Student Name : " << st.nam << endl;
    cout << "Roll no : " << st.rollno << endl;
    cout << "Marks : " << st.marks << " Out of 10." << endl;
    percentage = 100 * st.marks / 10;
    cout << "Percentage : " << percentage << "%" << endl;
    if (percentage >= 40)
    {
        cout << "Status : PASS." << endl;
    }
    else
    {
        cout << "Status : FAIL." << endl;
    }
    cout << "*********************************************" << endl;
}
void HTML()
{
    int i = 0, arr[10];
    st.marks = 0;
    char choice;
    while (i < 10)
    {
    back:
        st.random = rand() % 10;
        for (int j = 0; j < 10; j++)
        {
            if (st.random == arr[j])
            {
                goto back;
            }
        }
        arr[i] = st.random;
        switch (st.random)
        {
        case 0:
            cout << "Q" << i + 1 << ". What does HTML stands for ?" << endl;
            cout << " A. Hyportext markup language" << endl;
            cout << " B. Hypertext main language" << endl;
            cout << " C. Hypertext markup language" << endl;
            cout << " D. Hyporrtext markup language" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'C' || choice == 'c')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "The correct answer is C" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 1:
            cout << "Q" << i + 1 << ". Which tag is used to create hyperlink in HTML?" << endl;
            cout << " A. <Link>" << endl;
            cout << " B. <a>" << endl;
            cout << " C. <hyperlink>" << endl;
            cout << " D. <href>" << endl;

            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'B' || choice == 'b')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is B" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 2:
            cout << "Q" << i + 1 << ". What is the correct Html element for the largest heading?" << endl;
            cout << " A. <heading>" << endl;
            cout << " B. <h6>" << endl;
            cout << " C. <head>" << endl;
            cout << " D. <h1>" << endl;

            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'D' || choice == 'd')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "The correct answer is d" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 3:
            cout << "Q" << i + 1 << ". Which HTML tag is used to define a table row?" << endl;
            cout << " A. <tr>" << endl;
            cout << " B. <table>" << endl;
            cout << " C. <row>" << endl;
            cout << " D. <td>" << endl;

            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'A' || choice == 'a')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is a" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 4:
            cout << "Q" << i + 1 << ". Which tag is used to define the footer of a webpage?" << endl;
            cout << " A. <footer>" << endl;
            cout << " B. <bottom>" << endl;
            cout << " C. <end>" << endl;
            cout << " D. <foot>" << endl;

            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'A' || choice == 'a')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is a" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 5:
            cout << "Q" << i + 1 << ". Which attribute is used to define the URl of an image in HTML?" << endl;
            cout << " A. src" << endl;
            cout << " B. link" << endl;
            cout << " C. href" << endl;
            cout << " D. url" << endl;

            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'A' || choice == 'a')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }

            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is a" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 6:
            cout << "Q" << i + 1 << ". How many sizes of headers are available in HTML by default?" << endl;
            cout << " A. 5" << endl;
            cout << " B. 1" << endl;
            cout << " C. 6" << endl;
            cout << " D. 3" << endl;

            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'C' || choice == 'c')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is c" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 7:
            cout << "Q" << i + 1 << ".what are the types of list available in HTML" << endl;
            cout << " A. ordered list,unordered list." << endl;
            cout << " B. number,letter list." << endl;
            cout << " C. named,unnamed list." << endl;
            cout << " D. none of the above." << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'A' || choice == 'a')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }

            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is a" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 8:
            cout << "Q" << i + 1 << ".HTML files are saved by default with the extension?" << endl;
            cout << " A. .html" << endl;
            cout << " B. .h" << endl;
            cout << " C. .ht" << endl;
            cout << " D. none of the above" << endl;

            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'A' || choice == 'a')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }

            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is a" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 9:
            cout << "Q" << i + 1 << ".We enclose HTML tgas within" << endl;
            cout << " A. {}" << endl;
            cout << " B. ()" << endl;
            cout << " C. <>" << endl;
            cout << " D. !!" << endl;

            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'C' || choice == 'c')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }

            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is c" << endl;
            }
            cout << "******************************************************" << endl;
            break;

        default:
            break;
        }
        i++;
    }
}
void C()
{

    int i = 0, arr[10];
    st.marks = 0;
    char choice;
    while (i < 10)
    {
    back:
        st.random = rand() % 10;
        for (int j = 0; j < 10; j++)
        {
            if (st.random == arr[j])
            {
                goto back;
            }
        }
        arr[i] = st.random;
        switch (st.random)
        {
        case 0:
            cout << "Q" << i + 1 << ". Who is the father of C language?" << endl;
            cout << " A. Steve Jobs" << endl;
            cout << " B. James Gosling" << endl;
            cout << " C. Dennis Ritchie" << endl;
            cout << " D. Rasmus Lerdorf" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'C' || choice == 'c')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "The correct answer is C" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 1:
            cout << "Q" << i + 1 << ". Which of the following is not a valid C variable name?" << endl;
            cout << " A. int number;" << endl;
            cout << " B. float rate;" << endl;
            cout << " C. int variable_count;" << endl;
            cout << " D. int $main;" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'D' || choice == 'd')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is D" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 2:
            cout << "Q" << i + 1 << ". All keywords in C are in ____________" << endl;
            cout << " A. LowerCase letters" << endl;
            cout << " B. UpperCase letters" << endl;
            cout << " C. CamelCase letters" << endl;
            cout << " D. None of the mentioned" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'A' || choice == 'a')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "The correct answer is A" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 3:
            cout << "Q" << i + 1 << ". Which of the following is true for variable names in C?" << endl;
            cout << " A. They can contain alphanumeric characters as well as special characters" << endl;
            cout << " B. It is not an error to declare a variable to be one of the keywords(like goto, static)" << endl;
            cout << " C. Variable names cannot start with a digit" << endl;
            cout << " D. Variable can be of any length" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'C' || choice == 'c')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is C" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 4:
            cout << "Q" << i + 1 << ". Which is valid C expression?" << endl;
            cout << " A. int my_num = 100,000;" << endl;
            cout << " B. int my_num = 100000;" << endl;
            cout << " C. int my num = 1000;" << endl;
            cout << " D. int $my_num = 10000;" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'B' || choice == 'b')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is b" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 5:
            cout << "Q" << i + 1 << ". Which of the following cannot be a variable name in C?" << endl;
            cout << " A. volatile" << endl;
            cout << " B. true" << endl;
            cout << " C. friend" << endl;
            cout << " D. export" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'A' || choice == 'a')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is A" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 6:
            cout << "Q" << i + 1 << ". What is short int in C programming?" << endl;
            cout << " A. The basic data type of C" << endl;
            cout << " B. Qualifier" << endl;
            cout << " C. Short is the qualifier and int is the basic data type" << endl;
            cout << " D. All of the mentioned" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'C' || choice == 'c')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is C" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 7:
            cout << "Q" << i + 1 << ". Which of the following declaration is not supported by C language?" << endl;
            cout << " A. String str;" << endl;
            cout << " B. char *str;" << endl;
            cout << " C. float str = 3e2;" << endl;
            cout << " D. Both "
                    ""
                    "String str;"
                    ""
                    " and "
                    ""
                    "float str = 3e2;"
                    ""
                 << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'A' || choice == 'a')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is A" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 8:
            cout << "Q" << i + 1 << ". Which keyword is used to prevent any changes in the variable within a C program?" << endl;
            cout << " A. immutable" << endl;
            cout << " B. mutable" << endl;
            cout << " C. const" << endl;
            cout << " D. volatile" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'C' || choice == 'c')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is C" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 9:
            cout << "Q" << i + 1 << ". What is the result of logical or relational expression in C?" << endl;
            cout << " A. True or False" << endl;
            cout << " B. 0 or 1" << endl;
            cout << " C. 0 if an expression is false and any positive number if an expression is true" << endl;
            cout << " D. None of the mentioned" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'B' || choice == 'b')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is B" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        default:
            break;
        }
        i++;
    }
}
void CPP()
{
    int i = 0, arr[10];
    st.marks = 0;
    char choice;
    while (i < 10)
    {
    back:
        st.random = rand() % 10;
        for (int j = 0; j < 10; j++)
        {
            if (st.random == arr[j])
            {
                goto back;
            }
        }
        arr[i] = st.random;
        switch (st.random)
        {
        case 0:
            cout << "Q" << i + 1 << ". Identify the correct extension of the user-defined header file in C++." << endl;
            cout << " A. .cpp" << endl;
            cout << " B. .hg" << endl;
            cout << " C. .h" << endl;
            cout << " D. .hf" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'C' || choice == 'c')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "The correct answer is C" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 1:
            cout << "Q" << i + 1 << ". Identify the incorrect constructor type." << endl;
            cout << " A. Friend constructor" << endl;
            cout << " B. Default constructor" << endl;
            cout << " C. Parameterized constructor" << endl;
            cout << " D. Copy constructor" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'A' || choice == 'a')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is A" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 2:
            cout << "Q" << i + 1 << ". C++ uses which approach?" << endl;
            cout << " A. right-left" << endl;
            cout << " B. Top-down" << endl;
            cout << " C. left-right" << endl;
            cout << " D. bottom-up" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'D' || choice == 'd')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "The correct answer is D" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 3:
            cout << "Q" << i + 1 << ". Which of the following data type is supported in C++ but not in C?" << endl;
            cout << " A. int" << endl;
            cout << " B. bool" << endl;
            cout << " C. double" << endl;
            cout << " D. float" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'B' || choice == 'b')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is B" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 4:
            cout << "Q" << i + 1 << ". Identify the correct syntax for declaring arrays in C++." << endl;
            cout << " A. array arr[10]" << endl;
            cout << " B. array{10};" << endl;
            cout << " C. int arr[10]" << endl;
            cout << " D. int arr" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'C' || choice == 'c')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is C" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 5:
            cout << "Q" << i + 1 << ". Size of wchat_t is." << endl;
            cout << " A. 2" << endl;
            cout << " B. 4" << endl;
            cout << " C. 2 or 4" << endl;
            cout << " D. Depends on number of bits is system" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'D' || choice == 'd')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is D" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 6:
            cout << "Q" << i + 1 << ". Which of the following is address of operator? " << endl;
            cout << " A. *" << endl;
            cout << " B. &" << endl;
            cout << " C. []" << endl;
            cout << " D. &&" << endl;

            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'B' || choice == 'b')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is B" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 7:
            cout << "Q" << i + 1 << ". Identify the correct example for a pre-increment operator." << endl;
            cout << " A. ++n" << endl;
            cout << " B. n++" << endl;
            cout << " C. --n" << endl;
            cout << " D. +n" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'A' || choice == 'a')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is A" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 8:
            cout << "Q" << i + 1 << ". Which of the following loops is best when we know the number of iterations?" << endl;
            cout << " A. While loop" << endl;
            cout << " B. Do-while" << endl;
            cout << " C. For loop" << endl;
            cout << " D. All of the above" << endl;
            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'C' || choice == 'c')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is C" << endl;
            }
            cout << "******************************************************" << endl;
            break;
        case 9:
            cout << "Q" << i + 1 << ". Identify the scope resolution operator" << endl;
            cout << " A. :" << endl;
            cout << " B. ::" << endl;
            cout << " C. ?" << endl;
            cout << " D. None" << endl;

            cout << "Your choice: ";
            cin >> choice;
            if (choice == 'B' || choice == 'b')
            {
                cout << choice << " is correct answer" << endl;
                st.marks++;
            }
            else
            {
                cout << "Incorrect answer!" << endl;
                cout << "the correct answer is B" << endl;
            }
            cout << "******************************************************" << endl;
            break;

        default:
            break;
        }
        i++;
    }
}
int main()
{
    char select;
    char press;
    do
    {
        cout << "\n\n\t\t*********************************************" << endl;
        cout << "\t\t\t\tQUIZ SYSTEM" << endl;
        cout << "\t\t*********************************************" << endl;
        cout << "\t\tEnter name : ";
        cin.ignore(); // Clear input buffer
        getline(cin, st.nam);
        cout << "\t\tEnter rollno : ";
        cin >> st.rollno;
        system("CLS");
        cout << "******************************************************" << endl;
        cout << "\tMarks less than 40% will be fail" << endl;
        cout << "******************************************************" << endl;
        cout << "\nSelect option which subject you want to perform" << endl;
        cout << "1) HTML" << endl;
        cout << "2) C" << endl;
        cout << "3) C++" << endl;
        select = getch();
        ;
        cout << endl;
        switch (select)
        {
        case '1':
            HTML();
            cout << "*********************************************" << endl;
            cout << "Press the Y to see the result.";
            getch();
            system("CLS");
            cout << "\n\n*********************************************" << endl;
            cout << "\t\tHTML Quiz RESULT" << endl;
            cout << "*********************************************" << endl;
            result();
            break;

        case '2':
            C();
            cout << "*********************************************" << endl;
            cout << "Press the Y to see the result.";
            getch();
            system("CLS");
            cout << "\n\n*********************************************" << endl;
            cout << "\t\tC Quiz RESULT" << endl;
            cout << "*********************************************" << endl;
            result();
            break;

        case '3':
            CPP();
            cout << "*********************************************" << endl;
            cout << "Press the Y to see the result.";
            getch();
            system("CLS");
            cout << "\n\n*********************************************" << endl;
            cout << "\t\tC++ Quiz RESULT" << endl;
            cout << "*********************************************" << endl;
            result();
            break;

        default:
            cout << "Invalid inpute" << endl;
            break;
        }
        cout << "Press y if you want to continue or press n to terminate" << endl;
        cout << "********************************************************" << endl;
        press = getch();
        system("CLS");
    } while (press == 'y' || press == 'Y');
    return 0;
}
