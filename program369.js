function Display(Brr)
{
    let iCnt = 0;
    let iMin = Brr[0];

   for(iCnt = 1; iCnt < Brr.length; iCnt++)
   {
      if(Brr[iCnt] < iMin)
      {
        iMin = Brr[iCnt];
      }
       // console.log(Brr[iCnt]);   
   }
   return iMin;

}

function main()
{
   const Arr = [10,20,30,40,50];

   let iRet = 0;

   iRet = Display(Arr);

   console.log("Minimum element is :",iRet);

   
}

main(); 


