 function parse()
       {
    
           var a=document.getElementById("id").value;
           var start=document.getElementById("id1").value;
           var end=document.getElementById("id2").value;
           var j=0;
           var xc=0;
           var yc=0;
           var c=0;
           var xa;
           var ya;
           var xb;
           var yb;
           while(a[j]!='x')
           {
               xc=xc+a[j];
               j++;
           }
           if(a[j-1]==" ")
           {
               xc=1;
           }
           j++;
           j++;
           while(a[j]!='y')
           {
               yc=yc+a[j];
               j++;
           }
           if(a[j-1]=='+')
           {
               yc=1;
           }
           j++;
           j++;
           while(a[j]<=a.length)
           {
              c=c+a[j];
              j++;
            }
            alert("xcoeff is:"+xc);
            alert("ycoeff is:"+yc);
            alert("constant is:"+c);
            xa=start;
            xb=end;
            ya=(c-(xc*xa))/yc;
            yb=(c-(xc*xb))/yc;
            alert(xa);
            alert(ya);
            alert(xb);
            alert(yb);
            getgraph(xa,ya,xb,yb,xc,yc,c);
  }

  function getgraph(xa,ya,xb,yb,xc,yc,c)
  {        
  var steps=document.getElementById("id3").value;
  var c=document.getElementById("myCanvas");
  var ctx=c.getContext("2d");
  ctx.translate(0,myCanvas.height);
  ctx.scale(5,-5);
  ctx.beginPath();
  ctx.moveTo(xa,ya);
  ctx.lineTo(xb,yb);            
  ctx.stroke();
  }
                 
                  
