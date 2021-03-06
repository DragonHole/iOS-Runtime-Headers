/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionContext.h>

@class NSString;

@interface TestCNUIUserActionContext : NSObject <CNUIUserActionContext> {

	BOOL _actionExecutionWasAttemted;
	NSString* _channelIdentifier;

}

@property (nonatomic,copy) NSString * channelIdentifier;                                             //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
@property (assign,nonatomic) BOOL actionExecutionWasAttemted;                                        //@synthesize actionExecutionWasAttemted=_actionExecutionWasAttemted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CNUIUserActionURLOpener> urlOpener; 
@property (nonatomic,readonly) id<CNUIUserActionUserActivityOpener> userActivityOpener; 
@property (nonatomic,readonly) id<CNUIUserActionDialRequestOpener> dialRequestOpener; 
@property (nonatomic,readonly) id<CNUIUserActionRecorder> actionRecorder; 
@property (nonatomic,readonly) id<CNUIUserActionCurator> actionCurator; 
-(void)setActionExecutionWasAttemted:(BOOL)arg1 ;
-(id)nilValue;
-(id<CNUIUserActionURLOpener>)urlOpener;
-(id<CNUIUserActionUserActivityOpener>)userActivityOpener;
-(id<CNUIUserActionDialRequestOpener>)dialRequestOpener;
-(id<CNUIUserActionRecorder>)actionRecorder;
-(id<CNUIUserActionCurator>)actionCurator;
-(BOOL)actionExecutionWasAttemted;
-(NSString *)channelIdentifier;
-(void)setChannelIdentifier:(NSString *)arg1 ;
@end

