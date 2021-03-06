# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import kernel

class A
	fun foo
		!bar: Int do
			if maybe then
			#alt1# return
			#alt2# return 1
			#alt3# abort
			#alt4# continue
			#alt6# break 1
			end
			#alt5# break
			continue 20 #alt5#
		end
	do
		1.output
		bar.output
		3.output
	end
end

fun maybe: Bool do return true

var a = new A
0.output
a.foo !bar do continue 2
0.output
a.foo
0.output
