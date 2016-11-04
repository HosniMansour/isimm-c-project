#include<string.h>
int chaine_longue(char tab_ch[][20],int n,int pos)
{
	int ind,i;
	for(i=pos,ind=pos;i<n;i++)
		if(strlen(tab_ch[i])>strlen(tab_ch[ind]))
			ind=i;
	return ind;
}

void permuter(char tab_ch[][20],int ind1,int ind2)
{
	char aux[20];
	strcpy(aux,tab_ch[ind1]);
	strcpy(tab_ch[ind1],tab_ch[ind2]);
	strcpy(tab_ch[ind2],aux);
}

void tri (char tab_ch[][20],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		j=chaine_longue(tab_ch,n,i);
		permuter(tab_ch,i,j);
	}

}
