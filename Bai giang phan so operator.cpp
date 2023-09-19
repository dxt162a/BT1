#include<iostream>
#include<math.h>
using namespace std ;
class PHANSO{
	private :
		int ts,ms;
	public :
		void nhap();
		void hienthi();
		PHANSO operator+(PHANSO b);
};
        PHANSO PHANSO::operator+(PHANSO b){
        PHANSO c;
		c.ts=ts*b.ms+ms*b.ts;
		c.ms=ms*b.ms;
		return c;}
		void rutgon();
			
        
        void PHANSO::rutgon(){
        	int i;
        	for(i=ts;i>o;i--)
        	if (ts%i==0&&ms%i==0)
        	return i;
        	
        	
		}
        void PHANSO::nhap(){
        	cout<<" Nhap tu so :";
        	cin>> ts;
        	do{
			cout<<"Nhap mau so :";
			cin>>ms;
			}while(ms==0);
        	
		}
		void PHANSO::hienthi(){
			if(ts*ms>0)
			cout<<abs(ts)<<"/"<<abs(ms);
			else 
			cout<<"-"<<abs(ts)<<"/"<<abs(ms);
			
		}
		int main(){
			PHANSO ps1,ps2,tong;
			cout<<endl<<"Nhap phan so thu 1 :";
			ps1.nhap();
			cout<<endl<<"Nhap phan so thu 2 :";
			ps2.nhap();
			tong=ps1+ps2;
			cout<<endl<<"Tong cua 2 phan so la :";
			tong.rutgon();
			tong.hienthi();
			return 0;
			
			
			
			
			
			
			
		}