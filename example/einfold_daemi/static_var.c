void useStatic(){
static int i =1;
writeDebugStream("Tis is the value of static i = %d\n", i);
i++;
}
void useNoneStatic(){
int i =1;
writeDebugStream("Tis is the value of none static i = %d\n", i);
i++;
}

task main()
{
	for(int i =0;i<10;i++){
		useStatic();
	}
		for(int i =0;i<10;i++){
		useNoneStatic();
	}
}
