  function add(a,b)
      {
         return a+b;

         
      }
       function multi(a,b)
      {
         return a*b;

         
      }
       function divi(a,b)
      {
         return a/b;

         
      }
       function sub(a,b)
      {
         return a-b;

         
      }
       function result(a1,b1,callback)
      {
       let value = callback(a1,b1);
       console.log(value);
         

         
      }

      result(10, 5, add);
      result(10,5,sub);
      result(10,5,multi);
      result(10,5,divi);
   