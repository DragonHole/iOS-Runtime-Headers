/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBTimestamp, NSString;

@interface TRIRollback : TRIPBMessage

@property (nonatomic,retain) TRIPBTimestamp * rollbackTimestamp; 
@property (assign,nonatomic) BOOL hasRollbackTimestamp; 
@property (nonatomic,copy) NSString * rolledBackBy; 
@property (assign,nonatomic) BOOL hasRolledBackBy; 
+(id)descriptor;
@end

