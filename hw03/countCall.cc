File* fp = fopen("text.txt", "w");
int value = 0;
while(fscanf (fp, "%d", &value) != EOF){
	printf("%d", value)
}
fclose(fp);