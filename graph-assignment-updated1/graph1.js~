function graph(eq,st,end) {    //its super class graph where eq,st,end parameters are passed
    this.equation=eq;
    this.start=st;
    this.end=end;
    this.xa;   //x-co-ordinate of 1st point
    this.ya;   //y-co-ordinate of 1st point
    this.xb;   //x-co-ordinate of 2nd point
    this.yb;   //y-co-ordinate of 2nd point
}

graph.prototype.read=function() {
    j=0;
    xc=0;      //x-coefficient
    yc=0;      //y-coefficient
    c=0;       //constant
   
   //To parse the equation
    while(this.equation[j]!='x')
    {
        xc=xc+this.equation[j];
        j++;
    }
    if(this.equation[j-1]==" ")
    {
    xc=1;
    }
    j++;
    j++;
    while(this.equation[j]!='y')
    {
        yc=yc+this.equation[j];
        j++;
    }
    if(this.equation[j-1]=='+')
    {
        yc=1;
    }
    j++;
    j++;
    while(this.equation[j]<=this.equation.length)
    {
        c=c+this.equation[j];
        j++;
    }  
    alert("xcoeff is:"+xc);
    alert("ycoeff is:"+yc);
    alert("constant is:"+c);
    this.xa=this.start;
    this.xb=this.end;
    this.ya=(c-(xc*this.xa))/yc;
    this.yb=(c-(xc*this.xb))/yc;
    alert(this.xa);
    alert(this.ya);
    alert(this.xb);
    alert(this.yb);  
}


graph.prototype.getGraph=function(){
    c=document.getElementById("myCanvas");
    ctx=c.getContext("2d"); 
    ctx.translate(0,myCanvas.height);
    ctx.scale(5,-5);
    ctx.beginPath();
    ctx.moveTo(this.xa,this.ya);    //moves to xa and ya point
    ctx.lineTo(this.xb,this.yb);    //draws line from (xa,ya) to (xb,yb)        
    ctx.stroke();
}

function main()
{         
    var equation=document.getElementById("id").value;
    var start=document.getElementById("id1").value;
    var end=document.getElementById("id2").value;
    var gr=new graph(equation,start,end); //creates graph object gr
    gr.read(); 
    gr.getGraph();  
             
}




    
