var express = require("express");
var bodyParser = require("body-parser");

var app = express();
app.listen(3000, function(){console.log("listening on port 3000!!!");});
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({extended: true}));


app.get("/", function(req,res){
	res.sendFile("/Users/jeonseol/Desktop/webstudy/index.html");
});

app.post('/', (req,res) => {
  console.log(req.body); 
  res.send("name "+ req.body.name + "<br> age : " + req.body.age);
});

