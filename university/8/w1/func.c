double qlarger(double x,double y){
	if(x==0 || y==0) return 0;
	else if(x/y > y/x) return x/y;
	else return y/x;
}
