  #include <stdio.h>
 int main (void)
   {
       int dap_int, dei_int; //���˵���Ϣ
      int i = 0;   //��ݼ�����
      int dol = 100;
      do
      {
          dap_int += 100 * 0.1;  //���㵥��
         dei_int = dol + dol * 0.05; //���㸴��
         dol = dei_int;
          i++;
     }while (dei_int < dap_int + 100);
    
     printf ("Daphne        Deirdre \n");

     printf ("%d        %d \n", dap_int + 100, dei_int);
     printf ("%d years \n", i);   
     return 0;
 }       
