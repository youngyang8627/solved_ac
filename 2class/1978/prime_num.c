#include <stdio.h>


int main(){
	        int i,j;
		        int cnt=0;
			        int tmp=0;
				        for(i=2;i<100000;i++){
						                for(j=2;j<=100000;j++){
									                        if(i%j==0){
													                                cnt++;
																	                        }
												                }
								                if(cnt==1){
											                        tmp++;
														                }
										                cnt=0;
												        }
					        printf("%d",tmp);
						        return 0;
}
   
