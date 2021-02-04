/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLResetFeedbackMessage : CPLFeedbackMessage {

	NSString* _resetType;
	NSString* _reason;
	NSString* _uuid;

}

@property (nonatomic,readonly) NSString * resetType;              //@synthesize resetType=_resetType - In the implementation block
@property (nonatomic,readonly) NSString * reason;                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                   //@synthesize uuid=_uuid - In the implementation block
+(id)feedbackType;
-(id)serverMessage;
-(id)initWithResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3 ;
-(NSString *)resetType;
-(NSString *)uuid;
-(NSString *)reason;
@end
