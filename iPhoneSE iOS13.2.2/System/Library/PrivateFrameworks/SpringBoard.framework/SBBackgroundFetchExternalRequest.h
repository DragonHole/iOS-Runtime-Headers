/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBBackgroundFetchTask, UIFetchContentInBackgroundAction;

@interface SBBackgroundFetchExternalRequest : NSObject {

	SBBackgroundFetchTask* _task;
	UIFetchContentInBackgroundAction* _action;

}

@property (nonatomic,readonly) UIFetchContentInBackgroundAction * action;              //@synthesize action=_action - In the implementation block
-(void)dealloc;
-(UIFetchContentInBackgroundAction *)action;
-(void)execute;
-(id)initForBundleID:(id)arg1 ;
@end
