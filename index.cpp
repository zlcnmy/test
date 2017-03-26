#include<iostream>

using namespace std;


int main(){
	
	int a,b,c,d,e,f,g,h;
	for(a=0;a<10;a++){    //Ïé 
		for(b=0;b<10;b++){ //Èð 
		    if(a==b) continue;
	    	for(c=0;c<10;c++){ //Éú 
	    	if(c==b || c==a) continue;
		       for(d=0;d<10;d++){ //»Ô 
		        if(d==a || d==b || d==c) continue;
		        	for(e=1;e<10;e++){//Èý 
		        	  if(e==a || e==b || e==c || e==d) continue;
		            	for(f=0;f<10;f++){//Ñò 
		                	if(f==a || f==b || f==c || f==d || f==e) continue;
		                	for(g=0;g<10;g++){ //Ï× 
		                	  	if(g==a || g==b || g==c || g==d || g==e || g==f) continue;
			                  for(h=0;h<10;h++){ //Æø 
			                  	 	if(h==a || h==b || h==c || h==d || h==e || h==f || h==g) continue;
			                    float abcd  = a*1000+b*100+c*10+d;
			                    float efgb  = e*1000+f*100+g*10+b;
			                    float efgbh = e*10000+f*1000+g*100+b*10+h;
			                    if((abcd + efgb) == efgbh){
			                    	cout<<e<<f<<g<<b;
			                    	return 0;
			                    }
								  
	                         }
	                     	}
	                	}
	   	      		}
				}	
			}	
		}
	}
	
	
	
	return 0;
} 
