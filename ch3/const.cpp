int main() {
	int const ival = 3;	// constant int
	ival = 4;						// error trying to change const
	
	int const size = 20;
	char buf[size];				// can use a const to initialize an array

	char const *pref;				// this pointer cannot be used to modify what it points to
	*pref = 'a';
	pref++;			// the pointer itself can be changed
	
	char s;
	char *const pcon = &s;			// this is a constant pointer
	*pcon = 'a';				// can change what it points to
	pcon++;							// can't change pointer
	
	char const *const lockeddown = &s;		// now neither pointer or pointee can be changed
	// RULE OF THUMB: whatever is to the left of const can't be changed
	//		char const - the char pointed to is const
	//		*const - the pointer is const
	//
	// this is despite the fact that const char == char const
	// but helps clarify what is const in something like 'char const *p'
}
