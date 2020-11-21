#include <stdio.h>
#include <stdlib.h>

int main(){
int i=1,j=2,x=2,y=2;
for (i=1;i<=8;i++){
        while (j>=1){
            while (x>=1){
                while(y>=1){
                        printf("[%d %d %d]\n",j,x,y);
                    }
                }
        }
y--;
x--;
j--;
}

}
