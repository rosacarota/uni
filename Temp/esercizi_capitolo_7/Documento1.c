#include <stdio.h>

int main(){	
  char nome[12];
  int i,n,N=0;
  char ch;

  printf("inserisci il nome ");
  ch=getchar();

  while(ch!='\n' && N<12)
  { 
     nome[N++]=ch;
     ch=getchar();
  }

  for(i=0; i<N; i++)
      putchar(nome[i]);

  return 0;
}
