
void fusion1 (int *t3,int *t12,int *t15,int n3,int n12)
{
   int *pi=t3,*pj=t12,*pk=t15 ;
	while(pi<t3+n3 && pj <t12+n12)
		if(*pi<*pj)
      {
      	*pk=*pi;
         pk++;
         pi++;
      }
		else
      {
      	*pk=*pj;
         pk++;
         pj++;
      }

	while(pi<t3+n3)
   {
      	*pk=*pi;
         pk++;
         pi++;
    }
   while(pj <t12+n12)
   {
      	*pk=*pj;
         pk++;
         pj++;
   }

}

void fusion2 (int *t10,int *t11,int *t16,int n)
{
   int *p10, *p11,*p16, max,d,x ,u ,min ;
	for(p10=t10,p11=t11,p16=t16;p10<t10+n;p10++,p11++,p16++)
	{
		if(*p10>*p11)
		{
			max=*p10;
			min=*p11;
		}
		else
		{
			max=*p11;
			min=*p10;
		}
		u=min%10;
		d=min/10;
		x=(max/10)*1000+d*100+(max%10)*10+u;
		*p16=x;
	}
}

