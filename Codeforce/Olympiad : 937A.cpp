//Author : Abdul Alim Shakir

#include<iostream>
using namespace std;
void removeNumber(int numbers[], int idx, int &size)
{
	int i;
	for(i = idx; i < size - 1; i++)
		numbers[i] = numbers[i + 1];
	size--;
}

void removeDuplicate(int numbers[], int &size)
{
	int i, j;
	int number;
	for(i = 0; i < size; i++)
	{
		number = numbers[i];
		for(j = i + 1; j < size; j++)
		{
			if(number == numbers[j])
			{
				removeNumber(numbers, j, size); j--;
			}
		}
	}
}


int main()
{
    int i,n,s[601],counter=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    removeDuplicate(s,n);
    for(i = 0; i <n; i++)
	  {
	      if(s[i]!=0)
          {
              counter++;
          }
	  }
	  cout<<counter<<endl;
    return 0;
}
