	#include "incl.hpp"
 
int main()
{
    using namespace std;
    
    char mem[30000];
    int loc = 0; //lag location
    
    fstream file;
    file.open("code.bf", ios::in | ios::out);
    char tFile[1000];
    file>>tFile;
    
    //~ char tFile[] = "+++++++++++>+>>>>++++++++++++++++++++++++++++++++++++++++++++>++++++++++++++++++++++++++++++++<<<<<<[>[>>>>>>+>+<<<<<<<-]>>>>>>>[<<<<<<<+>>>>>>>-]<[>++++++++++[-<-[>>+>+<<<-]>>>[<<<+>>>-]+<[>[-]<[-]]>[<<[>>>+<<<-]>>[-]]<<]>>>[>>+>+<<<-]>>>[<<<+>>>-]+<[>[-]<[-]]>[<<+>>[-]]<<<<<<<]>>>>>[++++++++++++++++++++++++++++++++++++++++++++++++.[-]]++++++++++<[->-<]>++++++++++++++++++++++++++++++++++++++++++++++++.[-]<<<<<<<<<<<<[>>>+>+<<<<-]>>>>[<<<<+>>>>-]<-[>>.>.<<<*[-]]<<[>>+>+<<<-]>>>[<<<+>>>-]<<[<+>-]>[<+>-]<<<-]";
	//~ char tFile[] = "++++++++++++++++++++++++++++++++[>+>+<<-]>>+++++++++++++++++++++++++<<++++++++++[>>.-<.<-]"; //9->0
	//~ char tFile[] = ">+++++++++[<++++++++>-]<.>+++++++[<++++>-]<+.+++++++..+++.>>>++++++++[<++++>-]<.>>>++++++++++[<+++++++++>-]<---.<<<<.+++.------.--------.>>+."; //Hello World
	//~ char tFile[] = ",>,>++++++++[<------<------>>-]<<[>[>+>+<<-]>>[<<+>>-]<<<-]>>>++++++[<++++++++>-]<.";
	//~ char tFile[] = ",>,>++++++[-<--------<-------->>]<<[>[->+>+<<]>[-<<-[>]>>>[<[>>>-<<<[-]]>>]<<]>>>+<<[-<<+>>]<<<]>[-]>>>>[-<<<<<+>>>>>]<<<<++++++[-<++++++++>]<.";
	
    char cFile[1000];
	
    strncpy(cFile, tFile, 1000);
    
    char iBuffer[100];//input buffer
    int bufFull = 0;
    int bufCheck = 0;

    for(int n=0;n<=strlen(cFile);n++)
    //first "." use @ 334
    
    {
        switch(cFile[n])
        
        {
			case '+':
	            mem[loc]++;
	            break;
	        case '-':
	            mem[loc]--;
	            break;
	        case '<':
	            switch(loc)
	            {
	                case 0:
	                    loc = 30000;
	                    break;
	                default:
	                    loc--;
	                    break;
	            }break;
	        case '>':
	            switch(loc)
	            {
	                case 30000:
	                    loc = 0;
	                    break;
	                default:
	                    loc++;
	                    break;
	            }break;
	        case '[':
				if(mem[loc] == 0)
				{
					for(int a = n, iBool = 0;iBool == 1;a++)
					{
							cout << "a: " << a << endl;
						if(cFile[a] == ']')
						{
							cout << "a: " << a << endl;
							iBool = 1;
							n = a;
						}
					}
				}
	            break;
	        case ']':
	            if(mem[loc] != 0)
	            {
					int mark = n-1;
					for(int b=1;b!=0;mark--)
					{
						if(cFile[mark] == ']')
						{
							b++;
						}
						else if(cFile[mark] == '[')
						{
							b--;
							
							if(b == 0)
							{
								n = mark;
							}
						}
						else
						{
							//~ cout << "u";
						}
					}
					break;
				}
	            else {break;}
	        case ',':
				
				if( (bufCheck == bufFull) && (bufFull != 0) )
				{
					bufCheck = 0;
					bufFull = 0;
					break;
				}
				else if( bufCheck < bufFull )
				{
					mem[loc] = iBuffer[bufCheck];
					bufCheck++;
					break;
				}
				else if( bufFull == 0 )
				{
					cin >> iBuffer;
					bufFull = strlen(iBuffer);
					
					mem[loc] = iBuffer[bufCheck];
					
					bufCheck++;
					break;
				}
				else
				{
					break;
				}
				break;
	        case '.':
	            cout << mem[loc];break;
	        default:
	            //~ cout << "e";
	            break;
        }
    }
    cout << endl;
    return 0;
} 
