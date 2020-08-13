var express = require('express'); 
//express 모듈을 사용하기 위해 require 로 모듈을 불러온다
var app = express();
// express()  함수를 app(객체)에 할당해 라우팅할 객체를 만든다. 
var bodyParser = require('body-parser');

app.get('/' , function(req,res){
 res.send('hello luda');
});
//기본주소('/')로 접근하면 hello luda 를 띄우는 라우터(모듈)을 만들었다. 

app.get('pass', function(req,res){
    var data =  req.query.data;
    res.send(data);
});

app.use(bodyParser.urlencoded({extended:true}));
//bodyParser 사용

app.post('/user',function(req,res){
    var userId = req.body.id;
    var userPw = req.body.pw;

    res.send('id:'+userId+'pw:'+userPw);
});

app.listen(8888 ,function(){
    console.log('server starting on 8888');
});
// app.listen함수로 지정한 8888번 포트로 웹서버를 열어준다. 


