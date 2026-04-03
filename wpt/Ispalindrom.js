import React , { useState } from "react";

function IsPalindrome() {
  const [num, setNum] = useState("");
  const [result, setResult] = useState("");

  const checkPalindrome = () => {
    let original = num.toString();
    let reversed = original.split("").reverse().join("");

    if (original === reversed) {
      setResult(`${num} is a Palindrome`);
    } else {
      setResult(`${num} is NOT a Palindrome`);
    }
  };

  return (
    <div style={{ textAlign: "center", marginTop: "50px" }}>
      <h2>Palindrome Checker</h2>

      <input
        type="number"
        placeholder="Enter number"
        value={num}
        onChange={(e) => setNum(e.target.value)}
      />

      <br /><br />

      <button onClick={checkPalindrome}>Check</button>

      <h3>{result}</h3>
    </div>
  );
}

export default IsPalindrome;