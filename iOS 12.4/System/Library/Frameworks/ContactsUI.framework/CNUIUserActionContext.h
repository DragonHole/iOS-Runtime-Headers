/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CNUIUserActionContext <NSObject>
@property (nonatomic,readonly) id<CNUIUserActionURLOpener> urlOpener; 
@property (nonatomic,readonly) id<CNUIUserActionUserActivityOpener> userActivityOpener; 
@property (nonatomic,readonly) id<CNUIUserActionDialRequestOpener> dialRequestOpener; 
@property (nonatomic,readonly) id<CNUIUserActionRecorder> actionRecorder; 
@property (nonatomic,readonly) id<CNUIUserActionCurator> actionCurator; 
@property (nonatomic,copy) NSString * channelIdentifier; 
@required
-(id<CNUIUserActionURLOpener>)urlOpener;
-(id<CNUIUserActionUserActivityOpener>)userActivityOpener;
-(id<CNUIUserActionDialRequestOpener>)dialRequestOpener;
-(id<CNUIUserActionRecorder>)actionRecorder;
-(id<CNUIUserActionCurator>)actionCurator;
-(NSString *)channelIdentifier;
-(void)setChannelIdentifier:(id)arg1;

@end

