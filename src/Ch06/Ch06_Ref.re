/* src/Ch06/Ch06_Ref.re */
let tryFind(needle, haystack) = {
  let currHaystack = ref(haystack);
  let stop = ref(false);
  let currItem = ref(None);

  while (!(stop^)) { /* (1) */
    switch (currHaystack^) { /* (2) */
    | [item, ..._items] when needle(item) => { /* (3) */
        stop := true;
        currItem := Some(item)
      }
    | [_item, ...items] => currHaystack := items /* (4) */
    | [] => stop := true /* (5) */
    };
  };

  currItem^ /* (6) */
};
