/*********************************************************************************
 Name: Parthesh Soni    Roll  No.:16BIT015
 Practical No.: 5(a)    Topic: Working with arrays
 DOS:                   DOC:
 *********************************************************************************/
 #include<stdio.h>
 #include<stdlib.h>
 
 void main()
  { 
     system("clear");
     int i,size,max;
     int ar[20],rev[20],sq[20];
      
     printf("\n Enter size of array( max. 20):");
     scanf("%d",&size);
     
     printf("\n  Enter  elements of the array:");
 
     for(i=0;i<size;++i)
       {
         scanf("%d",&ar[i]);
       }
        
       max=ar[0];
     for(i=0;i<size;++i) 
       {
           sq[i]=ar[i]*ar[i];
           rev[size-1-i]=ar[i];
       }
 
     printf(" \n The square of all array elements is :");
       
       for(i=0;i<size;++i)
       {
         printf("%d ",sq[i]);
       }

     printf("\n The reverse of array is : ");

       for(i=0;i<size;++i)
       {
         printf("%d ",rev[i]);
       }

     
       
       for(i=1;i<size;++i)
        {  
           if(max<ar[i])
              max=ar[i];
        }
        
        printf("\n The maximum element of array is:%d \n",max);
        printf(" The position of max. element is :");
        
       for(i=0;i<size;++i)
        {  
           if(ar[i]==max)
            printf("%d ",i+1);
            
        }
          printf("\n");
 }

         
        
        
 
          
































