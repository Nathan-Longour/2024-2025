class ChaineCar{
private:
	char* p_str;
	unsigned int len;
public:
	ChaineCar(const char* = " ");
	ChaineCar(const ChaineCar&);

	unsigned int Getlen(void) const{
		return len;
	}
	char* Getstr(void)const {
		return p_str;
	}
	void Affiche(void)const;
	void Affiche(ostream& flux)const;

	ChaineCar Ajoute(const ChaineCar&)const;

	ChaineCar Ajoute(char*)const;

	void MintoMaj(void);
	ChaineCar& operator=(ChaineCar a);

	~ChaineCar(void);
};


ChaineCar operator+(ChaineCar a, ChaineCar b);

ostream& operator<<(ostream& flux, const ChaineCar& str);