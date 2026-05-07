class Solution {
	public List<Integer> sortArray(int[] nums) {

		nums= h(nums);
		nums=del(nums,new int[nums.length]);

		List<Integer> list= new ArrayList<>();
		for(int i=0;i<nums.length;i++){
			list.add(nums[i]);

		}        
		return list ;     
	}
	//heapify the original array
	public int[] h(int[] nums){
		for(int i=nums.length-1;i>=0;i--){
			int a=i+1;
			while(2*a-1<nums.length||2*a<nums.length){
			int prev=a;
				if(2*a<nums.length){
					if(nums[2*a-1]>nums[2*a]){
						a=2*a;
					}else{
						a=2*a+1;
					}
					if(nums[a-1]>nums[prev-1]){
						int temp=nums[a-1];
						nums[a-1]=nums[prev-1];
						nums[prev-1]=temp;
					}
				}else{
					a=2*a;
					if(nums[a-1]>nums[prev-1]){
						int temp=nums[a-1];
						nums[a-1]=nums[prev-1];
						nums[prev-1]=temp;
					}
				} 
			}
		}
		return nums;
	}
	//continously delete max element ,ie,first block of heapified array
	public int[] del(int[]nums, int[] sort){
		for(int x=nums.length-1;x>=0;x--){
			sort[x]=nums[0];
			nums[0]=nums[x];
			nums[x]=Integer.MIN_VALUE;
			int a=1;
			//make array again a complete binary tree
			while(2*a-1<nums.length||2*a<nums.length){
			int prev=a;
				if(2*a<nums.length){
					if(nums[2*a-1]>nums[2*a]){
						a=2*a;
					}else{
						a=2*a+1;
					}
					if(nums[a-1]>nums[prev-1]){
						int temp=nums[a-1];
						nums[a-1]=nums[prev-1];
						nums[prev-1]=temp;
					}
				}else{
					a=2*a;
					if(nums[a-1]>nums[prev-1]){
						int temp=nums[a-1];
						nums[a-1]=nums[prev-1];
						nums[prev-1]=temp;
					}
				} 
			}

		}
		return sort;

	}
}