
	COUNT WORDS
		
		pseudocode:
		For i from 0 to fin str:
		# skip space and tabs
		# if we found a word
			if(str[i])		// ay character 3ndo value hasab ascii code 
							// y3ni had condition dima shiha mn gher ila l9at '\0' ( hya nit NULL)
							// because '\0' = 0
			count = count + 1
			# skip the word
		END For
		
		NOTE:
			- while ((str[i] == ' ' || str[i] == '\t') && str[i])	// ila l9it gher whda mn 
					i++;															//	hado '  '  '\t' b9a tincremmenter
			
			- rad lbal hna ila drti (str[i] != '  ' && str[i] != '\t')  rak katgol str[i] kaykhalf
			space w tab bjouj (darori ikhalfhom bjouj)
			wla drti (str[i] != '  ' || str[i] != '\t')  rak katgol str[i] kaykhalf gher whda fihom ima space
			wla tab (ikhalf gher whda fihom 3la l2a9al)