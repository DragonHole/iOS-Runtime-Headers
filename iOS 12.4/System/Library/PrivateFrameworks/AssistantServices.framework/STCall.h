/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class STContactAddress;

@interface STCall : STSiriModelObject {

	long long _service;
	STContactAddress* _initiatorAddress;
	STContactAddress* _recipientAddress;

}
+(BOOL)supportsSecureCoding;
-(long long)service;
-(void)setService:(long long)arg1 ;
-(id)_aceContextObjectValue;
-(id)initiatorAddress;
-(void)setInitiatorAddress:(id)arg1 ;
-(id)recipientAddress;
-(void)setRecipientAddress:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

