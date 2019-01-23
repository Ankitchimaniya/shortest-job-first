#include <bits/stdc++.h>
using namespace std;
int main()
{    int i,n;
 	cout<<"Enter numbere of process ";
 	cin>>n;
 	float CT[n],BT[n],TAT[n],WT[n];
 	cout<<"Enter Bust Time "<<endl;
 	 for(i=0;i<n;i++)
 	  {cin>>BT[i];
	    CT[i]=0;
	   }
   	 sort(BT,BT+n);
	  float s=0;
 	 for(i=0;i<n;i++)
 	  { 
	      s+=BT[i];
	      CT[i]=s;
	      TAT[i]=s;
	      WT[i]=TAT[i]-BT[i];
	  }
	  
	  float Avg1=0,Avg2=0,Avg3=0;
      for(i=0;i<n;i++)
      { 
        cout<<"Bust Time"<<BT[i]<<endl;
        cout<<"Complition Time"<<CT[i]<<endl;
        Avg1+=CT[i];
       	cout<<"Turn Arround time "<<TAT[i]<<endl;
       	Avg2+=TAT[i];
		   cout<<"Waiting Time "<<WT[i]<<endl;
       	Avg3+=WT[i];
	  }
	  cout<<"Average Complition Time"<<Avg1/n<<endl;
	  cout<<"Turn Arround time "<<Avg2/n<<endl;
	     cout<<"Waiting Time "<<Avg3/n<<endl;
}
