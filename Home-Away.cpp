#include <iostream>
#include <iomanip>

using namespace std;

short scoreA[4] ,scoreB[4], i=0, j=0;
short totalA,totalB;
string A[10], B[10];

  void inputTim()
  {
    while (i<2) {

      if (i==0)
      {
        cout<<right<<setw(35)<<"*** LEG 1 ***\n";

          cout<<"masukan tim Home : \n";
          cin>>A[i]; cout<<endl;
          cout<<"masukan tim Away : \n";
          cin>>B[i]; cout<<endl;
      }

      if ( i==1 )
      {
        cout<<right<<setw(35)<<"*** LEG 2 ***\n";
           B[i] = A[i-1];
           A[i] = B[i-1];
        cout<<"TIM HOME : "<<A[i]; cout<<endl;
        cout<<"TIM AWAY : "<<B[i]; cout<<endl;
      }

      cout<<"masukan skor "<<A[i]<<" :\n";
      cin>>scoreA[i]; cout<<endl;

      cout<<"masukan skor "<<B[i]<<" :\n";
      cin>>scoreB[i]; cout<<endl;

      i++;
    }

  }

  void agregat()
  {
    /* MENJUMLAH TOTAL GOAL  */
     totalA = scoreA[0] + scoreB[1];
     totalB = scoreB[0] + scoreA[1];

     /* MEMENETUKAN TOTAL AGREGAT GOAL */
     if (totalA > totalB) { cout<<"tim : "<<A[0]<<" LOLOS dengan agregat:"
      <<totalA<<"-"<<totalB ; cout<<endl;}

     if (totalA < totalB) { cout<<"tim : "<<B[0]<<" LOLOS dengan agregat:"
      <<totalB<<"-"<<totalA ;  cout<<endl;}

      /* MEMENETUKAN GOAL TANDANG  JIKA TOTAL AGREGAT GOAL SAMA */
     if (totalA == totalB) {
        if (scoreB[0] > scoreB[1]){cout<<"tim "<<B[0]<<" LOLOS dengan unggul jumlah GOAL AWAY \n";}
        if (scoreB[0] < scoreB[1]){cout<<"tim "<<A[0]<<" LOLOS dengan unggul jumlah GOAL AWAY \n";}
        if (scoreB[0] == scoreB[1]){cout<<"Pertandingan "<<A[0]<<" melawan "<<B[0]<<" harus ditentukan dengan Adu Penalti \n";}
     }

  }


  void PrintTim()
  {
    /* PANGGIL PROSEDUR UNTUK MENENTUKAN AGREGAT SKOR */
    agregat();

    cout<<right<<setw(35)<<"==== RINCIAN PERTANDINGAN ==== \n";

    while (j<2) {

      if (j==0) { cout<<right<<setw(35)<<"*** LEG 1 ***\n";}
      if (j==1) { cout<<right<<setw(35)<<"*** LEG 2 ***\n";}

      /** CETAK NAMA TIM  **/
      cout<<left<<setw(23)<<A[j];
      cout<<B[j]<<endl;

      /** CETAK SKOR TIM  **/
      cout<<left<<setw(23)<<scoreA[j];
      cout<<scoreB[j]<<"\n"<<endl;

        j++;
    }
      /* CETAK TOTAL GOAL AWAY*/
        if (totalA == totalB) {
          cout<<right<<setw(35)<<"*** TOTAL GOAL AWAY ***\n";
          cout<<left<<setw(23)<<B[0];
          cout<<B[1]<<endl;

          cout<<left<<setw(23)<<scoreB[0];
          cout<<scoreB[1]<<"\n"<<endl;
        }

      cout<<right<<setw(60)<<"TOTAL AGREGAT : \n";
      cout<<right<<setw(60)<<A[0]<<" : "<<totalA<<" - "<<B[0]<<" : "<<totalB;
  }

  int main()
  {
    inputTim();
    PrintTim();

    cout<<endl;
  }
