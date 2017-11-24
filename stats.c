/******************************************************************************************
 * Copyright (C) 2017 by Gordon Agyemang						  *
 *											  *
 * Redistribution, modification or use of this software in source or binary		  *
 * forms is permitted as long as the files maintain this copyright. Users are 		  *
 * permitted to modify this and use it to learn about the field of embedded		  *
 * software. Gordon Agyemang not liable for any						  *
 * misuse of this material. 								  *
 *											  *
 ******************************************************************************************/

/******************************************************************************************
 * File: stats.c 									  *
 * Description:										  *
 *	This is a simple c program that performs some statistical analytics on a dataset: *
 *		-Minimum								  *
 *		-Maximum								  *
 *		-Mean    								  *
 *		_median									  *
 *		-sorting 								  *
 *											  *
 * Aauthor: Gordon Agyemang 								  *
 * Date: November 23, 2017								  *
 *											  *
 ******************************************************************************************/

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


void main() {
  
 /* Data Set */
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90}; 
/* call the data set */
  sort_array( test, sizeof(test)/sizeof(unsigned char) );  

/* print data set to the screen */
 
  print_array( test, sizeof(test)/sizeof(unsigned char) ); 
 
/* print staticts of the data set */
  print_statistics( test, sizeof(test)/sizeof(unsigned char) );  
  
 }

/***********************************************************************************
 * Function: print_array                                                           *
 * Descriptionrpi:                                                                 *
 *	This function takes an array of characters and prints them to the screen   *
 * Parameters:                                                                     *
 *	unsigned char *data: a pointer to an array                                 *
 *	unsigned int array_size: The number of characters in the array             *
 * Return:  									   *
	void 							  		   *
 ***********************************************************************************/ 
 void print_array(unsigned char *data, unsigned int array_size){
    if( data == NULL)
	return ;
    for( unsigned int i = 0; i < array_size; i++)
       printf("%u ", data[i]);
    printf("\n");
  }

/******************************************************************************************
 * Function: print_statistics                                                             *
 * Descriptionrpi:                                                                  	  *
 *	This function takes an array of characters and calls the functions; find_minimum  *
 *	find_maximum, find_mean and find_median and prints their return values to the     *
 *	screen										  *
 * Parameters:                                                                      	  *
 *	unsigned char *data: a pointer to an array                                   	  *
 *	unsigned int array_size: The number of characters in the array              	  *
 * Return:  									      	  *
	void					    					  *
 ******************************************************************************************/   
 void print_statistics(unsigned char *data, unsigned int array_size) {
    if( data == NULL)
	return ;
    printf("--------------------------------------\n");
    printf("| MINIMUM | MAXIMUM | MEAN  | MEDIAN |\n");
    printf("-------------------------------------\n");
    printf("| %4u    | %4u    | %5.2f | %5.2f  |\n" ,find_minimum(data, array_size ) ,find_maximum(data, array_size),find_mean ( data, array_size ), find_median( data, array_size ) );
    printf("--------------------------------------\n");   
 }

/*************************************************************************************
 * Function: find_median                                                             *
 * Descriptionrpi:                                                                   *
 *	This function takes an array of characters and calculates the median value   *
 * Parameters:                                                                       *
 *	unsigned char *data: a pointer to an array                                   *
 *	unsigned int array_size: The number of characters in the array               *
 * Return:  									     *
	Median of the numbers in the array					     *
 *************************************************************************************/ 
 float find_median( unsigned char *data, unsigned int array_size ) {
    if( data == NULL)
	return 0;
    float median = 0.00;
    if( (array_size % 2) == 0 ) 
	median = (float)((data[ array_size/2 ]) +(data[ (array_size/2) -1]))/2; // median for even number array size 
    else
	median = data[ array_size/2 ] ; //  median for odd number array size
    return median;
  }


/****************************************************************************************
 * Function: find_mean                                                               	*
 * Descriptionrpi:                                                                      *
 *	This function takes an array of characters and calculates the mean of the set   *
 * Parameters:                                                                       	*
 *	unsigned char *data: a pointer to an array                                   	*
 *	unsigned int array_size: The number of characters in the array               	*
 * Return:  									     	*
	Mean of the numbers in the array					     	*
 ****************************************************************************************/ 
 float find_mean( unsigned char *data, unsigned int array_size){
    if( data == NULL)
	return 0.00;
    float mean, sum = 0;
    for( unsigned int i = 0; i < array_size; i++)
       sum += data[i];
    mean = sum/array_size;
    return mean; 
 }

/****************************************************************************************
 * Function: find_maximum                                                               *
 * Descriptionrpi:                                                                      *
 *	This function takes an array of characters and finds the maximum caharacter in  *
 *	the set 									*
 * Parameters:                                                                       	*
 *	unsigned char *data: a pointer to an array                                   	*
 *	unsigned int array_size: The number of characters in the array               	*
 * Return:  									     	*
	Maximum of the numbers in the array					     	*
 ****************************************************************************************/ 
 unsigned char find_maximum(unsigned char *data, unsigned int array_size){
    if( data == NULL)
	return 0;
    unsigned char maximum = data[0];
    for( unsigned int i = 1; i < array_size; i++){
       if( maximum < data[i] )
          maximum = data[i];
    }
    return maximum;
    
 }

/****************************************************************************************
 * Function: find_minimum                                                               *
 * Descriptionrpi:                                                                      *
 *	This function takes an array of characters and finds the minimum caharacter in  *
 *	the set 									*
 * Parameters:                                                                       	*
 *	unsigned char *data: a pointer to an array                                   	*
 *	unsigned int array_size: The number of characters in the array               	*
 * Return:  									     	*
	Minimum of the numbers in the array					     	*
 ****************************************************************************************/
 unsigned char find_minimum(unsigned char *data, unsigned int array_size){
   if( data == NULL)
	return 0;
   unsigned char minimum = data[0];
    for( unsigned int i = 1; i < array_size; i++){
       if( data[i] < minimum)
          minimum = data[i];
    }
  return minimum;
 }
 
/*******************************************************************************************
 * Function: sort_array                                                               	   *
 * Descriptionrpi:                                                                         *
 *	This function takes an array of characters and sorts the array in descending order *
 * Parameters:                                                                       	   *
 *	unsigned char *data: a pointer to an array                                   	   *
 *	unsigned int array_size: The number of characters in the array               	   *
 * Return:  									     	   *
	void					     	          			   *
 *******************************************************************************************/ 
  void sort_array( unsigned char *data, unsigned int array_size ) {
    if( data == NULL)
	return ;
    for( unsigned int i = 1, j; i < array_size; i++){
        unsigned char tmp = data[i];
        for( j = i; j > 0 && tmp > data[j-1]; j--)
            data[j] = data[j-1];
        data[j] = tmp;
        }
   }
    
  

