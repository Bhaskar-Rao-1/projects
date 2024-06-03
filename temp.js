const temp=document.getElementById('value');
const toCF=document.getElementById('toCF');
const toFC=document.getElementById('toFC');
const para=document.getElementById('res');
let temps; 

function convert(){

temps=Number(temp.value);
let result;

if(toCF.checked){
    result=temps*(9/5)+32;
    para.textContent=Math.round(result)+"°F";
}
else if(toFC.checked){
    result=(temps-32)*(5/9);
    para.textContent=Math.round(result)+"°C";
}
else{
    para.textContent="Choose any option";
}

}