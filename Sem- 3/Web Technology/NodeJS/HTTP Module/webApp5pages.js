var http=require('http')

const server=http.createServer((req,res)=>{
	if(req.url=='/about'){
		res.end("About")
	}
	else if(req.url=='/contact'){
		res.end("Contact")
	}
	else if(req.url=='/address'){
		res.end("Address")
	}
	else if(req.url=='/features'){
		res.end("Features")
	}
	else if(req.url=='/account'){
		res.end("Account")
	}
	else{
		res.end("Hello World");
	}
})

const port=1000

server.listen(port,()=>{
	console.log("Server listened to port "+port)
})