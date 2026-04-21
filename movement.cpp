#include <iostream>

using namespace std;

int main()
{
    // left to right
    int arry[] = {1, 0, 0, 0, 0};
    string user_input = "";
    int n = sizeof(arry) / sizeof(arry[0]);

    for (int i = 0; i < 5; i++)
    {
        cout << arry[i] << " ";
    }
    cout << endl;

    while (user_input != "q")
    {
        cout << "Enter a/d to move: " << endl;
        cin >> user_input;

        if (user_input == "d")
        {
            for (int j = 0; j < n; j++)
            {
                if (arry[j] == 1)
                {
                    if (j == n - 1)
                    {
                        cout << "Cant Go Ant Further" << endl;
                        break;
                    }
                    else
                    {
                        arry[j + 1] = 1;
                        arry[j] = 0;
                        break;
                    }
                }
            }

            for (int i = 0; i < 5; i++)
            {
                cout << arry[i] << " ";
            }
            cout << endl;
        }
        else if (user_input == "a")
        {
            for (int j = 0; j < n; j++)
            {
                if (arry[j] == 1)
                {
                    if (j == 0)
                    {
                        cout << "cant go any further" << endl;
                        break;
                    }
                    else
                    {
                        arry[j - 1] = 1;
                        arry[j] = 0;
                        break;
                    }
                }
            }

            for (int i = 0; i < 5; i++)
            {
                cout << arry[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Error! invalid input" << endl;
        }
    }

    return 0;
}
