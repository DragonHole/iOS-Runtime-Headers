/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSDictionary;

@interface UIWatchKitExtensionRequestAction : BSAction

@property (nonatomic,retain,readonly) NSDictionary * request; 
-(NSDictionary *)request;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(long long)UIActionType;
-(id)initWithRequest:(id)arg1 withHandler:(/*^block*/id)arg2 ;
@end

