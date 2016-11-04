int suite_arithmetique(int *t1,int n1 )
{
	int r,*pi=t1,ok=1;
	for(r=*(pi+1)- *pi ,pi=t1+2;pi<t1+n1;pi++)
		if(*pi - *(pi-1)!=r)
		{
			ok=0;
			break;
		}
	return ok;
}

int suite_geometrique(int *t1,int n1 )
{
	int *pi=t1,ok=1;
	float q;
	q=(float)(*(pi+1)/(*pi));
	for(pi=t1+2;pi<t1+n1;pi++)
		if((float)(*pi/(*(pi-1)))!=q)
		{
			ok=0;
			break;
		}
	return ok;
}