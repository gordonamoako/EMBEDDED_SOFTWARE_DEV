/**********************************************************************************
 * Copyright (C) 2017 by Gordon Agyemang					  *
 *										  *
 * Redistribution, modification or use of this software in source or binary	  *
 * forms is permitted as long as the files maintain this copyright. Users are 	  *
 * permitted to modify this and use it to learn about the field of embedded	  *
 * software. Gordon Agyemang not liable for any					  *
 * misuse of this material. 							  *
 *										  *
 **********************************************************************************/

/**********************************************************************************
 * File: stats.h							   	  *
 * Description:								  	  *
 *	This file contains declaration of functins defined in stats.c file 	  *
 *									   	  *
 * Aauthor: Gordon Agyemang 						  	  *
 * Date: November 23, 2017						   	  *
 *									   	  *
 **********************************************************************************/

#ifndef __STATS_H__
#define __STATS_H__


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
 void print_array(unsigned char *data, unsigned int array_size);


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
 void sort_array( unsigned char *data, unsigned int array_size );


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
 float find_median( unsigned char *data, unsigned int array_size ) ;


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
 float find_mean( unsigned char *data, unsigned int array_size);


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
 void print_statistics(unsigned char *data, unsigned int array_size);


/****************************************************************************************
 * Function: find_maximum                                                               *
 * Descriptionrpi:                                                                      *
 *	This function takes an array of characters and finds the maximum caharacter in  *
 *	the dataset 									*
 * Parameters:                                                                       	*
 *	unsigned char *data: a pointer to an array                                   	*
 *	unsigned int array_size: The number of characters in the array               	*
 * Return:  									     	*
	The Maximum number in the array					     	*
 ****************************************************************************************/
 unsigned char find_maximum(unsigned char *data, unsigned int array_size);


/*******************************************************************************************
 * Function: find_minimum                                                                  *
 * Descriptionrpi:                                                                         *
 *	This function takes an array of characters and finds the minimum charater in the   *
 *	dataset										   *
 * Parameters:                                                                       	   *
 *	unsigned char *data: a pointer to an array                                   	   *
 *	unsigned int array_size: The number of characters in the array               	   *
 * Return:  									     	   *
	The minimum number in the array				     	      		   *
 *******************************************************************************************/ 
 unsigned char find_minimum( unsigned char *data, unsigned int array_size);


#endif /* __STATS_H__ */
