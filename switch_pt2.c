int main()
{
    
    int num;
    scanf("%d", &num);
    switch(num){
        case 1:
        puts("There are 0 days before the given month");
        break;
        case 2:
        puts("There are 31 days before the given month");
        break;
        case 3:
        puts("There are 59-60 days before the given month");
        break;
        case 4:
        puts("There are 91 days before the given month");
        break;
        case 5:
        puts("There are 122 days before the given month");
        break;
        case 6:
        puts("There are 153 days before the given month");
        break;
        case 7:
        puts("There are 183 days before the given month");
        break;
        case 8:
        puts("There are 214 days before the given month");
        break;
        case 9:
        puts("There are 245 days before the given month");
        break;
        case 10:
        puts("There are 275 days before the given month");
        break;
        case 11:
        puts("There are 304 days before the given month");
        break;
        case 12:
        puts("There are 334 days before the given month");
        break;
        default:
       puts("Error: no such month in my calendar");
    }
	/* your code */
	return 0;
}