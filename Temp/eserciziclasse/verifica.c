
//verifica che l'intero che codifica la data sia
//nell'intervallo giusto 

int verifica_interone (int data)
{   
  /* "return  (data >= 1011582) && (data <= 31121999);"  espressione che ha due sotto espressioni (le due date con gli &&)
   return è calcola il valore di quest'espressione e restituisci questo valore
   il return ci restituirà un vero o un falso, quindi un 1 o uno 0*/

   //dobbiamo scriverlo come

   int valido;

   valido= ((data >= 110582) && (data <= 31121999));
   return valido; 

}

/*restituisce l'anno dall'interone*/

int aaaa(int data)
{   
   return  numerone  % 10000;

}

int mm(int numerone)
{
    int data_senza_anno;

    data_senza_anno = numerone /1000; //butto via ultime 4 cifre
    return data_senza_ anno % 100;   // ultime 2 cifre di ciò che rimane



}


