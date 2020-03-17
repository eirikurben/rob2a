// ad nota 2d array 5x6 array int array
int my_int_2d_arry[6][6]={{1,2,3,4,5,6},
	{11,12,13,14,15,16},
	{21,22,23,24,25,26},
	{31,32,33,34,35,36},
	{41,42,43,44,45,46},
	{51,52,53,54,55,56}};

task main()
{
	//geri forluppu til ad prenta ut gildi
	for(int i=0;i<=5;i++){
		for(int j = 0;j<=5;j++){
			writeDebugStreamLine("This is a index value = %d and this is the valu =%d\n", i,my_int_2d_arry[i][j]);
		}
	}
	}
