<node-smart.js>
var express = require("express");
var bodyParser = require("body-parser");

var app = express();
app.listen(3000, function(){
  console.log("listening on port 3000!!!");});
app.use(bodyParser.json());
app.use(bodyParser.urlencoded({extended: true}));


app.get("/", function(req,res){
  res.sendFile("/Users/jeonseol/Desktop/webstudy/smart.html");
});
app.post('/', (req,res) => {
  var rum="523";
  console.log(req.body); 
  if(req.body.num=="523")
  res.send("출석되었습니다.");
  else
  res.send("출석번호가 틀렸습니다.");
});
<node-smart.html>
<html>
<body>
<form action="" method="post" >
<input type="text" id="num" name="num">
<input type="submit" value="제출">
</body>
</html>

