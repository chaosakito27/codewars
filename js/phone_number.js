function createPhoneNumber(numbers){
	if(numbers.length == 10) {
		var format = "(xxx) xxx-xxxx";

		for(var i = 0;i<numbers.length;i++) {
			format = format.replace('x', numbers[i]);
		}
		
		return format;

	} else return 0;

}

console.log(createPhoneNumber([1, 2, 3, 4, 5, 6, 7, 8, 9, 0]))

