class LRUCache{
	public : 
		list<pair<int,int>> LRU;
		unordered_map<int , list<pair<int,int>> :: iterator> mp;
		int cap  ;

	LRUCache(){

	}
	LRUCache(int _cap){
		cap = _cap;
	}
	int get(int key){
		if(mp.find(key) == mp.end()) return -1;
		else {
			int value =(*mp[key]).second;
			LRU.erase(mp[key]);
			LRU.push_front({key,value});
			mp[key] = LRU.begin();
			return (*mp[key]).second;
		}
	}
	void put(int key , int value){
		if(mp.find(key) == mp.end()){
			if(LRU.size() == cap){
				int back = LRU.back().first;
				LRU.erase(mp[back]);
				mp.erase(back);
			}
		}
		else 
			LRU.erase(mp[key]);

		LRU.push_front({key , value});
		mp[key] = LRU.begin();
	}
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */