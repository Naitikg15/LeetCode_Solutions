void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0;
    int j=0;
    int k=0;
    int arr[m+n];
    while (i<m && j<n){
        if (nums1[i]<=nums2[j]){
            arr[k]=nums1[i];
            i++;
        }
        else{
            arr[k]=nums2[j];
            j++;
        }
        k++;
    }

    while(i<m){
        arr[k]=nums1[i];
        i++;
        k++;
    }

    while(j<n){
        arr[k]=nums2[j];
        j++;
        k++;
    }
    
    for (int x=0; x< m+n; x++){
        nums1[x]=arr[x];
    }
}