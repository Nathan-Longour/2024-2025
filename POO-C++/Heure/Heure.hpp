class Heure
{
public:
	void SetH(int HH);
	void SetM(int MM);
	void SetS(int SS);

	int getH(void)const;
	int getM(void)const;
	int getS(void)const;

	void AddSec(int sec);
	int HourDif(const Heure &h2);
	void Affiche()const;
	Heure(unsigned int H, unsigned int M, unsigned int S);
	Heure(void);
	int ConvHs()const;
	void ConvsH(int sec);
private:
	unsigned int h;
	unsigned int m;
	float s;
};
