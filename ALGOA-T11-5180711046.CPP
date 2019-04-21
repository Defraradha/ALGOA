 #include <iostream>
using namespace::std;
main()
{
	int nilai['n'];
   int temp,ketemu, cari;
   int n, i;

   cout<<"MASUKAN DATA : ";cin>>n;
   cout<<endl;

   for(int a=1; a<=n; a++)
   {cout<<"DATA KE-"<<a<<" : ";
   cin>>nilai[a];
   }

   cout<<"DATA SEBELUM DIURUTKAN :"<<endl;

   for(int a=1; a<=n; a++)
   {cout<<nilai[a]<<" ";}

   for(int a=n-1; a>=1; a--)
   {for(int b=1; b<=a; b++)
   {if (nilai[b]>nilai[b+1])
   {temp=nilai[b+1];
   nilai[b+1]=nilai[b];
   nilai[b]=temp;}}}

   cout<<"DATA SETELAH DIURUTKAN (DARI YANG PALING KECIL)    : ";
   cout<<endl;
   for(int a=1; a<=n; a++)
   {cout<<nilai[a]<<" ";}
   cout<<"DATA SETELAH DIURUTKAN (DARI YANG PALING TERBESAR) : ";
   cout<<endl;
   for (int a=n; a>=1; a--)
   {cout<<nilai[a]<<" ";}

	i=0;
   cout<<"MASUKAN BILANGAN YANG DICARI :"; cin>>cari;
   ketemu=0;

   while((i<n)&&(ketemu==0))
   {
   if(nilai[i]==cari)
   	{ ketemu=1;
      cout<<"PENCARIAN SEQUENTIAL "<<cari<<" ADA PADA INDEKS KE-"<<i;}
   else
      i=i+1;
   }

   if(ketemu==1)
   {cout<<"DATA TERDAPAT PADA BARIS DATA";
   cout<<endl;}

   else
   cout<<"DATA TIDAK TERDAPAT PADA BARIS DATA";
   cout<<endl;


}
