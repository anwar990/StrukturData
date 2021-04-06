#ifndef JAM_H_INCLUDED
#define JAM_H_INCLUDED

#include <iostream>
using namespace std;

struct tJam {
    int hh;
    int mm;
    int ss;

    void setJam(int jam) {
        hh = jam;
    }

    void setMenit(int menit) {
        mm = menit;
    }

    void setDetik(int detik) {
        ss = detik;
    }
    
    int getJam() {
    	return hh;
	}
    
    int getMenit() {
    	return mm;
	}
    
    int getDetik() {
    	return ss;
	}
	
	bool isValid(){
		if(hh < 0 || hh > 23) {
			return false;
		}
		
		if(mm < 0 || mm > 59) {
			return false;
		}
		
		if(ss < 0 || ss > 59) {
			return false;
		}
		
		return true;
	}

    void cetakJam() {
    	// Cek jika jam:menit:detik sudah valid
    	if(isValid()) {
        	cout << "Jam sekarang " << getJam() << ":" << getMenit() << ":" << getDetik() << endl;
		} else {
			cout << "Format jam tidak benar !!!" << endl;
		}
    }
};

#endif // JAM_H_INCLUDED
