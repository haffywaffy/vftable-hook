# vftable-hook
Simple templated class for getting and hooking functions from vftables

# Usage:

<b>Hooking 'function_to_hook'</b>
</br>
<code>
  original_function = vftable(object).setfunction\<FunctionType\>(VFTABLE_INDEX, function_to_hook);
</code>
  
<b>Getting and calling 'some_function'</b>
</br>
<code>
  some_function = vftable(object).getfunction\<FunctionType\>(VFTABLE_INDEX);
</code>
</br>
<code>
  some_function();
</code>
