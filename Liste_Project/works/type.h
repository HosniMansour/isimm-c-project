struct date
{
		int j,m,a;
};

struct personne
{
	long int tel;
	char nom[50],prenom[50],adresse[50],adr_mail[50];
	date date_naiss;
	int code ;
};

/***********************************************************/

struct cellule
{
	struct personne info;
	struct cellule * suiv;
};
typedef struct cellule * liste;

/*********************************************************/

struct celluled
{
    struct celluled * avant;
	struct personne info;
	struct celluled * suiv;
};

typedef struct celluled * element;

struct listed
{
    struct celluled* tete;
    struct celluled* queu;
};

typedef struct listed ldc;
