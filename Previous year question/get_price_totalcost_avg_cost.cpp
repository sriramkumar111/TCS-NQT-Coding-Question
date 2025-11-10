
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   if(n==0) cout<<"no item to process"<<endl;
   string name,max_item;
   int qs;
   double pu;
   double total_cost=0,max_cost=0,cost;
   for(int i=0;i<n;i++)
   {
     cin>>name>>qs>>pu;
     cost= qs*pu;
     total_cost +=cost;
     if(cost>max_cost)
     {
         max_cost=cost;
         max_item=name;
         
     }
     
   }
   double avg_cost = total_cost/(n*1.0);

   cout<<max_item<<endl;
   cout<<total_cost<<endl;
   cout<<fixed<<setprecision(2)<<avg_cost;
   
   return 0;
}



/*Question: Find the Highest Selling Item and Sales Summary
You are given the sales details of N items in a store. Each item's details include its name,
 quantity sold, and price per unit. Your task is to calculate the following:

The item with the highest total cost (quantity * price).
If multiple items have the same highest cost, consider the first one encountered.

The total sales amount (sum of all item costs).

The average cost per item (total sales amount divided by N, rounded to 2 decimal places).

Input Format
The first line contains an integer N (number of items).
The next N lines contain space-separated values:
item_name (a string without spaces)
quantity (an integer, 1 = quantity = 10^5)
price (an integer, 1 = price = 10^5)

Output Format
Print three lines:

The name of the item with the highest total cost.
The total sales amount.
The average sales amount per item, rounded to 2 decimal places.
Example Input

3
apple 2 50
banana 3 30
orange 5 20
Example Output

banana
260
86.67

Explanation
apple: 2 × 50 = 100
banana: 3 × 30 = 90
orange: 5 × 20 = 100
Highest selling item: apple (first occurrence of max cost 100).
Total sales: 100 + 90 + 100 = 260.
Average cost: 260 / 3 = 86.67

*/
