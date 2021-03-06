/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSArray;

@interface BKSInsecureDrawingAction : BSAction

@property (nonatomic,readonly) NSDictionary * pidToContextIdsDictionary; 
@property (nonatomic,readonly) NSArray * processIds; 
@property (nonatomic,readonly) NSArray * secureModeViolations; 
-(NSDictionary *)pidToContextIdsDictionary;
-(id)initWithPidToContextIdsDictionary:(id)arg1 ;
-(NSArray *)processIds;
-(NSArray *)secureModeViolations;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
@end

