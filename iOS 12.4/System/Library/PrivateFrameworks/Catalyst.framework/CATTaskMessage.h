/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATMessage.h>

@class NSUUID;

@interface CATTaskMessage : CATMessage {

	NSUUID* _taskUUID;

}

@property (nonatomic,copy) NSUUID * taskUUID;              //@synthesize taskUUID=_taskUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTaskUUID:(NSUUID *)arg1 ;
-(id)initWithTaskUUID:(id)arg1 ;
-(NSUUID *)taskUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

