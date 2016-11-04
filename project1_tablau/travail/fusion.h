
void fusion1(int t3[],int t12[],int t15[],int n3,int n12)
{
	int i=0,j=0,k=0 ;
	while(i<n3 && j <n12)
	{
		if(t3[i]<t12[j])
      	t15[k++]=t3[i++];
		else
			t15[k++]=t12[j++];
   }
	while(i<n3)
      	t15[k++]=t3[i++];
   while(j <n12)
			t15[k++]=t12[j++];
}

void fusion2 (int t10[],int t11[],int t16[],int n)
{
	int i , max,d,x ,u ,min ;
	for(i=0;i<n;i++)
	{
		if(t10[i]>t11[i])
		{
			max=t10[i];
			min=t11[i];
		}
		else
		{
			max=t11[i];
			min=t10[i];
		}
		u=min%10;
		d=min/10;
		x=(max/10)*1000+d*100+(max%10)*10+u;
		t16[i]=x;
	}
}
