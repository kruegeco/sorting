Class Celebrity
{
public:

	/*
	 *Default constructor
	 */
	Celebrity() { }

	/*
	 *Constructor
	 */
	Celebrity(string name, int howBadly, string area, bool met) {
		this -> name = name;
		this -> howBadly = howBadly;
		this -> area = area;
		this -> met = met;
	}

	/*
	 *Destructor
	 */
	~Celebrity() { }

	/*
	 *overloads less than
	 */
	Celebrity operator<(const Celebrity& c1, const Celebrity& c2) 
	{
		if (c1.howBadly < c2.howBadly) {
			return true;
		}
		else if (c1.howBadly > c2.howBadly) {
			return false;
		}

		if (c1.met < c2.met) {
			return true;
		}
		else if (c1.met > c2.met) {
			return false;
		}

		if (c1.name < c2.name) {
			return true;
		}
		else if (c1.name > c2.name) {
			return false;
		}
		else {
			return true;
		}
	}
	Celebrity operator<=(const Celebrity& c1, const Celebrity& c2)
	{
		if (c1.howBadly <= c2.howBadly) {
			return true;
		}
		else if (c1.howBadly > c2.howBadly) {
			return false;
		}

		if (c1.met <= c2.met) {
			return true;
		}
		else if (c1.met > c2.met) {
			return false;
		}

		if (c1.name <= c2.name) {
			return true;
		}
		else if (c1.name > c2.name) {
			return false;
		}
		else {
			return true;
		}
	}
private:
	string name;
	int howBadly;
	string area;
	bool met;
};
