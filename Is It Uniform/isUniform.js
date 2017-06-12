var array = [1, 1, 1, 1];
var isUniform = false; 

console.log(isUniformCheck(array));

function isUniformCheck(array){
	for (var i = 1; i < array.length; i++) {
		if (array[0] === array[i]) {
			isUniform = true;
		}
		else {
			isUniform = false;
			return isUniform
		}
	}
	return isUniform;
}

