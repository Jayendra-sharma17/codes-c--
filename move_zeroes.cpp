  int i=0;
        int j=0;
        while(i<n && n<m)
        {
            if(nums1[i]<nums2[j])
            {
                nums1[i]=nums1[i++];
            }
            else{
                nums1[i]=nums2[j++];
            }
        }
        while(i<n)
        {
            nums1[i]=nums1[i++];
        }
        while(j<m)
        {
            nums1[i]=nums2[j++];
        }
        
    }