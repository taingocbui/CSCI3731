#include <cstdio>

int main(){

FILE* fp1 = fopen("text.txt","r");
int count = 0;

while(fscanf(fp1, "%d", &count) != EOF){
	printf("%d",count);
}
fclose(fp1);

count+=1;

FILE* fp2 = fopen("text.txt", "w");
fprintf(fp2,"%d",count);
fclose(fp2);



return 0;
}