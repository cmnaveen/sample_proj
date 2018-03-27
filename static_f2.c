/* hidden function */
static int local_fun(int x)
{
	printf("in local_fun X is %d\n",x);
   int y=23;
   x=y+2;
	return x*x;
}


/*function pointer with external linkage*/
int (*fptr)(int) = local_fun;

