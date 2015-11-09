<?php
// palindrome.php for palindrome in /home/david/DPHP/Jour01_DPHP/palindrome
// 
// Made by LE David
// Login   <le_d@etna-alternance.net>
// 
// Started on  Mon Nov  9 13:18:58 2015 LE David
// Last update Mon Nov  9 21:30:55 2015 LE David
//

function	palindrome($param)
{
  $start = 0;
  $end = 0;
  $size = 0;
  $reverse = "";
  while (isset($param[$size]))
    $size++;
  $size - 1;
  while ($start < $size)
    {
      $reverse .= $param[$size - ($start + 1)];
      if (ord($param[$start]) == 32)
	$start++;
      else if (ord($reverse[$end]) == 32)
	$end++;
      else if ($param[$start] == $reverse[$end])
	{
	  echo $param[$start]. "\n";
	  //echo $reverse[$end] . "\n";
	  $start++;
	  $end++;
	  if ($param == $reverse)
	    echo "True\n";
	}
      //$start++;
    }
  if ($param != $reverse)
    echo "False\n";
}  
palindrome("ka yak");
//palindrome("kayak");
//palindrome("faux");