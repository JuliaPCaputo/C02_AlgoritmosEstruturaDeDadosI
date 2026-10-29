//Faça um programa que leia uma frase e mostre uma palavra desta frase por linha.

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    char sentence[1000];
    char word[50];
    
    cin.getline(sentence, 100);
    
    int sentenceLength = strlen(sentence);
    
    strcpy(word, "");
    for(int i = 0; i < sentenceLength; i++)
	{
        if(sentence[i] == ' ')
		{
            cout << word << endl;
            strcpy(word, "");
        }
		else
		{
            char temp[2] = {sentence[i], '\0'};
            strcat(word, temp);
        }
        
        if(i == sentenceLength - 1)
		{
            cout << word << endl;
        }
    }
    
    return 0;
}