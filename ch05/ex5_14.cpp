#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;using std::string;
int main()
{
	string prestr,nowstr,tempstr,maxstr;
	int cnt = 1,maxcnt = 1;
	while(cin >> tempstr){
		nowstr = tempstr;
		if(nowstr == prestr){
			++cnt;
		}else{
			if(cnt > maxcnt){
				maxcnt = cnt;
				maxstr = prestr;
			}
			prestr = nowstr;
			cnt = 1;
		}
	}
	if(cnt > maxcnt){              //in case of that the last word repeats the most times.
		maxcnt = cnt;
		maxstr = prestr;
	}
	cout << maxstr << " repeat " << maxcnt << " times." << endl;
	return 0;
}
