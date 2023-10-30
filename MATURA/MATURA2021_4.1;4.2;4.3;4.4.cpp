#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
  ifstream input("instrukcje.txt");
  ofstream output("wyniki4.txt");

  string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int alphacount[26] = {};

  vector<string> neon;
  string instruction;
  string letter;

  //string maxInstruction;
  //int maxCount = 0;
  //int currentCount = 0;

  while(input >> instruction >> letter)
  {
    int index = alpha.find(letter[0]);

   // if (instruction == maxInstruction) {
    //    currentCount++;
    //  tempinstruction = instruction;
    //  } 
    //else {
    //    if (currentCount > maxCount) {
    //        maxCount = currentCount;
    //        maxInstruction = instruction;
    //    }
    //    currentCount = 1;
    //}

    if(instruction == "DOPISZ")
    {
      neon.push_back(letter);
      alphacount[index]++;
    }
    else if(instruction == "ZMIEN" && !neon.empty())
    {
      neon.back() = letter;
    }
    else if(instruction == "USUN" && !neon.empty())
    {
      neon.pop_back();
    }
    else if(instruction == "PRZESUN")
    {
      for(auto &c : neon)
      {
        if(c == letter)
        {
          int newIndex = (index + 1) % alpha.length();
          c = alpha[newIndex];
          break;
        }
      }
    }
  }



  int maxIndex = distance(alphacount, max_element(alphacount, alphacount + 26));

  output << "4.1 " << neon.size() << endl;
  //output << "4.2 " << "instruction type - " << tempinstruction << ", string length - " << maxCount << "." << endl;
  output << "4.3 " << alpha[maxIndex] << " " << alphacount[maxIndex] << endl;
  output << "4.4 ";

  for(const auto& element : neon)
  {
    output << element;
  }

  output << endl;
}
