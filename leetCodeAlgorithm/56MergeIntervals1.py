class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:        
        intervals.sort()
        temp=intervals[0]
        answer=[]
        
        for i in range(len(intervals)):
            item=intervals[i]
            
            if item[0]<=temp[1]:
                temp[1]=max(temp[1],item[1])
                continue
            
            answer.append(temp)
            temp=intervals[i]
        
        answer.append(temp)
        
        return answer