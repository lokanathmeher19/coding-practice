let display = document.getElementById('display'); //get the input using id 
let currentInput = '';

function addValue(val) {
  //whatever button is clicked gets add to the diplay
  //ex - if "5" click--> displaybecomes "5"
  //ex - if "5" click and then "+" click --> display becomes "5+"
  currentInput += val;
  display.value = currentInput;
}

function clearDisplay() {
  //clear the calculator display and reset the current input
  currentInput = '';
  display.value = '';
  //set display value to empty(remove everything )
}

function calculate() {
  try {
    //eval() - evaluate the mathematical expression in the current input and return the result
    currentInput = eval(currentInput).toString();
    display.value = currentInput;
  } catch (e) {
    display.value = 'Ghop ghop ghop';
    currentInput = '';
  }
}