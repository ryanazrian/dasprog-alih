int word(const char sentence[ ]){
	int inword = 0;
	const char *it = sentence;
	
	do switch(*it){
		case '\0':
		case '\n':
		case '\t':
		case '\r':
 		if(inword){inword = 0; count++}
		break;
		default : inword = 1;
	}while(*it++);
	return count;

}
