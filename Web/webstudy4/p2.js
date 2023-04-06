var express = require("express");
var app = express();
app.listen(3000, function(){console.log("listening on port 3000");});

app.get("/", function(req,res){
	res.sendFile(__dirname+"/index.html");
});


	 -Index.html

<html>
<body>
2022 node.js study
</body>
</html>

