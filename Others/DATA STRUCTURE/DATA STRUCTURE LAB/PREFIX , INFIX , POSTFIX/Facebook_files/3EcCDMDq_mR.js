/*!CK:444916280!*//*1459778168,*/

if (self.CavalryLogger) { CavalryLogger.start_js(["yJTcZ"]); }

__d('AppsDivebarDisplayController',['cx','AppsDivebarConfigData','AsyncRequest','Arbiter','CSS','UIPagelet'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();var i='173',j={isVisible:function(){if(typeof this._visible!='undefined')return this._visible;this._visible=!c('AppsDivebarConfigData').hidden;return this._visible;},showApps:function(){this._visible=true;var k={fb_source_category:'sidebar'};c('UIPagelet').loadFromEndpoint('GamesDivebarPagelet','pagelet_canvas_nav_content',k);c('CSS').show('apps_gripper');c('CSS').show('pagelet_canvas_nav_content');c('CSS').addClass('pagelet_canvas_nav_content',"_4woj");c('Arbiter').inform('AppsDivebar/show-apps');new (c('AsyncRequest'))('/ajax/feed/apps/resize').setData({height:''+i,menu:true}).setMethod('POST').send();},hideApps:function(){this._visible=false;c('CSS').hide('pagelet_canvas_nav_content');c('CSS').hide('apps_gripper');c('Arbiter').inform('AppsDivebar/hide-apps');new (c('AsyncRequest'))('/ajax/feed/apps/resize').setData({height:'1',menu:true}).setMethod('POST').send();}};f.exports=j;},null);
__d('DOMP2PTrigger',['cx','CurrentEnvironment','JSXDOM','P2PAmountUtils','P2PTriggersUtils','TransformTextToDOMMixin'],function a(b,c,d,e,f,g,h){if(c.__markCompiled)c.__markCompiled();var i={MAX_ITEMS:40,match:function(j){var k=c('P2PTriggersUtils').getMatches(j);if(!k||!k.length)return false;var l=k[0];if(!c('P2PAmountUtils').isValidSendAmount(l))return false;var m=k.index;return {startIndex:m,endIndex:m+l.length,element:this._element(l)};},_element:function(j){return (c('JSXDOM').a({href:"#",className:"_35i0"+(c('CurrentEnvironment').facebookdotcom?' '+"_4g4e":''),"data-p2p-trigger":j},j));}};f.exports=Object.assign(i,c('TransformTextToDOMMixin'));},null);
__d('p2pTriggerJSXDOMToString',['DOMEmoji','DOMEmote','DOMP2PTrigger','JSXDOM','transformTextToDOM'],function a(b,c,d,e,f,g){if(c.__markCompiled)c.__markCompiled();var h=function(i,j,k,l){var m=[];if(l)m.push(c('DOMP2PTrigger'));if(j)m.push(c('DOMEmoji'));if(k)m.push(c('DOMEmote'));return (c('JSXDOM').span(null,c('transformTextToDOM')(i,m)).innerHTML);};f.exports=h;},null);
__d('P2PTriggers.react',['DOM','Event','MercuryIDs','P2PActions','P2PLogger','P2PPaymentLoggerEvent','P2PPaymentLoggerEventFlow','P2PUserEligibilityStore','StoreAndPropBasedStateMixin','React','ReactDOM','nullthrows','p2pTriggerJSXDOMToString'],function a(b,c,d,e,f,g){'use strict';if(c.__markCompiled)c.__markCompiled();var h=c('React').PropTypes,i=c('React').createClass({displayName:'P2PTriggers',mixins:[c('StoreAndPropBasedStateMixin')(c('P2PUserEligibilityStore'))],propTypes:{renderEmoji:h.bool,renderEmoticons:h.bool,text:h.string.isRequired,threadID:h.string.isRequired},getInitialState:function(){return {amount:''};},statics:{calculateState:function(j){var k=c('MercuryIDs').isGroupChat(j.threadID)||c('P2PUserEligibilityStore').getEligibilityByThreadID(j.threadID);return {isThreadEligible:k,otherUserID:c('MercuryIDs').getUserIDFromThreadID(j.threadID)};}},_clickListeners:null,componentDidMount:function(){this._clickListeners=[];this.bindClickListeners();},componentWillUnmount:function(){this.unbindClickListeners();},log:function(j,k){c('P2PLogger').log(j,babelHelpers['extends']({www_event_flow:c('P2PPaymentLoggerEventFlow').UI_FLOW_P2P_SEND,object_id:this.state.otherUserID},k));},bindClickListeners:function(){var j=c('nullthrows')(this._clickListeners);if(!j.length){var k=c('DOM').scry(c('ReactDOM').findDOMNode(this),'[data-p2p-trigger]');for(var l=0,m=k.length;l<m;l++)j.push(c('Event').listen(k[l],'click',this.handleTriggerClick));}},unbindClickListeners:function(){var j;if(this._clickListeners){for(var k=0,l=this._clickListeners.length;k<l;k++){j=this._clickListeners[k];if(j)j.remove();}this._clickListeners=[];}},componentDidUpdate:function(j,k){if(!k.isThreadEligible&&this.state.isThreadEligible)this.bindClickListeners();},getAmountFromTriggerClickEvent:function(j){var k=j.target.getAttribute('data-p2p-trigger')||'';return k.replace(/[^0-9\.]+/g,'');},handleTriggerClick:function(j){j.preventDefault();var k=this.getAmountFromTriggerClickEvent(j);this.setState({amount:k});this.openSendView();this.log(c('P2PPaymentLoggerEvent').UI_ACTN_INITIATE_SEND_TRIGGER,{raw_amount:this.state.amount,currency:'USD'});},openSendView:function(){c('P2PActions').chatSendViewOpened({threadID:this.props.threadID,amount:this.state.amount});},render:function(){var j=c('p2pTriggerJSXDOMToString')(this.props.text,this.props.renderEmoji,this.props.renderEmoticons,this.state.isThreadEligible);return (c('React').createElement('span',{dangerouslySetInnerHTML:{__html:j}}));}});f.exports=i;},null);
__d('TextWithEntitiesAndP2P.react',['BaseTextWithEntities.react','Link.react','P2PTriggers.react','React'],function a(b,c,d,e,f,g){'use strict';if(c.__markCompiled)c.__markCompiled();var h=c('React').createClass({displayName:'TextWithEntitiesAndP2P',_renderText:function(i){return (c('React').createElement(c('P2PTriggers.react'),{text:i,renderEmoticons:this.props.renderEmoticons,renderEmoji:this.props.renderEmoji,threadID:this.props.threadID}));},_renderRange:function(i,j){if(this.props.interpolator){return this.props.interpolator(i,j);}else return (c('React').createElement(c('Link.react'),{href:j.entity},i));},render:function(){return (c('React').createElement(c('BaseTextWithEntities.react'),babelHelpers['extends']({},this.props,{textRenderer:this._renderText,rangeRenderer:this._renderRange,ranges:this.props.ranges,imageRanges:this.props.imageRanges,aggregatedRanges:this.props.aggregatedRanges,text:this.props.text})));}});f.exports=h;},null);