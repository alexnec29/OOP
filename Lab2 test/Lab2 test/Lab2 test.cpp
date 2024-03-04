#include <iostream>
using namespace std;
int main()
{
    char* fraza = (char*)"    astazi          la   oop       invatam   pointeri";
    char** cuvinte = new char* [100];
    int nrCuvinte = 0;
    int index = 0;
    int startCuvant;
    while (fraza[index] != '\0')
    {
        while (fraza[index] == ' ' && fraza[index] != '\0')
            index++;
        startCuvant = index;
        while (fraza[index] != ' ' && fraza[index] != '\0')
            index++;

        if (fraza[index] == '\0')
            break;

        cuvinte[nrCuvinte] = fraza + startCuvant; // size = (index-startCuv)
        fraza[startCuvant] = 0;
        printf("%d", startCuvant);
    }

    for (int i = 0; i < nrCuvinte; i++)
    {
        for (int j = 0; cuvinte[i][j] != ' ' && cuvinte[i][j] != 0; j++)
        {
            printf("% c", cuvinte[i][j]);
        }
        printf("\n");
    }
}

eu am un char* care este o adresa de memorie catre(char - uri)
fraza = 100;
eu am un char** care este o adresa de memorie catre char*
