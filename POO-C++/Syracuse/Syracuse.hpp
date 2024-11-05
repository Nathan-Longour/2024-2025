class Syracuse {
public:
	Syracuse(unsigned int N = 0, unsigned int E = 0);
	~Syracuse();
	void Affiche() const;
	unsigned int Terme()const;
	unsigned int TpsVol()const;
private:
	unsigned int n;
	
	unsigned int* tab;;
};