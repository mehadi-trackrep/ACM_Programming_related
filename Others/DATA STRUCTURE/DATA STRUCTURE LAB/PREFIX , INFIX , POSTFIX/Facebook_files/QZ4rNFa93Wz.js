/*!CK:1185722991!*//*1459754038,*/

if (self.CavalryLogger) { CavalryLogger.start_js(["GZ99J"]); }

__d("XPubcontentChainingHideController",["XController"],function a(b,c,d,e,f,g){c.__markCompiled&&c.__markCompiled();f.exports=c("XController").create("\/pubcontent\/chaining\/hide\/",{});},null);
__d('ArticleChainingHide',['csx','AsyncRequest','AttachmentRelatedShareConstants','ContextualThing','CSS','DOM','DOMQuery','Event','XPubcontentChainingHideController','tidyEvent'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();var i={listenForQuickHide:function(j,k,l,m,n,o){c('tidyEvent')(c('Event').listen(j,'click',function(){var p=c('DOMQuery').find(k,"^._1ui8"),q=c('DOMQuery').find(p,"._3f-c"),r=c('DOMQuery').find(p,"._3f-d");c('CSS').hide(q);setTimeout(function(){var s=c('ContextualThing').getContext(k),t=c('XPubcontentChainingHideController').getURIBuilder(),u=s&&JSON.parse(s.getAttribute('data-ft'))||{};u.object_id=m;u.reason=o;u.chaining_type=n;if(l)u.qid=l;new (c('AsyncRequest'))().setMethod('POST').setURI(t.getURI()).setData(u).setRelativeTo(k).send();},c('AttachmentRelatedShareConstants').HIDE_DELAY);c('CSS').show(r);}));},listenForUndoLink:function(j,k,l,m){c('tidyEvent')(c('Event').listen(j,'click',function(){var n=c('DOMQuery').find(k,"^._1ui8"),o=c('DOMQuery').find(n,"._3f-c");c('CSS').hide(k);setTimeout(function(){var p=c('ContextualThing').getContext(k),q='/pubcontent/chaining/unhide',r=p&&JSON.parse(p.getAttribute('data-ft'))||{};r.object_id=l;r.chaining_type=m;new (c('AsyncRequest'))().setMethod('POST').setURI(q).setData(r).setRelativeTo(k).send();},c('AttachmentRelatedShareConstants').HIDE_DELAY);c('CSS').show(o);}));},listenForCloseButton:function(j,k){c('tidyEvent')(c('Event').listen(j,'click',function(){c('CSS').hide(k);}));},listenForButtons:function(j,k){c('tidyEvent')(c('Event').listen(j,'click',function(){var m=c('DOMQuery').find(j,"^._1ui8"),n=c('DOMQuery').find(m,"._3f-c"),o=c('DOMQuery').find(m,"._3f-d");c('CSS').hide(n);c('CSS').show(o);}));var l=c('DOMQuery').find(k,"._3f-e");c('tidyEvent')(c('Event').listen(l,'click',function(){var m=c('DOMQuery').find(k,"^._1ui8"),n=c('DOMQuery').find(m,"._3f-c");c('CSS').hide(k);c('CSS').show(n);}));},listenForHideConfirm:function(j,k,l){c('tidyEvent')(c('Event').listen(j,'click',function(m){setTimeout(function(){var n=c('ContextualThing').getContext(j),o=c('XPubcontentChainingHideController').getURIBuilder(),p=n&&JSON.parse(n.getAttribute('data-ft'))||{};p.object_id=k;p.reason=l;new (c('AsyncRequest'))().setMethod('POST').setURI(o.getURI()).setData(p).setRelativeTo(j).send();var q=c('DOMQuery').find(j,"^._1ui8"),r=c('DOMQuery').find(j,"^._4-u2");c('DOM').remove(q);var s=c('DOMQuery').scry(r,"._1ui8");if(s.length===0)c('DOM').remove(r);},c('AttachmentRelatedShareConstants').HIDE_DELAY);}));},listenForUnitHideButton:function(j,k,l){c('tidyEvent')(c('Event').listen(j,'click',function(m){setTimeout(function(){var n=c('XPubcontentChainingHideController').getURIBuilder(),o={object_id:l,unit:true,reason:0};new (c('AsyncRequest'))().setMethod('POST').setURI(n.getURI()).setData(o).send();c('DOM').remove(k);},c('AttachmentRelatedShareConstants').HIDE_DELAY);}));}};f.exports=i;},null);