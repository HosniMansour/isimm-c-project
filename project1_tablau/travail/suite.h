int suite_arithmetique(int T[],int n)
{
	int r=T[1]-T[0],i;
	for (i=2;i<n;i++)
		if (T[i]-T[i-1] !=r)
			return 0 ;
	return 1 ;
}

int suite_geometrique(int T[],int n)
{
	float r=T[1]/T[0] ;
	int i;
	for (i=2;i<n;i++)
		if ((float)T[i]/T[i-1] !=r)
			return 0 ;
	return 1 ;
}
