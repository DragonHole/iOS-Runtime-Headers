/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriResponse.h>

@interface STGenericIntentResponse : AFSiriResponse {

	long long _responseCode;

}

@property (assign,nonatomic) long long responseCode;              //@synthesize responseCode=_responseCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResponseCode:(long long)arg1 ;
-(long long)responseCode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
