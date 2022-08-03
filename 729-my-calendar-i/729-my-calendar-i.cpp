class MyCalendar {
public:
	MyCalendar() {

	}
	map<int, int> days {};
	bool book(int start, int end) {
		int old = days.size();
		days.insert({start, end});
		if(old == days.size()) return false;
		auto it = days.find(start);
		if(days.size() == 1) return true;
		else if(it == days.begin()) {
			int m = (*it).second;
			it ++;
			int n = (*it).first;
			it --;
			if(m <= n) return true;
			else {
				days.erase((*it).first);
				return false;
			}
		} else {
			it ++;
			if(it == days.end()) {
				it --;
				it --;
				int a = (*it).second;
				it ++;
				int b = (*it).first;
				if(a <= b) return true;
				else {
					days.erase((*it).first);
					return false;
				}
			} else {
				it --;
				int m = (*it).second;
				it ++;
				int n = (*it).first;
				it --;
				it --;
				int a = (*it).second;
				it ++;
				int b = (*it).first;
				if(m <= n && a <= b) return true;
				else {
					days.erase((*it).first);
					return false;
				}
			}
		} 
	}
};