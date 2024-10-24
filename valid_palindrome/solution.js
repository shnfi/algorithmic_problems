/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s = s.replace(/\ /g, "");
    s = s.replace(/\,/g, "");
    s = s.replace(/\:/g, "");
    s = s.replace(/\./g, "");
    s = s.replace(/\{/g, "");
    s = s.replace(/\}/g, "");
    s = s.replace(/\[/g, "");
    s = s.replace(/\]/g, "");
    s = s.replace(/\@/g, "");
    s = s.replace(/\$/g, "");
    s = s.replace(/\"/g, "");
    s = s.replace(/\'/g, "");
    s = s.replace(/\\/g, "");
    s = s.replace(/\#/g, "");
    s = s.replace(/\_/g, "");
    s = s.replace(/\-/g, "");
    s = s.replace(/\?/g, "");
    s = s.replace(/\;/g, "");
    s = s.replace(/\!/g, "");
    s = s.replace(/\(/g, "");
    s = s.replace(/\)/g, "");
    s = s.replace(/\`/g, "");

    if (s.toLowerCase() === s.split('').reverse().join('').toLowerCase())
    {
        return true;
    }
    else return false;
};
