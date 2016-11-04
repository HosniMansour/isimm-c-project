int PALINDROME(char ch[],int i)
{
    if(strlen(ch)==1)
        return 1;
    else
    if  (i>strlen(ch)/2)
        return 1;
    else{
        if(ch[i] == ch[strlen(ch)-1-i])
           return PALINDROME(ch,++i);
        else
           return 0;
}
}

int vector_maxAbs(int t[], int n)
{
    int i, vMax;
    vMax = (t[0]);   i=0;
     while(i < n){
                vMax  = (vMax>(t[i])) ? vMax : (t[i]);
                 i++;
     }
     return vMax;
     }

void INVERSE(char ch[],char inv[],int i)

    {
         if(i<strlen(ch)){
             inv[i]=ch[strlen(ch)-i-1];
             inv[i+1]='\0';
             INVERSE(ch,inv,i+1);

        }

    }

int VOYELLE (char ch[],int i)
{

  if ( i >strlen(ch))
        return 0;
    else
            if(toupper(ch[i])=='O' ||toupper(ch[i])=='I' ||toupper(ch[i])=='U' || toupper(ch[i])=='Y' || toupper(ch[i])=='E' || toupper(ch[i])=='A')
        return 1+VOYELLE(ch,++i);
            else
                return 0+VOYELLE(ch,++i);

}
void MAJUS(char ch[],int i)
{
    if(i < strlen(ch))
    {
        ch[i]=toupper(ch[i]);
        MAJUS(ch,++i);
    }
}

int OCCURENCE(char ch[],char c,int i)
{
    if (i>strlen(ch))
            return 0;
    else
      if(ch[i]==c)
            return 1+OCCURENCE(ch,c,++i);
      else
            return 0+OCCURENCE(ch,c,++i);
}

int SAISIE ()
{ int n;
    printf("Donner le taille de tableau  : ");
    scanf("%d",&n);
    if(n>=2 && n<=20)
        return n;
    else
        SAISIE();
}

void REMPLIR(int t[],int n,int i )
{
    if(i<n)
    {
        printf("   |    T[%d]= ",i+1);
        scanf("%d",&t[i]);
        REMPLIR(t,n,++i);
    }
}

void AFFICHAGE(int t[],int n,int i)
{

        if(i<n)
    {
        printf("%d ",t[i]);
        AFFICHAGE(t,n,++i);
    }

}

int SOMME_TAB(int T[],int n, int i)
{
    if(i>=n)
        return 0;
    else
        return T[i]+SOMME_TAB(T,n,++i);
}

int OCCURENCE_TAB(int t[],int n,int c,int i)
{
    if (i>=n)
            return 0;
    else
      if(t[i]==c)
            return 1+OCCURENCE_TAB(t,n,c,++i);
      else
            return 0+OCCURENCE_TAB(t,n,c,++i);
}

void remplirmm(int mat[20][20],int l,int c)
{
    int k=0;
    for(int i=0;i<l;i++)
        for(int j=0;j<c;j++)
    {
        gotoxy(10,13+k);k++;printf("t[%d][%d] = ",i,j);scanf("%d",&mat[i][j]);
    }
}
/*
void remplirmm(int mat[20][20],int i,int j)
{
    int k=1;
    if(k!=i) remplirmm(mat,i-1,j);
    insert(mat,i-1,j);
}

void insert(int mat[20][20],int i,int j)
{
    int k=0;
    if(k!=j) insert(table,i,j-1);
    table[i][j]=i;
}
*/
/*void affichem(int mat[20][20],int i,int j)
{
    int k=1;
    if(k!=j) affichem(mat,i,j-1);
    printf("%d\n",mat[i][j-1]);
    if(k!=i) affichem(mat,i-1,j);
    printf("%d\n",mat[i-1][j]);
}*/

void affichem(int mat[20][20],int l,int c)
{
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf(" %d ",mat[i][j]);
        }
        gotoxy(15,12+i);
    }
}

int recherchem(int mat[20][20],int l,int c)
{
    int max=0;
    for(int i=0;i<l;i++)
        for(int j=0;j<c;j++)
    {
        if(mat[i][j]>max)
            max=mat[i][j];
    }

    return max;
}


