$(document).ready(function()
{
    $("td").click(function()
    {
        if($('input:radio[name=c]:checked').val()=="red")
        {
            if(($(this).hasClass("red"))||($(this).hasClass("green"))||($(this).hasClass("blue")))  
            {
                alert("already color present");
            }
            else
            {
                $(this).addClass("red");

            }
       }
       if($('input:radio[name=c]:checked').val()=="green")
       {
           if(($(this).hasClass("red"))||($(this).hasClass("green"))||($(this).hasClass("blue")))  
           {
               alert("color present");
           }
           else
           {
               $(this).addClass("green");

           }
       }
       if($('input:radio[name=c]:checked').val()=="blue")
       {  
           if(($(this).hasClass("red"))||($(this).hasClass("green"))||($(this).hasClass("blue")))  
           {
               alert("color present");
           }
           else
           {
               $(this).addClass("blue");

           }
      }
  });
  $("button").click(function()
  {
      $("td").css("background-color","white");

  });
/*  $('button.shuffle').click(function()
  {
      $('tr').shuffle();
  });*/
});


