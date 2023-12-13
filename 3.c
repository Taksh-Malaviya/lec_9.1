#include<stdio.h>

void main(){
	
	int i;
	char a[]={'H','e','L','l','O','w','O','r','l','D'};
	
	for(i=0;i<11;i++){
		if(a[i]<97){
		a[i]+=32;
		printf("%c",a[i]);
	}else{
		a[i]-=32;
		printf("%c",a[i]);
	}

}
}

