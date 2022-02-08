class LRUCache:
    
    def __init__(self, capacity: int):
        self.hash_table={}
        self.capacity = capacity
        
    def get(self, key: int) -> int:
        hash_table=self.hash_table
        
        if key in hash_table:
            value=hash_table[key]
            del hash_table[key]
            hash_table[key]=value
            return hash_table[key]
        
        return -1

    def put(self, key: int, value: int) -> None:
        hash_table=self.hash_table
        hash_table[key]=value
        
        if len(hash_table)>self.capacity:
            for key in hash_table:
                del hash_table[key]
                break
        self.get(key)
        
        return
        
        


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)