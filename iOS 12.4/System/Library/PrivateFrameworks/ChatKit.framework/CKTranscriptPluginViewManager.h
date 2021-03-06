/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject {

	IMMultiDict* _reusablePluginViewsByClassName;
	NSMutableDictionary* _pluginViewToReuseDelegateMap;

}
+(id)sharedInstance;
-(void)resetState;
-(void)enqueuePluginViewForReuse:(id)arg1 ;
-(BOOL)_objectSupportsPluginViewReuse:(id)arg1 ;
-(void)_registerPluginView:(id)arg1 withReuseDelegate:(id)arg2 ;
-(id)_pointerKeyForPluginView:(id)arg1 ;
-(id)dequeuePluginViewForBalloonController:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
@end

