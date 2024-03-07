class Masina
{
		char firma[50];
		int litri;
		int consum;
		int kilometraj;
	public:
		void bisnitar();
		void cursa(int distanta);

		void setFirma(char firmaden[]);
		void setLitri(int a);
		void setConsum(int a);
		void setKilometraj(int a);

		void getFirma();
		void getLitri();
		void getConsum();
		void getKilometraj();
};
