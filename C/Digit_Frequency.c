typedef struct Occu
{
  char c;
  int occurance;  
}occure;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char* s;
    s = (char*) malloc(1001 * sizeof(char));
    scanf("%s", s);
    s = (char*) realloc(s, strlen(s)+1);
    occure tab[10];
    for(unsigned i = 0; i<10; i++)
    {
        tab[i].c=48+i; tab[i].occurance = 0;
    }
    for(unsigned i = 0; i<10; i++)
    {
        for(unsigned j= 0; j<strlen(s); j++)
        {
            if(tab[i].c == s[j])
                tab[i].occurance++;
        }
        printf("%d ", tab[i].occurance);
    }
    return 0;
}
