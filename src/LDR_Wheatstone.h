#ifndef LDR_Wheatstone_h
#define LDR_Wheatstone_h

// library interface description

class LDR_Wheatstone {
	private:
		byte LDR_Pin1;
		byte LDR_Pin2;
	  	float th_percentage;
	  	bool acquisition_mode;
	  	unsigned long startMillis; 
		unsigned long currentMillis;
		const unsigned long period = 1000; //1 second peak wide
		float Loop_delay;
	  	//methods
	  	//float Calc_resist(float V_ldr);
	  
	public:
		LDR_Wheatstone( float percentage, int LDR_Pin1, int LDR_Pin2, String name, float Loop_delay);	//ldr_pin1 is A
	  	void calibrate();
	  	bool check_activation();
	  	
	  	//variables
	  	int reference;
	  	String name;
	  	float pattern[50];
	  	float Delta_Perc;
	  	int lectures[10];
};


#endif

