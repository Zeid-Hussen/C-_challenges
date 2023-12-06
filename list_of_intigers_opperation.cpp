#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> num{};

  cout << "\nchoose from these listed options\n\n";

  while (true)
  {

    cout << 'P' << " - Print numbers\n";
    cout << 'A' << " - Add numbers\n";
    cout << 'M' << " - Display mean of the numbers\n";
    cout << 'S' << " - Display the smallest numbers\n";
    cout << 'L' << " - Display the largest numbers\n";
    cout << 'Q' << " - Quit\n\n";
    cout << "Enter Your choice: ";
    char choice{};
    cin >> choice;

    if (choice == 'p' || choice == 'P')
    {
      if (num.empty())
      {
        cout << " [] - The list is empty\n\n";
      }
      else
      {
        cout << "[";
        for (int i{0}; i < num.size(); i++)
        {
          cout << num[i] << " ";
        }
        cout << "]\n\n";
      }
    }
    else if (choice == 'A' || choice == 'a')
    {
      cout << "Enter an intiger to add to the list: ";
      int input{};
      cin >> input;
      num.push_back(input);
      cout << input << " added \n\n";
    }
    else if (choice == 'M' || choice == 'm')
    {
      int sum = 0;
      for (int i{0}; i < num.size(); i++)
      {
        sum += num[i];
      }
      double mean = sum / num.size();

      cout << "The mean is :" << mean << endl
           << endl;
    }

    else if (choice == 'S' || choice == 's')
    {
      int small = num.at(0);
      for (int i{0}; i < num.size(); i++)
      {
        if (num[i] < small)
        {
          small = num[i];
        }
      }
      cout << "The smallest number is :" << small << endl
           << endl;
    }

    else if (choice == 'L' || choice == 'l')
    {
      int large = num[0];
      for (int i = 0; i < num.size(); i++)
      {
        if (large < num[i])
        {
          large = num[i];
        }
      }
      cout << "The largest number is :" << large << endl
           << endl;
    }
    else if (choice == 'Q' || choice == 'q')
    {
      cout << "Good Bye!\n\n";
      break;
    }
    else
    {
      cout << "Unknown selection please try again!\n\n";
    }
  }

  return 0;
}