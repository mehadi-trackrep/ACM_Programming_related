#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

#define rep(i,a,b) for(int i=a;i<b;++i)
#define per(i,a,b) for(int i=b-1;i>=a;--i)

const double Sqrt3=sqrt(3.0);

struct Circle{
	double x,y;
	double r;
	Circle(double _x=0,double _y=0,double _r=0){
		x=_x,y=_y,r=_r;
	}
}cir[10];

double a,r1,r2,r3;

const double eps=1e-9;
double f(double x){

	double low=0,up=Sqrt3*(a-fabs(x));

	int cnt=0;
	for(int i=1;i<=3;i++){
		Circle& c=cir[i];
		double d=c.r*c.r-(x-c.x)*(x-c.x);
		if(d<-eps)return 0;
		d=sqrt(d);
		double y1=c.y-d,y2=c.y+d;
		low=max(low,y1);
		up=min(up,y2);
	}
	return  up-low>=eps?up-low:0;
}

double simpson(double L, double R){
	double mid = (L + R) / 2.0;
	return (f(L) + 4.0 * f(mid) + f(R)) * (R - L) / 6.0;
}

double asr(double L, double R, double eps,double ST){
	double mid = (L + R) / 2.0;
	double SL = simpson(L, mid), SR = simpson(mid, R);
	if(fabs(SL + SR - ST) <= 15.0 * eps) return SL + SR + (SL + SR - ST) / 15.0;
	return asr(L, mid, eps/2.0,SL) +asr(mid, R, eps/2.0,SR);


double query_l(double r){
	double l=-a,mid;
	while(r-l>=eps){
		mid=(l+r)/2;
		if(f(mid)>=eps){
			r=mid;
		}
		else{
			l=mid+eps;
		}
	}
	return r;
}

double query_r(double l){
	double r=a,mid;
	while(r-l>=eps){
		mid=(l+r)/2;
		if(f(mid)>=eps){
			l=mid;
		}
		else{
			r=mid-eps;
		}
	}
	return l;
}
/*
5
10 5 5 5
10 6 6 7
10 12 13 14
10 15 15 15
10 19 20 18
*/
int main(){
	int T;
	scanf("%d",&T);
	while(T--){

		scanf("%lf %lf %lf %lf",&a,&r1,&r2,&r3);
		cir[1]=Circle(0,0,r1);
		cir[2]=Circle(a/2,Sqrt3*a/2,r2);
		cir[3]=Circle(-a/2,Sqrt3*a/2,r3);

		double l=-a,r=a;
		for(l=-a;l<=a;l+=a/100000){
			if(f(l)>eps){
				l=query_l(l);
				r=query_r(l);
				break;
			}
		}

		printf("%.10f\n",asr(l,r,eps,simpson(l,r)));
	}
	return 0;
}
