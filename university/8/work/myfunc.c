int func1(int x,int y){
	int z=1;
	int i;
	for(i=(x>=y)*y+(y>x)*x;i>1;i=(i-1)/z){
		if(x%i==0 && y%i==0) z=i;
	}
	return z;
}

int func2(int x){
	int z=1;
	int i;
	for(i=2;i<x && z>0;i++) z=x%i;
	return (i==x);
}

int func3(void){
	static int static_x=1;
	static_x++;
	return static_x;
}
