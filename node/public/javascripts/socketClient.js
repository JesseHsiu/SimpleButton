var socket = io.connect('http://localhost:3000');
socket.on('buttonState', function (data) {
	var states = data.split(" ")
	console.log(states);
	for (var i = 0; i < states.length; i++) {
		if (states[i] == 1)
		{
			$("#btn" + i).text("BUTTON "+ i +" OFF");
		}
		else{
			$("#btn" + i).text("BUTTON "+ i +" ON");
		}
	}

	
});