#include<bits/stdc++.h>
using namespace std;

int main()
{
  string input;
  vector<string>exercise;
  for(int i=0;i<7;i++)
  {   
      getline(cin,input);
      exercise.push_back(input);
  }  
  int total_time=0;
  for(const string &day:exercise)
  {
      int len=day.length();
      string num="";
      
      for(int i=len-1;i>0;i--)
      {
          if(day[i]==' ')
          {
               break;
          }
          num=day[i]+num;
      }
       total_time +=stoi(num);
      
   }
   cout<<total_time<< " "<<"Average : "<<(total_time/7.0)<<endl;
   return 0;
}




/*
Problem: Weekly Exercise Tracker

A fitness enthusiast tracks his daily exercise routine for a week. Each day's exercise duration (in minutes) is recorded in the format:

Day 1 exercise duration (minutes): 30
Day 2 exercise duration (minutes): 40
Day 3 exercise duration (minutes): 35
Day 4 exercise duration (minutes): 50
Day 5 exercise duration (minutes): 45
Day 6 exercise duration (minutes): 60
Day 7 exercise duration (minutes): 55

Your task is to:

Extract the exercise durations for all 7 days.

Compute the total exercise time over the week.

Calculate the average daily exercise duration.

Example Output

For the input above, the program should output:
Total exercise duration: 315 minutes
Average daily exercise duration: 45.00 minutes
Constraints:
The input always contains exactly 7 days of data.
The durations are positive integers.
The result should display the average rounded to two decimal places.
 */
